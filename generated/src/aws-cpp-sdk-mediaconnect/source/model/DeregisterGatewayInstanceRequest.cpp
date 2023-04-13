/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DeregisterGatewayInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeregisterGatewayInstanceRequest::DeregisterGatewayInstanceRequest() : 
    m_force(false),
    m_forceHasBeenSet(false),
    m_gatewayInstanceArnHasBeenSet(false)
{
}

Aws::String DeregisterGatewayInstanceRequest::SerializePayload() const
{
  return {};
}

void DeregisterGatewayInstanceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_forceHasBeenSet)
    {
      ss << m_force;
      uri.AddQueryStringParameter("force", ss.str());
      ss.str("");
    }

}



