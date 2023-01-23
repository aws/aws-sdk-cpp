/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/SignatureDetection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

SignatureDetection::SignatureDetection() : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_geometryHasBeenSet(false)
{
}

SignatureDetection::SignatureDetection(JsonView jsonValue) : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_geometryHasBeenSet(false)
{
  *this = jsonValue;
}

SignatureDetection& SignatureDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  return *this;
}

JsonValue SignatureDetection::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
