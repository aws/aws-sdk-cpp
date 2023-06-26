/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/AssociatedFace.h>
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

AssociatedFace::AssociatedFace() : 
    m_faceIdHasBeenSet(false)
{
}

AssociatedFace::AssociatedFace(JsonView jsonValue) : 
    m_faceIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedFace& AssociatedFace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaceId"))
  {
    m_faceId = jsonValue.GetString("FaceId");

    m_faceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedFace::Jsonize() const
{
  JsonValue payload;

  if(m_faceIdHasBeenSet)
  {
   payload.WithString("FaceId", m_faceId);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
