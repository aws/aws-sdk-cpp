/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConnectorRegistrationsV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ConnectorRegistrationsV2Result::ConnectorRegistrationsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ConnectorRegistrationsV2Result& ConnectorRegistrationsV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectorArn"))
  {
    m_connectorArn = jsonValue.GetString("ConnectorArn");
    m_connectorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorId"))
  {
    m_connectorId = jsonValue.GetString("ConnectorId");
    m_connectorIdHasBeenSet = true;
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
