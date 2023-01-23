/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/JobExecutionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

JobExecutionSettings::JobExecutionSettings() : 
    m_allowDeferredExecution(false),
    m_allowDeferredExecutionHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
}

JobExecutionSettings::JobExecutionSettings(JsonView jsonValue) : 
    m_allowDeferredExecution(false),
    m_allowDeferredExecutionHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionSettings& JobExecutionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowDeferredExecution"))
  {
    m_allowDeferredExecution = jsonValue.GetBool("AllowDeferredExecution");

    m_allowDeferredExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_allowDeferredExecutionHasBeenSet)
  {
   payload.WithBool("AllowDeferredExecution", m_allowDeferredExecution);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
