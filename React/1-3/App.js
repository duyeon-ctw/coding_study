import './App.css'

function Header(props){
  return (
    <header>
      <h1><a href='/'>{props.title}</a></h1>
    </header>
  )
}

function Nav(){
  return (
    <nav>
      <ol>
        <li><a href="/read/1">html</a></li>
        <li><a href="/read/2">css</a></li>
        <li><a href="/read/3">js</a></li>
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
  return (
    <main>
      <Header title="REACT" />
      <Nav/>
      <Article title="Welcome" body="Hello, WEB"/>
    </main>
  )
}
