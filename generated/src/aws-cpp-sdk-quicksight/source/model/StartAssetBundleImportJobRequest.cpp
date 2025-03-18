/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StartAssetBundleImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAssetBundleImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetBundleImportJobIdHasBeenSet)
  {
   payload.WithString("AssetBundleImportJobId", m_assetBundleImportJobId);

  }

  if(m_assetBundleImportSourceHasBeenSet)
  {
   payload.WithObject("AssetBundleImportSource", m_assetBundleImportSource.Jsonize());

  }

  if(m_overrideParametersHasBeenSet)
  {
   payload.WithObject("OverrideParameters", m_overrideParameters.Jsonize());

  }

  if(m_failureActionHasBeenSet)
  {
   payload.WithString("FailureAction", AssetBundleImportFailureActionMapper::GetNameForAssetBundleImportFailureAction(m_failureAction));
  }

  if(m_overridePermissionsHasBeenSet)
  {
   payload.WithObject("OverridePermissions", m_overridePermissions.Jsonize());

  }

  if(m_overrideTagsHasBeenSet)
  {
   payload.WithObject("OverrideTags", m_overrideTags.Jsonize());

  }

  if(m_overrideValidationStrategyHasBeenSet)
  {
   payload.WithObject("OverrideValidationStrategy", m_overrideValidationStrategy.Jsonize());

  }

  return payload.View().WriteReadable();
}




