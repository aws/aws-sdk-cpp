/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppAssessmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAppAssessmentsRequest::SerializePayload() const
{
  return {};
}

void ListAppAssessmentsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_appArnHasBeenSet)
    {
      ss << m_appArn;
      uri.AddQueryStringParameter("appArn", ss.str());
      ss.str("");
    }

    if(m_assessmentNameHasBeenSet)
    {
      ss << m_assessmentName;
      uri.AddQueryStringParameter("assessmentName", ss.str());
      ss.str("");
    }

    if(m_assessmentStatusHasBeenSet)
    {
      for(const auto& item : m_assessmentStatus)
      {
        ss << AssessmentStatusMapper::GetNameForAssessmentStatus(item);
        uri.AddQueryStringParameter("assessmentStatus", ss.str());
        ss.str("");
      }
    }

    if(m_complianceStatusHasBeenSet)
    {
      ss << ComplianceStatusMapper::GetNameForComplianceStatus(m_complianceStatus);
      uri.AddQueryStringParameter("complianceStatus", ss.str());
      ss.str("");
    }

    if(m_invokerHasBeenSet)
    {
      ss << AssessmentInvokerMapper::GetNameForAssessmentInvoker(m_invoker);
      uri.AddQueryStringParameter("invoker", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
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

}



