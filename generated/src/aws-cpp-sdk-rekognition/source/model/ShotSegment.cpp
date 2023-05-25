/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ShotSegment.h>
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

ShotSegment::ShotSegment() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

ShotSegment::ShotSegment(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

ShotSegment& ShotSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInt64("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ShotSegment::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInt64("Index", m_index);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
