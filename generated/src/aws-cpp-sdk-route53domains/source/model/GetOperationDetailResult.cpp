/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetOperationDetailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOperationDetailResult::GetOperationDetailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOperationDetailResult& GetOperationDetailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OperationId"))
  {
    m_operationId = jsonValue.GetString("OperationId");
    m_operationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubmittedDate"))
  {
    m_submittedDate = jsonValue.GetDouble("SubmittedDate");
    m_submittedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("LastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusFlag"))
  {
    m_statusFlag = StatusFlagMapper::GetStatusFlagForName(jsonValue.GetString("StatusFlag"));
    m_statusFlagHasBeenSet = true;
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
