/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TextDetectionResult.h>
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

TextDetectionResult::TextDetectionResult() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_textDetectionHasBeenSet(false)
{
}

TextDetectionResult::TextDetectionResult(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_textDetectionHasBeenSet(false)
{
  *this = jsonValue;
}

TextDetectionResult& TextDetectionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextDetection"))
  {
    m_textDetection = jsonValue.GetObject("TextDetection");

    m_textDetectionHasBeenSet = true;
  }

  return *this;
}

JsonValue TextDetectionResult::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_textDetectionHasBeenSet)
  {
   payload.WithObject("TextDetection", m_textDetection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
