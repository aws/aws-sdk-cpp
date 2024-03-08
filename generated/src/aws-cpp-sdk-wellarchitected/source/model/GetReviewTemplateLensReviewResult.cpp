/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetReviewTemplateLensReviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReviewTemplateLensReviewResult::GetReviewTemplateLensReviewResult()
{
}

GetReviewTemplateLensReviewResult::GetReviewTemplateLensReviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReviewTemplateLensReviewResult& GetReviewTemplateLensReviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

  }

  if(jsonValue.ValueExists("LensReview"))
  {
    m_lensReview = jsonValue.GetObject("LensReview");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
