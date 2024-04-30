<script>
  let count = 0; // state(상태값)

  const handleClick = () => (count = count + 1); // count를 count + 1로 대할당
</script>

<button on:click={handleClick}>
  클릭 수 {count} <!-- {} 기호로 마크업에 상태값 표시 -->
</button>
