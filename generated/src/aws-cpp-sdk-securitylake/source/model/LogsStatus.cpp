/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/LogsStatus.h>
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

LogsStatus::LogsStatus() : 
    m_healthStatus(SourceStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_pathToLogsHasBeenSet(false)
{
}

LogsStatus::LogsStatus(JsonView jsonValue) : 
    m_healthStatus(SourceStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_pathToLogsHasBeenSet(false)
{
  *this = jsonValue;
}

LogsStatus& LogsStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthStatus"))
  {
    m_healthStatus = SourceStatusMapper::GetSourceStatusForName(jsonValue.GetString("healthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pathToLogs"))
  {
    m_pathToLogs = jsonValue.GetString("pathToLogs");

    m_pathToLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue LogsStatus::Jsonize() const
{
  JsonValue payload;

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("healthStatus", SourceStatusMapper::GetNameForSourceStatus(m_healthStatus));
  }

  if(m_pathToLogsHasBeenSet)
  {
   payload.WithString("pathToLogs", m_pathToLogs);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
