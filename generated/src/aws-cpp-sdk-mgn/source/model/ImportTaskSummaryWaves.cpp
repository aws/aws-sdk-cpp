/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ImportTaskSummaryWaves.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ImportTaskSummaryWaves::ImportTaskSummaryWaves() : 
    m_createdCount(0),
    m_createdCountHasBeenSet(false),
    m_modifiedCount(0),
    m_modifiedCountHasBeenSet(false)
{
}

ImportTaskSummaryWaves::ImportTaskSummaryWaves(JsonView jsonValue) : 
    m_createdCount(0),
    m_createdCountHasBeenSet(false),
    m_modifiedCount(0),
    m_modifiedCountHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTaskSummaryWaves& ImportTaskSummaryWaves::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdCount"))
  {
    m_createdCount = jsonValue.GetInt64("createdCount");

    m_createdCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedCount"))
  {
    m_modifiedCount = jsonValue.GetInt64("modifiedCount");

    m_modifiedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTaskSummaryWaves::Jsonize() const
{
  JsonValue payload;

  if(m_createdCountHasBeenSet)
  {
   payload.WithInt64("createdCount", m_createdCount);

  }

  if(m_modifiedCountHasBeenSet)
  {
   payload.WithInt64("modifiedCount", m_modifiedCount);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
