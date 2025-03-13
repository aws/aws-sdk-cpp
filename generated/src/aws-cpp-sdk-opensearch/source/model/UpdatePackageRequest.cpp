/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpdatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_packageSourceHasBeenSet)
  {
   payload.WithObject("PackageSource", m_packageSource.Jsonize());

  }

  if(m_packageDescriptionHasBeenSet)
  {
   payload.WithString("PackageDescription", m_packageDescription);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("CommitMessage", m_commitMessage);

  }

  if(m_packageConfigurationHasBeenSet)
  {
   payload.WithObject("PackageConfiguration", m_packageConfiguration.Jsonize());

  }

  if(m_packageEncryptionOptionsHasBeenSet)
  {
   payload.WithObject("PackageEncryptionOptions", m_packageEncryptionOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




