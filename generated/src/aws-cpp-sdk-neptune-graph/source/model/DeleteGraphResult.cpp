/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/DeleteGraphResult.h>
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

DeleteGraphResult::DeleteGraphResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteGraphResult& DeleteGraphResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = GraphStatusMapper::GetGraphStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionedMemory"))
  {
    m_provisionedMemory = jsonValue.GetInteger("provisionedMemory");
    m_provisionedMemoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicConnectivity"))
  {
    m_publicConnectivity = jsonValue.GetBool("publicConnectivity");
    m_publicConnectivityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vectorSearchConfiguration"))
  {
    m_vectorSearchConfiguration = jsonValue.GetObject("vectorSearchConfiguration");
    m_vectorSearchConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicaCount"))
  {
    m_replicaCount = jsonValue.GetInteger("replicaCount");
    m_replicaCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceSnapshotId"))
  {
    m_sourceSnapshotId = jsonValue.GetString("sourceSnapshotId");
    m_sourceSnapshotIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("deletionProtection");
    m_deletionProtectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildNumber"))
  {
    m_buildNumber = jsonValue.GetString("buildNumber");
    m_buildNumberHasBeenSet = true;
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
