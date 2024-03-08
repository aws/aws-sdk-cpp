/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GetGraphSnapshotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGraphSnapshotResult::GetGraphSnapshotResult() : 
    m_status(SnapshotStatus::NOT_SET)
{
}

GetGraphSnapshotResult::GetGraphSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SnapshotStatus::NOT_SET)
{
  *this = result;
}

GetGraphSnapshotResult& GetGraphSnapshotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("sourceGraphId"))
  {
    m_sourceGraphId = jsonValue.GetString("sourceGraphId");

  }

  if(jsonValue.ValueExists("snapshotCreateTime"))
  {
    m_snapshotCreateTime = jsonValue.GetDouble("snapshotCreateTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
