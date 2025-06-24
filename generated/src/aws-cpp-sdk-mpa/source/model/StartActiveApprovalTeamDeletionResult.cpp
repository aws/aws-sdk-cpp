/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/StartActiveApprovalTeamDeletionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartActiveApprovalTeamDeletionResult::StartActiveApprovalTeamDeletionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartActiveApprovalTeamDeletionResult& StartActiveApprovalTeamDeletionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeletionCompletionTime"))
  {
    m_deletionCompletionTime = jsonValue.GetString("DeletionCompletionTime");
    m_deletionCompletionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionStartTime"))
  {
    m_deletionStartTime = jsonValue.GetString("DeletionStartTime");
    m_deletionStartTimeHasBeenSet = true;
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
