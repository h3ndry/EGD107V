<script lang="ts">
	import { buttonVariants } from '$lib/components/ui/button';

	// import { buttonVariants } from "$lib/registry/new-york/ui/button/index.js";

	import { cn } from '$lib/utils.js';

	import { Icons } from '$lib/components/icons/index.js';

	import { siteConfig } from '$lib/config/site.js';

	import Announcement from '$lib/components/announcement/announcement.svelte';
	import * as PageHeader from '$lib/components/page-header/index.js';
</script>

<svelte:head>
	<title>Home</title>
	<meta name="description" content="virtual fencing for cattle" />
</svelte:head>

<div class="container relative">
	<PageHeader.Root class="pb-8">
		<Announcement />
		<PageHeader.Heading>IoT Virtual Fence For Cattle</PageHeader.Heading>
		<PageHeader.Description class="text-muted-foreground">
			Beautifully designed components that you can copy and paste into your apps. Accessible.
			Customizable. Open Source.
		</PageHeader.Description>
		<p class="text-center text-sm text-orange-700 dark:text-orange-400">
			This is an unofficial port of <a
				href={siteConfig.links.shadGithub}
				target="_blank"
				rel="noreferrer"
				class="font-medium underline underline-offset-4">shadcn/ui</a
			>
			to Svelte, and is not affiliated with
			<a
				href={siteConfig.links.shadTwitter}
				target="_blank"
				rel="noreferrer"
				class="font-medium underline underline-offset-4">@shadcn</a
			>.
		</p>
		<div class="flex w-full items-center justify-center space-x-4 py-4 md:pb-10">
			<a href="/dashboard" class={cn(buttonVariants())}> Go to Dashboard </a>
			<a
				target="_blank"
				rel="noreferrer"
				href={siteConfig.links.github}
				class={cn(buttonVariants({ variant: 'outline' }))}
			>
				<Icons.gitHub class="mr-2 h-4 w-4" />
				GitHub
			</a>
		</div>
	</PageHeader.Root>
</div>
