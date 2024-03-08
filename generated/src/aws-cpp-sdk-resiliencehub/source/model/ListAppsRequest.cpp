/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAppsRequest::ListAppsRequest() : 
    m_appArnHasBeenSet(false),
    m_fromLastAssessmentTimeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_reverseOrder(false),
    m_reverseOrderHasBeenSet(false),
    m_toLastAssessmentTimeHasBeenSet(false)
{
}

Aws::String ListAppsRequest::SerializePayload() const
{
  return {};
}

void ListAppsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_appArnHasBeenSet)
    {
      ss << m_appArn;
      uri.AddQueryStringParameter("appArn", ss.str());
      ss.str("");
    }

    if(m_fromLastAssessmentTimeHasBeenSet)
    {
      ss << m_fromLastAssessmentTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("fromLastAssessmentTime", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_reverseOrderHasBeenSet)
    {
      ss << m_reverseOrder;
      uri.AddQueryStringParameter("reverseOrder", ss.str());
      ss.str("");
    }

    if(m_toLastAssessmentTimeHasBeenSet)
    {
      ss << m_toLastAssessmentTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("toLastAssessmentTime", ss.str());
      ss.str("");
    }

}



