/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/PromoteResourceShareCreatedFromPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

PromoteResourceShareCreatedFromPolicyRequest::PromoteResourceShareCreatedFromPolicyRequest() : 
    m_resourceShareArnHasBeenSet(false)
{
}

Aws::String PromoteResourceShareCreatedFromPolicyRequest::SerializePayload() const
{
  return {};
}

void PromoteResourceShareCreatedFromPolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceShareArnHasBeenSet)
    {
      ss << m_resourceShareArn;
      uri.AddQueryStringParameter("resourceShareArn", ss.str());
      ss.str("");
    }

}



