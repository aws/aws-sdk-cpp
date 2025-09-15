/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/DestinationLogsConfiguration.h>
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

DestinationLogsConfiguration::DestinationLogsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DestinationLogsConfiguration& DestinationLogsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogsEncryptionConfiguration"))
  {
    m_logsEncryptionConfiguration = jsonValue.GetObject("LogsEncryptionConfiguration");
    m_logsEncryptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupConfiguration"))
  {
    m_backupConfiguration = jsonValue.GetObject("BackupConfiguration");
    m_backupConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationLogsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logsEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("LogsEncryptionConfiguration", m_logsEncryptionConfiguration.Jsonize());

  }

  if(m_backupConfigurationHasBeenSet)
  {
   payload.WithObject("BackupConfiguration", m_backupConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
