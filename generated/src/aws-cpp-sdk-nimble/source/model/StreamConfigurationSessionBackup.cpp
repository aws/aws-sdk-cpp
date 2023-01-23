/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamConfigurationSessionBackup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StreamConfigurationSessionBackup::StreamConfigurationSessionBackup() : 
    m_maxBackupsToRetain(0),
    m_maxBackupsToRetainHasBeenSet(false),
    m_mode(SessionBackupMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

StreamConfigurationSessionBackup::StreamConfigurationSessionBackup(JsonView jsonValue) : 
    m_maxBackupsToRetain(0),
    m_maxBackupsToRetainHasBeenSet(false),
    m_mode(SessionBackupMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

StreamConfigurationSessionBackup& StreamConfigurationSessionBackup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxBackupsToRetain"))
  {
    m_maxBackupsToRetain = jsonValue.GetInteger("maxBackupsToRetain");

    m_maxBackupsToRetainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = SessionBackupModeMapper::GetSessionBackupModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamConfigurationSessionBackup::Jsonize() const
{
  JsonValue payload;

  if(m_maxBackupsToRetainHasBeenSet)
  {
   payload.WithInteger("maxBackupsToRetain", m_maxBackupsToRetain);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", SessionBackupModeMapper::GetNameForSessionBackupMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
