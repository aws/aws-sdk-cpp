/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/RemoveRegionsFromReplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RemoveRegionsFromReplicationResult::RemoveRegionsFromReplicationResult()
{
}

RemoveRegionsFromReplicationResult::RemoveRegionsFromReplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RemoveRegionsFromReplicationResult& RemoveRegionsFromReplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

  }

  if(jsonValue.ValueExists("ReplicationStatus"))
  {
    Aws::Utils::Array<JsonView> replicationStatusJsonList = jsonValue.GetArray("ReplicationStatus");
    for(unsigned replicationStatusIndex = 0; replicationStatusIndex < replicationStatusJsonList.GetLength(); ++replicationStatusIndex)
    {
      m_replicationStatus.push_back(replicationStatusJsonList[replicationStatusIndex].AsObject());
    }
  }



  return *this;
}
