/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ImportTaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

ImportTaskSummary::ImportTaskSummary() : 
    m_graphIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(ImportTaskStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ImportTaskSummary::ImportTaskSummary(JsonView jsonValue) : 
    m_graphIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(ImportTaskStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTaskSummary& ImportTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("graphId"))
  {
    m_graphId = jsonValue.GetString("graphId");

    m_graphIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ImportTaskStatusMapper::GetImportTaskStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_graphIdHasBeenSet)
  {
   payload.WithString("graphId", m_graphId);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ImportTaskStatusMapper::GetNameForImportTaskStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
