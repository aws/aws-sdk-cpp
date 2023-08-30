/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/GetServicePrincipalNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetServicePrincipalNameRequest::GetServicePrincipalNameRequest() : 
    m_connectorArnHasBeenSet(false),
    m_directoryRegistrationArnHasBeenSet(false)
{
}

Aws::String GetServicePrincipalNameRequest::SerializePayload() const
{
  return {};
}




