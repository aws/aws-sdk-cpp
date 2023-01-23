/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorSettings.h>
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

StreamProcessorSettings::StreamProcessorSettings() : 
    m_faceSearchHasBeenSet(false),
    m_connectedHomeHasBeenSet(false)
{
}

StreamProcessorSettings::StreamProcessorSettings(JsonView jsonValue) : 
    m_faceSearchHasBeenSet(false),
    m_connectedHomeHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorSettings& StreamProcessorSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaceSearch"))
  {
    m_faceSearch = jsonValue.GetObject("FaceSearch");

    m_faceSearchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedHome"))
  {
    m_connectedHome = jsonValue.GetObject("ConnectedHome");

    m_connectedHomeHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_faceSearchHasBeenSet)
  {
   payload.WithObject("FaceSearch", m_faceSearch.Jsonize());

  }

  if(m_connectedHomeHasBeenSet)
  {
   payload.WithObject("ConnectedHome", m_connectedHome.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
