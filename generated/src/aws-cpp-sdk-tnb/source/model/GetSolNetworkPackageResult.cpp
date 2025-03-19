/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSolNetworkPackageResult::GetSolNetworkPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSolNetworkPackageResult& GetSolNetworkPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdId"))
  {
    m_nsdId = jsonValue.GetString("nsdId");
    m_nsdIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdName"))
  {
    m_nsdName = jsonValue.GetString("nsdName");
    m_nsdNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdOnboardingState"))
  {
    m_nsdOnboardingState = NsdOnboardingStateMapper::GetNsdOnboardingStateForName(jsonValue.GetString("nsdOnboardingState"));
    m_nsdOnboardingStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdOperationalState"))
  {
    m_nsdOperationalState = NsdOperationalStateMapper::GetNsdOperationalStateForName(jsonValue.GetString("nsdOperationalState"));
    m_nsdOperationalStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdUsageState"))
  {
    m_nsdUsageState = NsdUsageStateMapper::GetNsdUsageStateForName(jsonValue.GetString("nsdUsageState"));
    m_nsdUsageStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdVersion"))
  {
    m_nsdVersion = jsonValue.GetString("nsdVersion");
    m_nsdVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnfPkgIds"))
  {
    Aws::Utils::Array<JsonView> vnfPkgIdsJsonList = jsonValue.GetArray("vnfPkgIds");
    for(unsigned vnfPkgIdsIndex = 0; vnfPkgIdsIndex < vnfPkgIdsJsonList.GetLength(); ++vnfPkgIdsIndex)
    {
      m_vnfPkgIds.push_back(vnfPkgIdsJsonList[vnfPkgIdsIndex].AsString());
    }
    m_vnfPkgIdsHasBeenSet = true;
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
