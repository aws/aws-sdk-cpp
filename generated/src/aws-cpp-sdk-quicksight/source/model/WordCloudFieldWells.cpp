/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudFieldWells.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

WordCloudFieldWells::WordCloudFieldWells() : 
    m_wordCloudAggregatedFieldWellsHasBeenSet(false)
{
}

WordCloudFieldWells::WordCloudFieldWells(JsonView jsonValue) : 
    m_wordCloudAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

WordCloudFieldWells& WordCloudFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WordCloudAggregatedFieldWells"))
  {
    m_wordCloudAggregatedFieldWells = jsonValue.GetObject("WordCloudAggregatedFieldWells");

    m_wordCloudAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue WordCloudFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_wordCloudAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("WordCloudAggregatedFieldWells", m_wordCloudAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
