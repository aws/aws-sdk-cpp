/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ExportStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ExportStatistics::ExportStatistics() : 
    m_processedRecordsCount(0),
    m_processedRecordsCountHasBeenSet(false),
    m_exportedRecordsCount(0),
    m_exportedRecordsCountHasBeenSet(false)
{
}

ExportStatistics::ExportStatistics(JsonView jsonValue) : 
    m_processedRecordsCount(0),
    m_processedRecordsCountHasBeenSet(false),
    m_exportedRecordsCount(0),
    m_exportedRecordsCountHasBeenSet(false)
{
  *this = jsonValue;
}

ExportStatistics& ExportStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProcessedRecordsCount"))
  {
    m_processedRecordsCount = jsonValue.GetInteger("ProcessedRecordsCount");

    m_processedRecordsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportedRecordsCount"))
  {
    m_exportedRecordsCount = jsonValue.GetInteger("ExportedRecordsCount");

    m_exportedRecordsCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_processedRecordsCountHasBeenSet)
  {
   payload.WithInteger("ProcessedRecordsCount", m_processedRecordsCount);

  }

  if(m_exportedRecordsCountHasBeenSet)
  {
   payload.WithInteger("ExportedRecordsCount", m_exportedRecordsCount);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
