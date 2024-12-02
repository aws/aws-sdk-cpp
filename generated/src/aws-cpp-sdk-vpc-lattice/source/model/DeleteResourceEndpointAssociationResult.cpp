/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DeleteResourceEndpointAssociationResult.h>
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

DeleteResourceEndpointAssociationResult::DeleteResourceEndpointAssociationResult()
{
}

DeleteResourceEndpointAssociationResult::DeleteResourceEndpointAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteResourceEndpointAssociationResult& DeleteResourceEndpointAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("resourceConfigurationArn"))
  {
    m_resourceConfigurationArn = jsonValue.GetString("resourceConfigurationArn");

  }

  if(jsonValue.ValueExists("resourceConfigurationId"))
  {
    m_resourceConfigurationId = jsonValue.GetString("resourceConfigurationId");

  }

  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
