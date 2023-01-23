/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetOperationDetailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOperationDetailResult::GetOperationDetailResult() : 
    m_status(OperationStatus::NOT_SET),
    m_type(OperationType::NOT_SET),
    m_statusFlag(StatusFlag::NOT_SET)
{
}

GetOperationDetailResult::GetOperationDetailResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(OperationStatus::NOT_SET),
    m_type(OperationType::NOT_SET),
    m_statusFlag(StatusFlag::NOT_SET)
{
  *this = result;
}

GetOperationDetailResult& GetOperationDetailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OperationId"))
  {
    m_operationId = jsonValue.GetString("OperationId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("SubmittedDate"))
  {
    m_submittedDate = jsonValue.GetDouble("SubmittedDate");

  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("LastUpdatedDate");

  }

  if(jsonValue.ValueExists("StatusFlag"))
  {
    m_statusFlag = StatusFlagMapper::GetStatusFlagForName(jsonValue.GetString("StatusFlag"));

  }



  return *this;
}
