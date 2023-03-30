/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetServiceNetworkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServiceNetworkResult::GetServiceNetworkResult() : 
    m_authType(AuthType::NOT_SET),
    m_numberOfAssociatedServices(0),
    m_numberOfAssociatedVPCs(0)
{
}

GetServiceNetworkResult::GetServiceNetworkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_authType(AuthType::NOT_SET),
    m_numberOfAssociatedServices(0),
    m_numberOfAssociatedVPCs(0)
{
  *this = result;
}

GetServiceNetworkResult& GetServiceNetworkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("numberOfAssociatedServices"))
  {
    m_numberOfAssociatedServices = jsonValue.GetInt64("numberOfAssociatedServices");

  }

  if(jsonValue.ValueExists("numberOfAssociatedVPCs"))
  {
    m_numberOfAssociatedVPCs = jsonValue.GetInt64("numberOfAssociatedVPCs");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
