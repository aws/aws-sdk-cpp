/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetServiceNetworkServiceAssociationResult.h>
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

GetServiceNetworkServiceAssociationResult::GetServiceNetworkServiceAssociationResult() : 
    m_status(ServiceNetworkServiceAssociationStatus::NOT_SET)
{
}

GetServiceNetworkServiceAssociationResult::GetServiceNetworkServiceAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ServiceNetworkServiceAssociationStatus::NOT_SET)
{
  *this = result;
}

GetServiceNetworkServiceAssociationResult& GetServiceNetworkServiceAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");

  }

  if(jsonValue.ValueExists("dnsEntry"))
  {
    m_dnsEntry = jsonValue.GetObject("dnsEntry");

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

  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");

  }

  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

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
    m_status = ServiceNetworkServiceAssociationStatusMapper::GetServiceNetworkServiceAssociationStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
