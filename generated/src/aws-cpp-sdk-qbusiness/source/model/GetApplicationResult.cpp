/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApplicationResult::GetApplicationResult() : 
    m_identityType(IdentityType::NOT_SET),
    m_status(ApplicationStatus::NOT_SET)
{
}

GetApplicationResult::GetApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetApplicationResult()
{
  *this = result;
}

GetApplicationResult& GetApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");

  }

  if(jsonValue.ValueExists("identityType"))
  {
    m_identityType = IdentityTypeMapper::GetIdentityTypeForName(jsonValue.GetString("identityType"));

  }

  if(jsonValue.ValueExists("iamIdentityProviderArn"))
  {
    m_iamIdentityProviderArn = jsonValue.GetString("iamIdentityProviderArn");

  }

  if(jsonValue.ValueExists("identityCenterApplicationArn"))
  {
    m_identityCenterApplicationArn = jsonValue.GetString("identityCenterApplicationArn");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

  }

  if(jsonValue.ValueExists("attachmentsConfiguration"))
  {
    m_attachmentsConfiguration = jsonValue.GetObject("attachmentsConfiguration");

  }

  if(jsonValue.ValueExists("qAppsConfiguration"))
  {
    m_qAppsConfiguration = jsonValue.GetObject("qAppsConfiguration");

  }

  if(jsonValue.ValueExists("personalizationConfiguration"))
  {
    m_personalizationConfiguration = jsonValue.GetObject("personalizationConfiguration");

  }

  if(jsonValue.ValueExists("autoSubscriptionConfiguration"))
  {
    m_autoSubscriptionConfiguration = jsonValue.GetObject("autoSubscriptionConfiguration");

  }

  if(jsonValue.ValueExists("clientIdsForOIDC"))
  {
    Aws::Utils::Array<JsonView> clientIdsForOIDCJsonList = jsonValue.GetArray("clientIdsForOIDC");
    for(unsigned clientIdsForOIDCIndex = 0; clientIdsForOIDCIndex < clientIdsForOIDCJsonList.GetLength(); ++clientIdsForOIDCIndex)
    {
      m_clientIdsForOIDC.push_back(clientIdsForOIDCJsonList[clientIdsForOIDCIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("quickSightConfiguration"))
  {
    m_quickSightConfiguration = jsonValue.GetObject("quickSightConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
