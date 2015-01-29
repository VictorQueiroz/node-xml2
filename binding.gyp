{
	'targets': [
		{
			'product_extension': 'node',
			'type': 'shared_library',
			'target_name': 'node_xml2',
			'sources': [
				"src/node_xml2.cc"
			],
			'include_dirs': [
        '<!(node -e "require(\'nan\')")'
      ],
      'dependencies': [
        './vendor/libxml2/libxml2.gyp:libxml2'
      ]
		}
	]
}