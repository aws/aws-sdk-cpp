/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CreateOutboundConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateOutboundConnectionResult::CreateOutboundConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateOutboundConnectionResult& CreateOutboundConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocalDomainInfo"))
  {
    m_localDomainInfo = jsonValue.GetObject("LocalDomainInfo");
    m_localDomainInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RemoteDomainInfo"))
  {
    m_remoteDomainInfo = jsonValue.GetObject("RemoteDomainInfo");
    m_remoteDomainInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionAlias"))
  {
    m_connectionAlias = jsonValue.GetString("ConnectionAlias");
    m_connectionAliasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = jsonValue.GetObject("ConnectionStatus");
    m_connectionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionId"))
  {
    m_connectionId = jsonValue.GetString("ConnectionId");
    m_connectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionMode"))
  {
    m_connectionMode = ConnectionModeMapper::GetConnectionModeForName(jsonValue.GetString("ConnectionMode"));
    m_connectionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionProperties"))
  {
    m_connectionProperties = jsonValue.GetObject("ConnectionProperties");
    m_connectionPropertiesHasBeenSet = true;
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
