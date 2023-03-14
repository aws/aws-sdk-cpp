/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DeleteRecommendationTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteRecommendationTemplateResult::DeleteRecommendationTemplateResult() : 
    m_status(RecommendationTemplateStatus::NOT_SET)
{
}

DeleteRecommendationTemplateResult::DeleteRecommendationTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RecommendationTemplateStatus::NOT_SET)
{
  *this = result;
}

DeleteRecommendationTemplateResult& DeleteRecommendationTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("recommendationTemplateArn"))
  {
    m_recommendationTemplateArn = jsonValue.GetString("recommendationTemplateArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RecommendationTemplateStatusMapper::GetRecommendationTemplateStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
