/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/LogsEncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

LogsEncryptionConfiguration::LogsEncryptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LogsEncryptionConfiguration& LogsEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionStrategy"))
  {
    m_encryptionStrategy = EncryptionStrategyMapper::GetEncryptionStrategyForName(jsonValue.GetString("EncryptionStrategy"));
    m_encryptionStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionConflictResolutionStrategy"))
  {
    m_encryptionConflictResolutionStrategy = EncryptionConflictResolutionStrategyMapper::GetEncryptionConflictResolutionStrategyForName(jsonValue.GetString("EncryptionConflictResolutionStrategy"));
    m_encryptionConflictResolutionStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue LogsEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionStrategyHasBeenSet)
  {
   payload.WithString("EncryptionStrategy", EncryptionStrategyMapper::GetNameForEncryptionStrategy(m_encryptionStrategy));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_encryptionConflictResolutionStrategyHasBeenSet)
  {
   payload.WithString("EncryptionConflictResolutionStrategy", EncryptionConflictResolutionStrategyMapper::GetNameForEncryptionConflictResolutionStrategy(m_encryptionConflictResolutionStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
