/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TechnicalCueSegment.h>
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

TechnicalCueSegment::TechnicalCueSegment(JsonView jsonValue)
{
  *this = jsonValue;
}

TechnicalCueSegment& TechnicalCueSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = TechnicalCueTypeMapper::GetTechnicalCueTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");
    m_confidenceHasBeenSet = true;
  }
  return *this;
}

JsonValue TechnicalCueSegment::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TechnicalCueTypeMapper::GetNameForTechnicalCueType(m_type));
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
