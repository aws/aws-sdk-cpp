/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeKeyRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeKeyRegistrationRequest::SerializePayload() const
{
  return {};
}

void DescribeKeyRegistrationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_defaultKeyOnlyHasBeenSet)
    {
      ss << m_defaultKeyOnly;
      uri.AddQueryStringParameter("default-key-only", ss.str());
      ss.str("");
    }

}



