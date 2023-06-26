﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StartAssetBundleImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAssetBundleImportJobRequest::StartAssetBundleImportJobRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_assetBundleImportJobIdHasBeenSet(false),
    m_assetBundleImportSourceHasBeenSet(false),
    m_overrideParametersHasBeenSet(false),
    m_failureAction(AssetBundleImportFailureAction::NOT_SET),
    m_failureActionHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




