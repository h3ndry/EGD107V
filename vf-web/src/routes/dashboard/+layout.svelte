<script lang="ts">
	import { playlists } from './(data)/playlists.js';
	import {Search, UserNav, DashboardMainNav, Sidebar, Menu, TeamSwitcher } from './(components)/index.js';
</script>

<!-- <Sidebar {playlists} class="hidden lg:block" /> -->

<div class="hidden md:block">
	<!-- <Menu /> -->

	<div class="border-b">
		<div class="flex h-16 items-center px-4">
			<TeamSwitcher />
			<DashboardMainNav class="mx-6" />
			<div class="ml-auto flex items-center space-x-4">
				<Search />
				<UserNav />
			</div>
		</div>
	</div>


	<div class="border-t">
		<div class="bg-background">
			<div class="grid lg:grid-cols-5">
				<Sidebar {playlists} class="hidden lg:block" />
				<slot />
			</div>
		</div>
	</div>
</div>
