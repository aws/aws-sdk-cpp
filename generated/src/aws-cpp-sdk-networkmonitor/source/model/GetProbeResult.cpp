/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/GetProbeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProbeResult::GetProbeResult() : 
    m_destinationPort(0),
    m_protocol(Protocol::NOT_SET),
    m_packetSize(0),
    m_addressFamily(AddressFamily::NOT_SET),
    m_state(ProbeState::NOT_SET)
{
}

GetProbeResult::GetProbeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_destinationPort(0),
    m_protocol(Protocol::NOT_SET),
    m_packetSize(0),
    m_addressFamily(AddressFamily::NOT_SET),
    m_state(ProbeState::NOT_SET)
{
  *this = result;
}

GetProbeResult& GetProbeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("probeId"))
  {
    m_probeId = jsonValue.GetString("probeId");

  }

  if(jsonValue.ValueExists("probeArn"))
  {
    m_probeArn = jsonValue.GetString("probeArn");

  }

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

  }

  if(jsonValue.ValueExists("destinationPort"))
  {
    m_destinationPort = jsonValue.GetInteger("destinationPort");

  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));

  }

  if(jsonValue.ValueExists("packetSize"))
  {
    m_packetSize = jsonValue.GetInteger("packetSize");

  }

  if(jsonValue.ValueExists("addressFamily"))
  {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));

  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ProbeStateMapper::GetProbeStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
