/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/GetSpaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSpaceResult::GetSpaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSpaceResult& GetSpaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("spaceId"))
  {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = ConfigurationStatusMapper::GetConfigurationStatusForName(jsonValue.GetString("configurationStatus"));
    m_configurationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("identityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vanityDomainStatus"))
  {
    m_vanityDomainStatus = VanityDomainStatusMapper::GetVanityDomainStatusForName(jsonValue.GetString("vanityDomainStatus"));
    m_vanityDomainStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vanityDomain"))
  {
    m_vanityDomain = jsonValue.GetString("vanityDomain");
    m_vanityDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("randomDomain"))
  {
    m_randomDomain = jsonValue.GetString("randomDomain");
    m_randomDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerRoleArn"))
  {
    m_customerRoleArn = jsonValue.GetString("customerRoleArn");
    m_customerRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createDateTime"))
  {
    m_createDateTime = jsonValue.GetString("createDateTime");
    m_createDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteDateTime"))
  {
    m_deleteDateTime = jsonValue.GetString("deleteDateTime");
    m_deleteDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tier"))
  {
    m_tier = TierLevelMapper::GetTierLevelForName(jsonValue.GetString("tier"));
    m_tierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageLimit"))
  {
    m_storageLimit = jsonValue.GetInt64("storageLimit");
    m_storageLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roles"))
  {
    Aws::Map<Aws::String, JsonView> rolesJsonMap = jsonValue.GetObject("roles").GetAllObjects();
    for(auto& rolesItem : rolesJsonMap)
    {
      Aws::Utils::Array<JsonView> roleListJsonList = rolesItem.second.AsArray();
      Aws::Vector<Role> roleListList;
      roleListList.reserve((size_t)roleListJsonList.GetLength());
      for(unsigned roleListIndex = 0; roleListIndex < roleListJsonList.GetLength(); ++roleListIndex)
      {
        roleListList.push_back(RoleMapper::GetRoleForName(roleListJsonList[roleListIndex].AsString()));
      }
      m_roles[rolesItem.first] = std::move(roleListList);
    }
    m_rolesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userKMSKey"))
  {
    m_userKMSKey = jsonValue.GetString("userKMSKey");
    m_userKMSKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userCount"))
  {
    m_userCount = jsonValue.GetInteger("userCount");
    m_userCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentSize"))
  {
    m_contentSize = jsonValue.GetInt64("contentSize");
    m_contentSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedEmailDomains"))
  {
    m_supportedEmailDomains = jsonValue.GetObject("supportedEmailDomains");
    m_supportedEmailDomainsHasBeenSet = true;
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
