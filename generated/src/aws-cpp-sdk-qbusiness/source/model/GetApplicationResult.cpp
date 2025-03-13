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

GetApplicationResult::GetApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApplicationResult& GetApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityType"))
  {
    m_identityType = IdentityTypeMapper::GetIdentityTypeForName(jsonValue.GetString("identityType"));
    m_identityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamIdentityProviderArn"))
  {
    m_iamIdentityProviderArn = jsonValue.GetString("iamIdentityProviderArn");
    m_iamIdentityProviderArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityCenterApplicationArn"))
  {
    m_identityCenterApplicationArn = jsonValue.GetString("identityCenterApplicationArn");
    m_identityCenterApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachmentsConfiguration"))
  {
    m_attachmentsConfiguration = jsonValue.GetObject("attachmentsConfiguration");
    m_attachmentsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qAppsConfiguration"))
  {
    m_qAppsConfiguration = jsonValue.GetObject("qAppsConfiguration");
    m_qAppsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("personalizationConfiguration"))
  {
    m_personalizationConfiguration = jsonValue.GetObject("personalizationConfiguration");
    m_personalizationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoSubscriptionConfiguration"))
  {
    m_autoSubscriptionConfiguration = jsonValue.GetObject("autoSubscriptionConfiguration");
    m_autoSubscriptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientIdsForOIDC"))
  {
    Aws::Utils::Array<JsonView> clientIdsForOIDCJsonList = jsonValue.GetArray("clientIdsForOIDC");
    for(unsigned clientIdsForOIDCIndex = 0; clientIdsForOIDCIndex < clientIdsForOIDCJsonList.GetLength(); ++clientIdsForOIDCIndex)
    {
      m_clientIdsForOIDC.push_back(clientIdsForOIDCJsonList[clientIdsForOIDCIndex].AsString());
    }
    m_clientIdsForOIDCHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quickSightConfiguration"))
  {
    m_quickSightConfiguration = jsonValue.GetObject("quickSightConfiguration");
    m_quickSightConfigurationHasBeenSet = true;
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
