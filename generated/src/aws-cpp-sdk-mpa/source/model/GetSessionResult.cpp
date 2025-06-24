/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/GetSessionResult.h>
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

GetSessionResult::GetSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSessionResult& GetSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SessionArn"))
  {
    m_sessionArn = jsonValue.GetString("SessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalTeamArn"))
  {
    m_approvalTeamArn = jsonValue.GetString("ApprovalTeamArn");
    m_approvalTeamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalTeamName"))
  {
    m_approvalTeamName = jsonValue.GetString("ApprovalTeamName");
    m_approvalTeamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProtectedResourceArn"))
  {
    m_protectedResourceArn = jsonValue.GetString("ProtectedResourceArn");
    m_protectedResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalStrategy"))
  {
    m_approvalStrategy = jsonValue.GetObject("ApprovalStrategy");
    m_approvalStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfApprovers"))
  {
    m_numberOfApprovers = jsonValue.GetInteger("NumberOfApprovers");
    m_numberOfApproversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationTime"))
  {
    m_initiationTime = jsonValue.GetString("InitiationTime");
    m_initiationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetString("ExpirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetString("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("Metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = SessionStatusCodeMapper::GetSessionStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionStatus"))
  {
    m_executionStatus = SessionExecutionStatusMapper::GetSessionExecutionStatusForName(jsonValue.GetString("ExecutionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionName"))
  {
    m_actionName = jsonValue.GetString("ActionName");
    m_actionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterServicePrincipal"))
  {
    m_requesterServicePrincipal = jsonValue.GetString("RequesterServicePrincipal");
    m_requesterServicePrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterPrincipalArn"))
  {
    m_requesterPrincipalArn = jsonValue.GetString("RequesterPrincipalArn");
    m_requesterPrincipalArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterAccountId"))
  {
    m_requesterAccountId = jsonValue.GetString("RequesterAccountId");
    m_requesterAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterRegion"))
  {
    m_requesterRegion = jsonValue.GetString("RequesterRegion");
    m_requesterRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterComment"))
  {
    m_requesterComment = jsonValue.GetString("RequesterComment");
    m_requesterCommentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionCompletionStrategy"))
  {
    m_actionCompletionStrategy = ActionCompletionStrategyMapper::GetActionCompletionStrategyForName(jsonValue.GetString("ActionCompletionStrategy"));
    m_actionCompletionStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApproverResponses"))
  {
    Aws::Utils::Array<JsonView> approverResponsesJsonList = jsonValue.GetArray("ApproverResponses");
    for(unsigned approverResponsesIndex = 0; approverResponsesIndex < approverResponsesJsonList.GetLength(); ++approverResponsesIndex)
    {
      m_approverResponses.push_back(approverResponsesJsonList[approverResponsesIndex].AsObject());
    }
    m_approverResponsesHasBeenSet = true;
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
