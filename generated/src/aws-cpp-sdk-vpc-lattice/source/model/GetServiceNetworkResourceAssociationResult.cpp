/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetServiceNetworkResourceAssociationResult.h>
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

GetServiceNetworkResourceAssociationResult::GetServiceNetworkResourceAssociationResult() : 
    m_isManagedAssociation(false),
    m_status(ServiceNetworkResourceAssociationStatus::NOT_SET)
{
}

GetServiceNetworkResourceAssociationResult::GetServiceNetworkResourceAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetServiceNetworkResourceAssociationResult()
{
  *this = result;
}

GetServiceNetworkResourceAssociationResult& GetServiceNetworkResourceAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("dnsEntry"))
  {
    m_dnsEntry = jsonValue.GetObject("dnsEntry");

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("isManagedAssociation"))
  {
    m_isManagedAssociation = jsonValue.GetBool("isManagedAssociation");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("privateDnsEntry"))
  {
    m_privateDnsEntry = jsonValue.GetObject("privateDnsEntry");

  }

  if(jsonValue.ValueExists("resourceConfigurationArn"))
  {
    m_resourceConfigurationArn = jsonValue.GetString("resourceConfigurationArn");

  }

  if(jsonValue.ValueExists("resourceConfigurationId"))
  {
    m_resourceConfigurationId = jsonValue.GetString("resourceConfigurationId");

  }

  if(jsonValue.ValueExists("resourceConfigurationName"))
  {
    m_resourceConfigurationName = jsonValue.GetString("resourceConfigurationName");

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
    m_status = ServiceNetworkResourceAssociationStatusMapper::GetServiceNetworkResourceAssociationStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
