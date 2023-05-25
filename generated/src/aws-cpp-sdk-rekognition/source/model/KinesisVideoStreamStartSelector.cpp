/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/KinesisVideoStreamStartSelector.h>
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

KinesisVideoStreamStartSelector::KinesisVideoStreamStartSelector() : 
    m_producerTimestamp(0),
    m_producerTimestampHasBeenSet(false),
    m_fragmentNumberHasBeenSet(false)
{
}

KinesisVideoStreamStartSelector::KinesisVideoStreamStartSelector(JsonView jsonValue) : 
    m_producerTimestamp(0),
    m_producerTimestampHasBeenSet(false),
    m_fragmentNumberHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamStartSelector& KinesisVideoStreamStartSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProducerTimestamp"))
  {
    m_producerTimestamp = jsonValue.GetInt64("ProducerTimestamp");

    m_producerTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FragmentNumber"))
  {
    m_fragmentNumber = jsonValue.GetString("FragmentNumber");

    m_fragmentNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamStartSelector::Jsonize() const
{
  JsonValue payload;

  if(m_producerTimestampHasBeenSet)
  {
   payload.WithInt64("ProducerTimestamp", m_producerTimestamp);

  }

  if(m_fragmentNumberHasBeenSet)
  {
   payload.WithString("FragmentNumber", m_fragmentNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
