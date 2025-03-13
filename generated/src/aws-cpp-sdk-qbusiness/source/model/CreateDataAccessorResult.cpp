/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateDataAccessorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDataAccessorResult::CreateDataAccessorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDataAccessorResult& CreateDataAccessorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataAccessorId"))
  {
    m_dataAccessorId = jsonValue.GetString("dataAccessorId");
    m_dataAccessorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idcApplicationArn"))
  {
    m_idcApplicationArn = jsonValue.GetString("idcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataAccessorArn"))
  {
    m_dataAccessorArn = jsonValue.GetString("dataAccessorArn");
    m_dataAccessorArnHasBeenSet = true;
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
