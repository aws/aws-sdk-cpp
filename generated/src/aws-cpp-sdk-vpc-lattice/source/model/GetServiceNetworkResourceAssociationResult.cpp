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

GetServiceNetworkResourceAssociationResult::GetServiceNetworkResourceAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServiceNetworkResourceAssociationResult& GetServiceNetworkResourceAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dnsEntry"))
  {
    m_dnsEntry = jsonValue.GetObject("dnsEntry");
    m_dnsEntryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isManagedAssociation"))
  {
    m_isManagedAssociation = jsonValue.GetBool("isManagedAssociation");
    m_isManagedAssociationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateDnsEntry"))
  {
    m_privateDnsEntry = jsonValue.GetObject("privateDnsEntry");
    m_privateDnsEntryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationArn"))
  {
    m_resourceConfigurationArn = jsonValue.GetString("resourceConfigurationArn");
    m_resourceConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationId"))
  {
    m_resourceConfigurationId = jsonValue.GetString("resourceConfigurationId");
    m_resourceConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationName"))
  {
    m_resourceConfigurationName = jsonValue.GetString("resourceConfigurationName");
    m_resourceConfigurationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceNetworkArn"))
  {
    m_serviceNetworkArn = jsonValue.GetString("serviceNetworkArn");
    m_serviceNetworkArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceNetworkId"))
  {
    m_serviceNetworkId = jsonValue.GetString("serviceNetworkId");
    m_serviceNetworkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceNetworkName"))
  {
    m_serviceNetworkName = jsonValue.GetString("serviceNetworkName");
    m_serviceNetworkNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceNetworkResourceAssociationStatusMapper::GetServiceNetworkResourceAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
