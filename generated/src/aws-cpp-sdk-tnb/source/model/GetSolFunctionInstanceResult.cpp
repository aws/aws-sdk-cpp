/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolFunctionInstanceResult.h>
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

GetSolFunctionInstanceResult::GetSolFunctionInstanceResult() : 
    m_instantiationState(VnfInstantiationState::NOT_SET)
{
}

GetSolFunctionInstanceResult::GetSolFunctionInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_instantiationState(VnfInstantiationState::NOT_SET)
{
  *this = result;
}

GetSolFunctionInstanceResult& GetSolFunctionInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("instantiatedVnfInfo"))
  {
    m_instantiatedVnfInfo = jsonValue.GetObject("instantiatedVnfInfo");

  }

  if(jsonValue.ValueExists("instantiationState"))
  {
    m_instantiationState = VnfInstantiationStateMapper::GetVnfInstantiationStateForName(jsonValue.GetString("instantiationState"));

  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

  }

  if(jsonValue.ValueExists("nsInstanceId"))
  {
    m_nsInstanceId = jsonValue.GetString("nsInstanceId");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("vnfPkgId"))
  {
    m_vnfPkgId = jsonValue.GetString("vnfPkgId");

  }

  if(jsonValue.ValueExists("vnfProductName"))
  {
    m_vnfProductName = jsonValue.GetString("vnfProductName");

  }

  if(jsonValue.ValueExists("vnfProvider"))
  {
    m_vnfProvider = jsonValue.GetString("vnfProvider");

  }

  if(jsonValue.ValueExists("vnfdId"))
  {
    m_vnfdId = jsonValue.GetString("vnfdId");

  }

  if(jsonValue.ValueExists("vnfdVersion"))
  {
    m_vnfdVersion = jsonValue.GetString("vnfdVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
