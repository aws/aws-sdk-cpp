/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExportTaskSummary.h>
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

ExportTaskSummary::ExportTaskSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportTaskSummary& ExportTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("graphId"))
  {
    m_graphId = jsonValue.GetString("graphId");
    m_graphIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ExportTaskStatusMapper::GetExportTaskStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("format"))
  {
    m_format = ExportFormatMapper::GetExportFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parquetType"))
  {
    m_parquetType = ParquetTypeMapper::GetParquetTypeForName(jsonValue.GetString("parquetType"));
    m_parquetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_graphIdHasBeenSet)
  {
   payload.WithString("graphId", m_graphId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExportTaskStatusMapper::GetNameForExportTaskStatus(m_status));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", ExportFormatMapper::GetNameForExportFormat(m_format));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("kmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  if(m_parquetTypeHasBeenSet)
  {
   payload.WithString("parquetType", ParquetTypeMapper::GetNameForParquetType(m_parquetType));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
