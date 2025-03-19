/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CreatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("PackageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if(m_packageDescriptionHasBeenSet)
  {
   payload.WithString("PackageDescription", m_packageDescription);

  }

  if(m_packageSourceHasBeenSet)
  {
   payload.WithObject("PackageSource", m_packageSource.Jsonize());

  }

  if(m_packageConfigurationHasBeenSet)
  {
   payload.WithObject("PackageConfiguration", m_packageConfiguration.Jsonize());

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_packageVendingOptionsHasBeenSet)
  {
   payload.WithObject("PackageVendingOptions", m_packageVendingOptions.Jsonize());

  }

  if(m_packageEncryptionOptionsHasBeenSet)
  {
   payload.WithObject("PackageEncryptionOptions", m_packageEncryptionOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




