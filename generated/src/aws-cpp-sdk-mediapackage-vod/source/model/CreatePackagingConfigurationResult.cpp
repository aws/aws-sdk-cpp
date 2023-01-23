/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/CreatePackagingConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePackagingConfigurationResult::CreatePackagingConfigurationResult()
{
}

CreatePackagingConfigurationResult::CreatePackagingConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePackagingConfigurationResult& CreatePackagingConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("cmafPackage"))
  {
    m_cmafPackage = jsonValue.GetObject("cmafPackage");

  }

  if(jsonValue.ValueExists("dashPackage"))
  {
    m_dashPackage = jsonValue.GetObject("dashPackage");

  }

  if(jsonValue.ValueExists("hlsPackage"))
  {
    m_hlsPackage = jsonValue.GetObject("hlsPackage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("mssPackage"))
  {
    m_mssPackage = jsonValue.GetObject("mssPackage");

  }

  if(jsonValue.ValueExists("packagingGroupId"))
  {
    m_packagingGroupId = jsonValue.GetString("packagingGroupId");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
