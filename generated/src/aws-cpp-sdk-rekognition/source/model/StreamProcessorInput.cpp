/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorInput.h>
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

StreamProcessorInput::StreamProcessorInput() : 
    m_kinesisVideoStreamHasBeenSet(false)
{
}

StreamProcessorInput::StreamProcessorInput(JsonView jsonValue) : 
    m_kinesisVideoStreamHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorInput& StreamProcessorInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KinesisVideoStream"))
  {
    m_kinesisVideoStream = jsonValue.GetObject("KinesisVideoStream");

    m_kinesisVideoStreamHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorInput::Jsonize() const
{
  JsonValue payload;

  if(m_kinesisVideoStreamHasBeenSet)
  {
   payload.WithObject("KinesisVideoStream", m_kinesisVideoStream.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
