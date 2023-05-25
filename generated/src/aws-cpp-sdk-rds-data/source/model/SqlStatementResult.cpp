/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/SqlStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

SqlStatementResult::SqlStatementResult() : 
    m_resultFrameHasBeenSet(false),
    m_numberOfRecordsUpdated(0),
    m_numberOfRecordsUpdatedHasBeenSet(false)
{
}

SqlStatementResult::SqlStatementResult(JsonView jsonValue) : 
    m_resultFrameHasBeenSet(false),
    m_numberOfRecordsUpdated(0),
    m_numberOfRecordsUpdatedHasBeenSet(false)
{
  *this = jsonValue;
}

SqlStatementResult& SqlStatementResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resultFrame"))
  {
    m_resultFrame = jsonValue.GetObject("resultFrame");

    m_resultFrameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRecordsUpdated"))
  {
    m_numberOfRecordsUpdated = jsonValue.GetInt64("numberOfRecordsUpdated");

    m_numberOfRecordsUpdatedHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlStatementResult::Jsonize() const
{
  JsonValue payload;

  if(m_resultFrameHasBeenSet)
  {
   payload.WithObject("resultFrame", m_resultFrame.Jsonize());

  }

  if(m_numberOfRecordsUpdatedHasBeenSet)
  {
   payload.WithInt64("numberOfRecordsUpdated", m_numberOfRecordsUpdated);

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
