/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateResourceConfigurationResult.h>
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

UpdateResourceConfigurationResult::UpdateResourceConfigurationResult() : 
    m_allowAssociationToShareableServiceNetwork(false),
    m_protocol(ProtocolType::NOT_SET),
    m_status(ResourceConfigurationStatus::NOT_SET),
    m_type(ResourceConfigurationType::NOT_SET)
{
}

UpdateResourceConfigurationResult::UpdateResourceConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateResourceConfigurationResult()
{
  *this = result;
}

UpdateResourceConfigurationResult& UpdateResourceConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("allowAssociationToShareableServiceNetwork"))
  {
    m_allowAssociationToShareableServiceNetwork = jsonValue.GetBool("allowAssociationToShareableServiceNetwork");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("portRanges"))
  {
    Aws::Utils::Array<JsonView> portRangesJsonList = jsonValue.GetArray("portRanges");
    for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
    {
      m_portRanges.push_back(portRangesJsonList[portRangesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolTypeMapper::GetProtocolTypeForName(jsonValue.GetString("protocol"));

  }

  if(jsonValue.ValueExists("resourceConfigurationDefinition"))
  {
    m_resourceConfigurationDefinition = jsonValue.GetObject("resourceConfigurationDefinition");

  }

  if(jsonValue.ValueExists("resourceConfigurationGroupId"))
  {
    m_resourceConfigurationGroupId = jsonValue.GetString("resourceConfigurationGroupId");

  }

  if(jsonValue.ValueExists("resourceGatewayId"))
  {
    m_resourceGatewayId = jsonValue.GetString("resourceGatewayId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceConfigurationStatusMapper::GetResourceConfigurationStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ResourceConfigurationTypeMapper::GetResourceConfigurationTypeForName(jsonValue.GetString("type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
