/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetLensReviewResult.h>
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

GetLensReviewResult::GetLensReviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLensReviewResult& GetLensReviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");
    m_workloadIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MilestoneNumber"))
  {
    m_milestoneNumber = jsonValue.GetInteger("MilestoneNumber");
    m_milestoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LensReview"))
  {
    m_lensReview = jsonValue.GetObject("LensReview");
    m_lensReviewHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
