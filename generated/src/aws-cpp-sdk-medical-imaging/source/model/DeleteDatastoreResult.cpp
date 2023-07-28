/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DeleteDatastoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteDatastoreResult::DeleteDatastoreResult() : 
    m_datastoreStatus(DatastoreStatus::NOT_SET)
{
}

DeleteDatastoreResult::DeleteDatastoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_datastoreStatus(DatastoreStatus::NOT_SET)
{
  *this = result;
}

DeleteDatastoreResult& DeleteDatastoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datastoreId"))
  {
    m_datastoreId = jsonValue.GetString("datastoreId");

  }

  if(jsonValue.ValueExists("datastoreStatus"))
  {
    m_datastoreStatus = DatastoreStatusMapper::GetDatastoreStatusForName(jsonValue.GetString("datastoreStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
