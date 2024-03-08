/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/CreateGraphResult.h>
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

CreateGraphResult::CreateGraphResult() : 
    m_status(GraphStatus::NOT_SET),
    m_provisionedMemory(0),
    m_publicConnectivity(false),
    m_replicaCount(0),
    m_deletionProtection(false)
{
}

CreateGraphResult::CreateGraphResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(GraphStatus::NOT_SET),
    m_provisionedMemory(0),
    m_publicConnectivity(false),
    m_replicaCount(0),
    m_deletionProtection(false)
{
  *this = result;
}

CreateGraphResult& CreateGraphResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = GraphStatusMapper::GetGraphStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

  }

  if(jsonValue.ValueExists("provisionedMemory"))
  {
    m_provisionedMemory = jsonValue.GetInteger("provisionedMemory");

  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

  }

  if(jsonValue.ValueExists("publicConnectivity"))
  {
    m_publicConnectivity = jsonValue.GetBool("publicConnectivity");

  }

  if(jsonValue.ValueExists("vectorSearchConfiguration"))
  {
    m_vectorSearchConfiguration = jsonValue.GetObject("vectorSearchConfiguration");

  }

  if(jsonValue.ValueExists("replicaCount"))
  {
    m_replicaCount = jsonValue.GetInteger("replicaCount");

  }

  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");

  }

  if(jsonValue.ValueExists("sourceSnapshotId"))
  {
    m_sourceSnapshotId = jsonValue.GetString("sourceSnapshotId");

  }

  if(jsonValue.ValueExists("deletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("deletionProtection");

  }

  if(jsonValue.ValueExists("buildNumber"))
  {
    m_buildNumber = jsonValue.GetString("buildNumber");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
