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

GetEngagementInvitationResult::GetEngagementInvitationResult() : 
    m_payloadType(EngagementInvitationPayloadType::NOT_SET),
    m_status(InvitationStatus::NOT_SET)
{
}

GetEngagementInvitationResult::GetEngagementInvitationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetEngagementInvitationResult()
{
  *this = result;
}

GetEngagementInvitationResult& GetEngagementInvitationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

  }

  if(jsonValue.ValueExists("EngagementDescription"))
  {
    m_engagementDescription = jsonValue.GetString("EngagementDescription");

  }

  if(jsonValue.ValueExists("EngagementId"))
  {
    m_engagementId = jsonValue.GetString("EngagementId");

  }

  if(jsonValue.ValueExists("EngagementTitle"))
  {
    m_engagementTitle = jsonValue.GetString("EngagementTitle");

  }

  if(jsonValue.ValueExists("ExistingMembers"))
  {
    Aws::Utils::Array<JsonView> existingMembersJsonList = jsonValue.GetArray("ExistingMembers");
    for(unsigned existingMembersIndex = 0; existingMembersIndex < existingMembersJsonList.GetLength(); ++existingMembersIndex)
    {
      m_existingMembers.push_back(existingMembersJsonList[existingMembersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("InvitationDate"))
  {
    m_invitationDate = jsonValue.GetString("InvitationDate");

  }

  if(jsonValue.ValueExists("InvitationMessage"))
  {
    m_invitationMessage = jsonValue.GetString("InvitationMessage");

  }

  if(jsonValue.ValueExists("Payload"))
  {
    m_payload = jsonValue.GetObject("Payload");

  }

  if(jsonValue.ValueExists("PayloadType"))
  {
    m_payloadType = EngagementInvitationPayloadTypeMapper::GetEngagementInvitationPayloadTypeForName(jsonValue.GetString("PayloadType"));

  }

  if(jsonValue.ValueExists("Receiver"))
  {
    m_receiver = jsonValue.GetObject("Receiver");

  }

  if(jsonValue.ValueExists("RejectionReason"))
  {
    m_rejectionReason = jsonValue.GetString("RejectionReason");

  }

  if(jsonValue.ValueExists("SenderAwsAccountId"))
  {
    m_senderAwsAccountId = jsonValue.GetString("SenderAwsAccountId");

  }

  if(jsonValue.ValueExists("SenderCompanyName"))
  {
    m_senderCompanyName = jsonValue.GetString("SenderCompanyName");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InvitationStatusMapper::GetInvitationStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
