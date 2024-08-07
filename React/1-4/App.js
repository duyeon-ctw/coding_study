import './App.css'

function Header(props){
  return (
    <header>
      <h1><a href='/'>{props.title}</a></h1>
    </header>
  )
}

function Nav(props){
  const lis = []
  for(let i=0; i<props.topics.length; i++){
    let t = props.topics[i];
    lis.push(<li key={t.id}><a href={"/reed/"+t.id}>{t.title}</a></li>)
  }
  
  return (
    <nav>
      <ol>
        {lis}
      </ol>
    </nav>
  )
}

function Article(props){
  return (
    <article>
      <h2>{props.title}</h2>
      {props.body}
    </article>
  )
}

export default function App() {
  const topoics = [
    {id: 1, title: 'html', body: 'html is ...'},
    {id: 2, title: 'css', body: 'css is ...'},
    {id: 3, title: 'javascript', body: 'javascript is ...'}
  ]
  return (
    <main>
      <Header title="REACT" />
      <Nav topics={topoics}/>
      <Article title="Welcome" body="Hello, WEB"/>
    </main>
  )
}
