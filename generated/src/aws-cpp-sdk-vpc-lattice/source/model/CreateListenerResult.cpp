/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/CreateListenerResult.h>
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

CreateListenerResult::CreateListenerResult() : 
    m_port(0),
    m_protocol(ListenerProtocol::NOT_SET)
{
}

CreateListenerResult::CreateListenerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_port(0),
    m_protocol(ListenerProtocol::NOT_SET)
{
  *this = result;
}

CreateListenerResult& CreateListenerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("defaultAction"))
  {
    m_defaultAction = jsonValue.GetObject("defaultAction");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ListenerProtocolMapper::GetListenerProtocolForName(jsonValue.GetString("protocol"));

  }

  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");

  }

  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
