/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkInstanceResult.h>
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

GetSolNetworkInstanceResult::GetSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSolNetworkInstanceResult& GetSolNetworkInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("lcmOpInfo"))
  {
    m_lcmOpInfo = jsonValue.GetObject("lcmOpInfo");
    m_lcmOpInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsInstanceDescription"))
  {
    m_nsInstanceDescription = jsonValue.GetString("nsInstanceDescription");
    m_nsInstanceDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsInstanceName"))
  {
    m_nsInstanceName = jsonValue.GetString("nsInstanceName");
    m_nsInstanceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsState"))
  {
    m_nsState = NsStateMapper::GetNsStateForName(jsonValue.GetString("nsState"));
    m_nsStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdId"))
  {
    m_nsdId = jsonValue.GetString("nsdId");
    m_nsdIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdInfoId"))
  {
    m_nsdInfoId = jsonValue.GetString("nsdInfoId");
    m_nsdInfoIdHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
