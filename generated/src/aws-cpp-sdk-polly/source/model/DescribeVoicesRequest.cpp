/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeVoicesRequest::SerializePayload() const
{
  return {};
}

void DescribeVoicesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_engineHasBeenSet)
    {
      ss << EngineMapper::GetNameForEngine(m_engine);
      uri.AddQueryStringParameter("Engine", ss.str());
      ss.str("");
    }

    if(m_languageCodeHasBeenSet)
    {
      ss << LanguageCodeMapper::GetNameForLanguageCode(m_languageCode);
      uri.AddQueryStringParameter("LanguageCode", ss.str());
      ss.str("");
    }

    if(m_includeAdditionalLanguageCodesHasBeenSet)
    {
      ss << m_includeAdditionalLanguageCodes;
      uri.AddQueryStringParameter("IncludeAdditionalLanguageCodes", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



