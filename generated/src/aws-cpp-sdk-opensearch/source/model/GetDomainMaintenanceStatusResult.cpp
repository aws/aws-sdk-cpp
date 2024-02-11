/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/GetDomainMaintenanceStatusResult.h>
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

GetDomainMaintenanceStatusResult::GetDomainMaintenanceStatusResult() : 
    m_status(MaintenanceStatus::NOT_SET),
    m_action(MaintenanceType::NOT_SET)
{
}

GetDomainMaintenanceStatusResult::GetDomainMaintenanceStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MaintenanceStatus::NOT_SET),
    m_action(MaintenanceType::NOT_SET)
{
  *this = result;
}

GetDomainMaintenanceStatusResult& GetDomainMaintenanceStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MaintenanceStatusMapper::GetMaintenanceStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = MaintenanceTypeMapper::GetMaintenanceTypeForName(jsonValue.GetString("Action"));

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
