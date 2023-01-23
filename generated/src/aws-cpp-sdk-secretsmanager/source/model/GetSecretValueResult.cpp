/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/GetSecretValueResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSecretValueResult::GetSecretValueResult()
{
}

GetSecretValueResult::GetSecretValueResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSecretValueResult& GetSecretValueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

  }

  if(jsonValue.ValueExists("SecretBinary"))
  {
    m_secretBinary = HashingUtils::Base64Decode(jsonValue.GetString("SecretBinary"));
  }

  if(jsonValue.ValueExists("SecretString"))
  {
    m_secretString = jsonValue.GetString("SecretString");

  }

  if(jsonValue.ValueExists("VersionStages"))
  {
    Aws::Utils::Array<JsonView> versionStagesJsonList = jsonValue.GetArray("VersionStages");
    for(unsigned versionStagesIndex = 0; versionStagesIndex < versionStagesJsonList.GetLength(); ++versionStagesIndex)
    {
      m_versionStages.push_back(versionStagesJsonList[versionStagesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

  }



  return *this;
}
