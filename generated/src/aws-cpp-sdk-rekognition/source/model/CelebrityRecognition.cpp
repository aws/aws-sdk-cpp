/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CelebrityRecognition.h>
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

CelebrityRecognition::CelebrityRecognition() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_celebrityHasBeenSet(false)
{
}

CelebrityRecognition::CelebrityRecognition(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_celebrityHasBeenSet(false)
{
  *this = jsonValue;
}

CelebrityRecognition& CelebrityRecognition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Celebrity"))
  {
    m_celebrity = jsonValue.GetObject("Celebrity");

    m_celebrityHasBeenSet = true;
  }

  return *this;
}

JsonValue CelebrityRecognition::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_celebrityHasBeenSet)
  {
   payload.WithObject("Celebrity", m_celebrity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
