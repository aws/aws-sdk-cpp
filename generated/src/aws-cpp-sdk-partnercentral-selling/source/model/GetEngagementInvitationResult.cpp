/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/GetEngagementInvitationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEngagementInvitationResult::GetEngagementInvitationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEngagementInvitationResult& GetEngagementInvitationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PayloadType"))
  {
    m_payloadType = EngagementInvitationPayloadTypeMapper::GetEngagementInvitationPayloadTypeForName(jsonValue.GetString("PayloadType"));
    m_payloadTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementId"))
  {
    m_engagementId = jsonValue.GetString("EngagementId");
    m_engagementIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementTitle"))
  {
    m_engagementTitle = jsonValue.GetString("EngagementTitle");
    m_engagementTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = InvitationStatusMapper::GetInvitationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvitationDate"))
  {
    m_invitationDate = jsonValue.GetString("InvitationDate");
    m_invitationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderAwsAccountId"))
  {
    m_senderAwsAccountId = jsonValue.GetString("SenderAwsAccountId");
    m_senderAwsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderCompanyName"))
  {
    m_senderCompanyName = jsonValue.GetString("SenderCompanyName");
    m_senderCompanyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Receiver"))
  {
    m_receiver = jsonValue.GetObject("Receiver");
    m_receiverHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RejectionReason"))
  {
    m_rejectionReason = jsonValue.GetString("RejectionReason");
    m_rejectionReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Payload"))
  {
    m_payload = jsonValue.GetObject("Payload");
    m_payloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvitationMessage"))
  {
    m_invitationMessage = jsonValue.GetString("InvitationMessage");
    m_invitationMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementDescription"))
  {
    m_engagementDescription = jsonValue.GetString("EngagementDescription");
    m_engagementDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExistingMembers"))
  {
    Aws::Utils::Array<JsonView> existingMembersJsonList = jsonValue.GetArray("ExistingMembers");
    for(unsigned existingMembersIndex = 0; existingMembersIndex < existingMembersJsonList.GetLength(); ++existingMembersIndex)
    {
      m_existingMembers.push_back(existingMembersJsonList[existingMembersIndex].AsObject());
    }
    m_existingMembersHasBeenSet = true;
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
