/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetResourceConfigurationResult.h>
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

GetResourceConfigurationResult::GetResourceConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceConfigurationResult& GetResourceConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("allowAssociationToShareableServiceNetwork"))
  {
    m_allowAssociationToShareableServiceNetwork = jsonValue.GetBool("allowAssociationToShareableServiceNetwork");
    m_allowAssociationToShareableServiceNetworkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amazonManaged"))
  {
    m_amazonManaged = jsonValue.GetBool("amazonManaged");
    m_amazonManagedHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");
    m_customDomainNameHasBeenSet = true;
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
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portRanges"))
  {
    Aws::Utils::Array<JsonView> portRangesJsonList = jsonValue.GetArray("portRanges");
    for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
    {
      m_portRanges.push_back(portRangesJsonList[portRangesIndex].AsString());
    }
    m_portRangesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolTypeMapper::GetProtocolTypeForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationDefinition"))
  {
    m_resourceConfigurationDefinition = jsonValue.GetObject("resourceConfigurationDefinition");
    m_resourceConfigurationDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationGroupId"))
  {
    m_resourceConfigurationGroupId = jsonValue.GetString("resourceConfigurationGroupId");
    m_resourceConfigurationGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceGatewayId"))
  {
    m_resourceGatewayId = jsonValue.GetString("resourceGatewayId");
    m_resourceGatewayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceConfigurationStatusMapper::GetResourceConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ResourceConfigurationTypeMapper::GetResourceConfigurationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
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
