/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetServiceNetworkVpcAssociationResult.h>
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

GetServiceNetworkVpcAssociationResult::GetServiceNetworkVpcAssociationResult() : 
    m_status(ServiceNetworkVpcAssociationStatus::NOT_SET)
{
}

GetServiceNetworkVpcAssociationResult::GetServiceNetworkVpcAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ServiceNetworkVpcAssociationStatus::NOT_SET)
{
  *this = result;
}

GetServiceNetworkVpcAssociationResult& GetServiceNetworkVpcAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");

  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("serviceNetworkArn"))
  {
    m_serviceNetworkArn = jsonValue.GetString("serviceNetworkArn");

  }

  if(jsonValue.ValueExists("serviceNetworkId"))
  {
    m_serviceNetworkId = jsonValue.GetString("serviceNetworkId");

  }

  if(jsonValue.ValueExists("serviceNetworkName"))
  {
    m_serviceNetworkName = jsonValue.GetString("serviceNetworkName");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceNetworkVpcAssociationStatusMapper::GetServiceNetworkVpcAssociationStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
