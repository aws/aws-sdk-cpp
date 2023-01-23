/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetLabelStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DatasetLabelStats::DatasetLabelStats() : 
    m_entryCount(0),
    m_entryCountHasBeenSet(false),
    m_boundingBoxCount(0),
    m_boundingBoxCountHasBeenSet(false)
{
}

DatasetLabelStats::DatasetLabelStats(JsonView jsonValue) : 
    m_entryCount(0),
    m_entryCountHasBeenSet(false),
    m_boundingBoxCount(0),
    m_boundingBoxCountHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetLabelStats& DatasetLabelStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntryCount"))
  {
    m_entryCount = jsonValue.GetInteger("EntryCount");

    m_entryCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoundingBoxCount"))
  {
    m_boundingBoxCount = jsonValue.GetInteger("BoundingBoxCount");

    m_boundingBoxCountHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetLabelStats::Jsonize() const
{
  JsonValue payload;

  if(m_entryCountHasBeenSet)
  {
   payload.WithInteger("EntryCount", m_entryCount);

  }

  if(m_boundingBoxCountHasBeenSet)
  {
   payload.WithInteger("BoundingBoxCount", m_boundingBoxCount);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
