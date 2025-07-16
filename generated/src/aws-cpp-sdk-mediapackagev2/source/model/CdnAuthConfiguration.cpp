/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/CdnAuthConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

CdnAuthConfiguration::CdnAuthConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CdnAuthConfiguration& CdnAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CdnIdentifierSecretArns"))
  {
    Aws::Utils::Array<JsonView> cdnIdentifierSecretArnsJsonList = jsonValue.GetArray("CdnIdentifierSecretArns");
    for(unsigned cdnIdentifierSecretArnsIndex = 0; cdnIdentifierSecretArnsIndex < cdnIdentifierSecretArnsJsonList.GetLength(); ++cdnIdentifierSecretArnsIndex)
    {
      m_cdnIdentifierSecretArns.push_back(cdnIdentifierSecretArnsJsonList[cdnIdentifierSecretArnsIndex].AsString());
    }
    m_cdnIdentifierSecretArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsRoleArn"))
  {
    m_secretsRoleArn = jsonValue.GetString("SecretsRoleArn");
    m_secretsRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CdnAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cdnIdentifierSecretArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cdnIdentifierSecretArnsJsonList(m_cdnIdentifierSecretArns.size());
   for(unsigned cdnIdentifierSecretArnsIndex = 0; cdnIdentifierSecretArnsIndex < cdnIdentifierSecretArnsJsonList.GetLength(); ++cdnIdentifierSecretArnsIndex)
   {
     cdnIdentifierSecretArnsJsonList[cdnIdentifierSecretArnsIndex].AsString(m_cdnIdentifierSecretArns[cdnIdentifierSecretArnsIndex]);
   }
   payload.WithArray("CdnIdentifierSecretArns", std::move(cdnIdentifierSecretArnsJsonList));

  }

  if(m_secretsRoleArnHasBeenSet)
  {
   payload.WithString("SecretsRoleArn", m_secretsRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
