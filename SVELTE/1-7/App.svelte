<script>
  let count = 1

  $: doubled = count * 2

  $: {
    console.log(count)
    console.log(doubled)
  }

  function handleClick() {
    //이벤트 코드
    count += 1
  }
  
</script>

<button on:click={handleClick}>
  클릭수 {count}  {count == 1 ? 'time' : 'times'}
</button>

<p>{count} 두배는 {doubled}</p>
