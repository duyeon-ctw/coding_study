<script>
  function handelClick_1(param) {
    alert('선택값 ${param}')
  }

  function handelClick_2(param) {
    alert('선택값 ${param}')
  }
</script>

<button on:click={() => handelClick_1('1번')}>1번 버튼</button>
<button on:click={() => handelClick_2('2번')}>2번 버튼</button>
