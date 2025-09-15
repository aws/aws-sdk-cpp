/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/SourceLogsConfiguration.h>
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

SourceLogsConfiguration::SourceLogsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceLogsConfiguration& SourceLogsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroupSelectionCriteria"))
  {
    m_logGroupSelectionCriteria = jsonValue.GetString("LogGroupSelectionCriteria");
    m_logGroupSelectionCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptedLogGroupStrategy"))
  {
    m_encryptedLogGroupStrategy = EncryptedLogGroupStrategyMapper::GetEncryptedLogGroupStrategyForName(jsonValue.GetString("EncryptedLogGroupStrategy"));
    m_encryptedLogGroupStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceLogsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupSelectionCriteriaHasBeenSet)
  {
   payload.WithString("LogGroupSelectionCriteria", m_logGroupSelectionCriteria);

  }

  if(m_encryptedLogGroupStrategyHasBeenSet)
  {
   payload.WithString("EncryptedLogGroupStrategy", EncryptedLogGroupStrategyMapper::GetNameForEncryptedLogGroupStrategy(m_encryptedLogGroupStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
