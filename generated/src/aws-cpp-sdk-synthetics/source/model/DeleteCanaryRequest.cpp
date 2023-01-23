/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/DeleteCanaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteCanaryRequest::DeleteCanaryRequest() : 
    m_nameHasBeenSet(false),
    m_deleteLambda(false),
    m_deleteLambdaHasBeenSet(false)
{
}

Aws::String DeleteCanaryRequest::SerializePayload() const
{
  return {};
}

void DeleteCanaryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deleteLambdaHasBeenSet)
    {
      ss << m_deleteLambda;
      uri.AddQueryStringParameter("deleteLambda", ss.str());
      ss.str("");
    }

}



