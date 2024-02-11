/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/GetConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConnectorRequest::GetConnectorRequest() : 
    m_connectorArnHasBeenSet(false)
{
}

Aws::String GetConnectorRequest::SerializePayload() const
{
  return {};
}




