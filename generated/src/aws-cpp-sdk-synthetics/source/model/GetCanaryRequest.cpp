/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/GetCanaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetCanaryRequest::SerializePayload() const
{
  return {};
}

void GetCanaryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dryRunIdHasBeenSet)
    {
      ss << m_dryRunId;
      uri.AddQueryStringParameter("dryRunId", ss.str());
      ss.str("");
    }

}



