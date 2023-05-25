/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/CreateServiceNetworkServiceAssociationResult.h>
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

CreateServiceNetworkServiceAssociationResult::CreateServiceNetworkServiceAssociationResult() : 
    m_status(ServiceNetworkServiceAssociationStatus::NOT_SET)
{
}

CreateServiceNetworkServiceAssociationResult::CreateServiceNetworkServiceAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ServiceNetworkServiceAssociationStatus::NOT_SET)
{
  *this = result;
}

CreateServiceNetworkServiceAssociationResult& CreateServiceNetworkServiceAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

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

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

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
