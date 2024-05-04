<script>
  let count = 1

  function handleClick() {
    count += 1
  }
  
</script>

<button on:click={handleClick}>
  클릭수 {count}  {count == 1 ? 'time' : 'times'}
</button>
