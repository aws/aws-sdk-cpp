/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeEncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeEncryptionConfiguration::DataLakeEncryptionConfiguration() : 
    m_kmsKeyIdHasBeenSet(false)
{
}

DataLakeEncryptionConfiguration::DataLakeEncryptionConfiguration(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeEncryptionConfiguration& DataLakeEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
