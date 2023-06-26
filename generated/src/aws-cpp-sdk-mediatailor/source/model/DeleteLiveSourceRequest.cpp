/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DeleteLiveSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLiveSourceRequest::DeleteLiveSourceRequest() : 
    m_liveSourceNameHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false)
{
}

Aws::String DeleteLiveSourceRequest::SerializePayload() const
{
  return {};
}




