<template>
  <div>
    <button @click="handeClick">
      Clicked {{count}} {{count == 1 ? 'time' : 'times'}}
    </button>

    <p>{{count}} doubled is {{doubled}}</p>
  </div>
  
</template>

<script>
  export degault {
    data () {
      return {
        count: 0
      }
    },
    computed: {
      doubled () {
        return this.count * 2
      }
    },
    watch: {
      
    }
  }
</script>

