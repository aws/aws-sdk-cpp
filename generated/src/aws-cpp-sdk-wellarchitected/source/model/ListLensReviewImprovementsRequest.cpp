/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListLensReviewImprovementsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListLensReviewImprovementsRequest::ListLensReviewImprovementsRequest() : 
    m_workloadIdHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_questionPriority(QuestionPriority::NOT_SET),
    m_questionPriorityHasBeenSet(false)
{
}

Aws::String ListLensReviewImprovementsRequest::SerializePayload() const
{
  return {};
}

void ListLensReviewImprovementsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_pillarIdHasBeenSet)
    {
      ss << m_pillarId;
      uri.AddQueryStringParameter("PillarId", ss.str());
      ss.str("");
    }

    if(m_milestoneNumberHasBeenSet)
    {
      ss << m_milestoneNumber;
      uri.AddQueryStringParameter("MilestoneNumber", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_questionPriorityHasBeenSet)
    {
      ss << QuestionPriorityMapper::GetNameForQuestionPriority(m_questionPriority);
      uri.AddQueryStringParameter("QuestionPriority", ss.str());
      ss.str("");
    }

}



