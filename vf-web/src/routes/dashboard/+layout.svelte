<script lang="ts">
	import { playlists } from './(data)/playlists.js';
	import { AlbumArtwork, Sidebar, Menu, PodcastEmptyPlaceholder } from './(components)/index.js';
</script>

<!-- <Sidebar {playlists} class="hidden lg:block" /> -->

<div class="hidden md:block">
	<Menu />
	<div class="border-t">
		<div class="bg-background">
			<div class="grid lg:grid-cols-5">
				<Sidebar {playlists} class="hidden lg:block" />
				<slot />
			</div>
		</div>
	</div>
</div>
