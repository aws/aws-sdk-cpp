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

GetSolNetworkInstanceResult::GetSolNetworkInstanceResult() : 
    m_nsState(NsState::NOT_SET)
{
}

GetSolNetworkInstanceResult::GetSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_nsState(NsState::NOT_SET)
{
  *this = result;
}

GetSolNetworkInstanceResult& GetSolNetworkInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lcmOpInfo"))
  {
    m_lcmOpInfo = jsonValue.GetObject("lcmOpInfo");

  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

  }

  if(jsonValue.ValueExists("nsInstanceDescription"))
  {
    m_nsInstanceDescription = jsonValue.GetString("nsInstanceDescription");

  }

  if(jsonValue.ValueExists("nsInstanceName"))
  {
    m_nsInstanceName = jsonValue.GetString("nsInstanceName");

  }

  if(jsonValue.ValueExists("nsState"))
  {
    m_nsState = NsStateMapper::GetNsStateForName(jsonValue.GetString("nsState"));

  }

  if(jsonValue.ValueExists("nsdId"))
  {
    m_nsdId = jsonValue.GetString("nsdId");

  }

  if(jsonValue.ValueExists("nsdInfoId"))
  {
    m_nsdInfoId = jsonValue.GetString("nsdInfoId");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
