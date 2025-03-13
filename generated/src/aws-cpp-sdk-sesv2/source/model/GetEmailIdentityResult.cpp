/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetEmailIdentityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEmailIdentityResult::GetEmailIdentityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEmailIdentityResult& GetEmailIdentityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityType"))
  {
    m_identityType = IdentityTypeMapper::GetIdentityTypeForName(jsonValue.GetString("IdentityType"));
    m_identityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeedbackForwardingStatus"))
  {
    m_feedbackForwardingStatus = jsonValue.GetBool("FeedbackForwardingStatus");
    m_feedbackForwardingStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VerifiedForSendingStatus"))
  {
    m_verifiedForSendingStatus = jsonValue.GetBool("VerifiedForSendingStatus");
    m_verifiedForSendingStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DkimAttributes"))
  {
    m_dkimAttributes = jsonValue.GetObject("DkimAttributes");
    m_dkimAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MailFromAttributes"))
  {
    m_mailFromAttributes = jsonValue.GetObject("MailFromAttributes");
    m_mailFromAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Policies"))
  {
    Aws::Map<Aws::String, JsonView> policiesJsonMap = jsonValue.GetObject("Policies").GetAllObjects();
    for(auto& policiesItem : policiesJsonMap)
    {
      m_policies[policiesItem.first] = policiesItem.second.AsString();
    }
    m_policiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationSetName"))
  {
    m_configurationSetName = jsonValue.GetString("ConfigurationSetName");
    m_configurationSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VerificationStatus"))
  {
    m_verificationStatus = VerificationStatusMapper::GetVerificationStatusForName(jsonValue.GetString("VerificationStatus"));
    m_verificationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VerificationInfo"))
  {
    m_verificationInfo = jsonValue.GetObject("VerificationInfo");
    m_verificationInfoHasBeenSet = true;
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
