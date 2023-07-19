/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/BackintConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

BackintConfig::BackintConfig() : 
    m_backintMode(BackintMode::NOT_SET),
    m_backintModeHasBeenSet(false),
    m_ensureNoBackupInProcess(false),
    m_ensureNoBackupInProcessHasBeenSet(false)
{
}

BackintConfig::BackintConfig(JsonView jsonValue) : 
    m_backintMode(BackintMode::NOT_SET),
    m_backintModeHasBeenSet(false),
    m_ensureNoBackupInProcess(false),
    m_ensureNoBackupInProcessHasBeenSet(false)
{
  *this = jsonValue;
}

BackintConfig& BackintConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackintMode"))
  {
    m_backintMode = BackintModeMapper::GetBackintModeForName(jsonValue.GetString("BackintMode"));

    m_backintModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnsureNoBackupInProcess"))
  {
    m_ensureNoBackupInProcess = jsonValue.GetBool("EnsureNoBackupInProcess");

    m_ensureNoBackupInProcessHasBeenSet = true;
  }

  return *this;
}

JsonValue BackintConfig::Jsonize() const
{
  JsonValue payload;

  if(m_backintModeHasBeenSet)
  {
   payload.WithString("BackintMode", BackintModeMapper::GetNameForBackintMode(m_backintMode));
  }

  if(m_ensureNoBackupInProcessHasBeenSet)
  {
   payload.WithBool("EnsureNoBackupInProcess", m_ensureNoBackupInProcess);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
