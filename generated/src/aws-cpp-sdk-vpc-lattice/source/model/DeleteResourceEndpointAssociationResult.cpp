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
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
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
  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
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
