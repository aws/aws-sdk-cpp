/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/GetApprovalTeamResult.h>
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

GetApprovalTeamResult::GetApprovalTeamResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApprovalTeamResult& GetApprovalTeamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("Approvers"))
  {
    Aws::Utils::Array<JsonView> approversJsonList = jsonValue.GetArray("Approvers");
    for(unsigned approversIndex = 0; approversIndex < approversJsonList.GetLength(); ++approversIndex)
    {
      m_approvers.push_back(approversJsonList[approversIndex].AsObject());
    }
    m_approversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApprovalTeamStatusMapper::GetApprovalTeamStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = ApprovalTeamStatusCodeMapper::GetApprovalTeamStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateSessionArn"))
  {
    m_updateSessionArn = jsonValue.GetString("UpdateSessionArn");
    m_updateSessionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");
    m_versionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Policies"))
  {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("Policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetString("LastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PendingUpdate"))
  {
    m_pendingUpdate = jsonValue.GetObject("PendingUpdate");
    m_pendingUpdateHasBeenSet = true;
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
