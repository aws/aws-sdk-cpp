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

GetSpaceResult::GetSpaceResult() : 
    m_configurationStatus(ConfigurationStatus::NOT_SET),
    m_contentSize(0),
    m_storageLimit(0),
    m_tier(TierLevel::NOT_SET),
    m_userCount(0),
    m_vanityDomainStatus(VanityDomainStatus::NOT_SET)
{
}

GetSpaceResult::GetSpaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetSpaceResult()
{
  *this = result;
}

GetSpaceResult& GetSpaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

  }

  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = ConfigurationStatusMapper::GetConfigurationStatusForName(jsonValue.GetString("configurationStatus"));

  }

  if(jsonValue.ValueExists("contentSize"))
  {
    m_contentSize = jsonValue.GetInt64("contentSize");

  }

  if(jsonValue.ValueExists("createDateTime"))
  {
    m_createDateTime = jsonValue.GetString("createDateTime");

  }

  if(jsonValue.ValueExists("customerRoleArn"))
  {
    m_customerRoleArn = jsonValue.GetString("customerRoleArn");

  }

  if(jsonValue.ValueExists("deleteDateTime"))
  {
    m_deleteDateTime = jsonValue.GetString("deleteDateTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("randomDomain"))
  {
    m_randomDomain = jsonValue.GetString("randomDomain");

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
  }

  if(jsonValue.ValueExists("spaceId"))
  {
    m_spaceId = jsonValue.GetString("spaceId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

  }

  if(jsonValue.ValueExists("storageLimit"))
  {
    m_storageLimit = jsonValue.GetInt64("storageLimit");

  }

  if(jsonValue.ValueExists("tier"))
  {
    m_tier = TierLevelMapper::GetTierLevelForName(jsonValue.GetString("tier"));

  }

  if(jsonValue.ValueExists("userCount"))
  {
    m_userCount = jsonValue.GetInteger("userCount");

  }

  if(jsonValue.ValueExists("userKMSKey"))
  {
    m_userKMSKey = jsonValue.GetString("userKMSKey");

  }

  if(jsonValue.ValueExists("vanityDomain"))
  {
    m_vanityDomain = jsonValue.GetString("vanityDomain");

  }

  if(jsonValue.ValueExists("vanityDomainStatus"))
  {
    m_vanityDomainStatus = VanityDomainStatusMapper::GetVanityDomainStatusForName(jsonValue.GetString("vanityDomainStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
