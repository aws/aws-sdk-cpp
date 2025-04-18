﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddMediaStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

AddMediaStreamRequest::AddMediaStreamRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

AddMediaStreamRequest& AddMediaStreamRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    m_attributes = jsonValue.GetObject("attributes");
    m_attributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clockRate"))
  {
    m_clockRate = jsonValue.GetInteger("clockRate");
    m_clockRateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaStreamId"))
  {
    m_mediaStreamId = jsonValue.GetInteger("mediaStreamId");
    m_mediaStreamIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaStreamName"))
  {
    m_mediaStreamName = jsonValue.GetString("mediaStreamName");
    m_mediaStreamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaStreamType"))
  {
    m_mediaStreamType = MediaStreamTypeMapper::GetMediaStreamTypeForName(jsonValue.GetString("mediaStreamType"));
    m_mediaStreamTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoFormat"))
  {
    m_videoFormat = jsonValue.GetString("videoFormat");
    m_videoFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue AddMediaStreamRequest::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("attributes", m_attributes.Jsonize());

  }

  if(m_clockRateHasBeenSet)
  {
   payload.WithInteger("clockRate", m_clockRate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_mediaStreamIdHasBeenSet)
  {
   payload.WithInteger("mediaStreamId", m_mediaStreamId);

  }

  if(m_mediaStreamNameHasBeenSet)
  {
   payload.WithString("mediaStreamName", m_mediaStreamName);

  }

  if(m_mediaStreamTypeHasBeenSet)
  {
   payload.WithString("mediaStreamType", MediaStreamTypeMapper::GetNameForMediaStreamType(m_mediaStreamType));
  }

  if(m_videoFormatHasBeenSet)
  {
   payload.WithString("videoFormat", m_videoFormat);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
