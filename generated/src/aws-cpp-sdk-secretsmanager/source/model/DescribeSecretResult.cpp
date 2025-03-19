/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/DescribeSecretResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSecretResult::DescribeSecretResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSecretResult& DescribeSecretResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RotationEnabled"))
  {
    m_rotationEnabled = jsonValue.GetBool("RotationEnabled");
    m_rotationEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RotationLambdaARN"))
  {
    m_rotationLambdaARN = jsonValue.GetString("RotationLambdaARN");
    m_rotationLambdaARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RotationRules"))
  {
    m_rotationRules = jsonValue.GetObject("RotationRules");
    m_rotationRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastRotatedDate"))
  {
    m_lastRotatedDate = jsonValue.GetDouble("LastRotatedDate");
    m_lastRotatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastChangedDate"))
  {
    m_lastChangedDate = jsonValue.GetDouble("LastChangedDate");
    m_lastChangedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastAccessedDate"))
  {
    m_lastAccessedDate = jsonValue.GetDouble("LastAccessedDate");
    m_lastAccessedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletedDate"))
  {
    m_deletedDate = jsonValue.GetDouble("DeletedDate");
    m_deletedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextRotationDate"))
  {
    m_nextRotationDate = jsonValue.GetDouble("NextRotationDate");
    m_nextRotationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionIdsToStages"))
  {
    Aws::Map<Aws::String, JsonView> versionIdsToStagesJsonMap = jsonValue.GetObject("VersionIdsToStages").GetAllObjects();
    for(auto& versionIdsToStagesItem : versionIdsToStagesJsonMap)
    {
      Aws::Utils::Array<JsonView> secretVersionStagesTypeJsonList = versionIdsToStagesItem.second.AsArray();
      Aws::Vector<Aws::String> secretVersionStagesTypeList;
      secretVersionStagesTypeList.reserve((size_t)secretVersionStagesTypeJsonList.GetLength());
      for(unsigned secretVersionStagesTypeIndex = 0; secretVersionStagesTypeIndex < secretVersionStagesTypeJsonList.GetLength(); ++secretVersionStagesTypeIndex)
      {
        secretVersionStagesTypeList.push_back(secretVersionStagesTypeJsonList[secretVersionStagesTypeIndex].AsString());
      }
      m_versionIdsToStages[versionIdsToStagesItem.first] = std::move(secretVersionStagesTypeList);
    }
    m_versionIdsToStagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OwningService"))
  {
    m_owningService = jsonValue.GetString("OwningService");
    m_owningServiceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryRegion"))
  {
    m_primaryRegion = jsonValue.GetString("PrimaryRegion");
    m_primaryRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationStatus"))
  {
    Aws::Utils::Array<JsonView> replicationStatusJsonList = jsonValue.GetArray("ReplicationStatus");
    for(unsigned replicationStatusIndex = 0; replicationStatusIndex < replicationStatusJsonList.GetLength(); ++replicationStatusIndex)
    {
      m_replicationStatus.push_back(replicationStatusJsonList[replicationStatusIndex].AsObject());
    }
    m_replicationStatusHasBeenSet = true;
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
