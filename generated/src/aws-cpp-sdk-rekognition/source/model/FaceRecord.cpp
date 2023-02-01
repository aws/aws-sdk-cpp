/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/FaceRecord.h>
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

FaceRecord::FaceRecord() : 
    m_faceHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
}

FaceRecord::FaceRecord(JsonView jsonValue) : 
    m_faceHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
  *this = jsonValue;
}

FaceRecord& FaceRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");

    m_faceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaceDetail"))
  {
    m_faceDetail = jsonValue.GetObject("FaceDetail");

    m_faceDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue FaceRecord::Jsonize() const
{
  JsonValue payload;

  if(m_faceHasBeenSet)
  {
   payload.WithObject("Face", m_face.Jsonize());

  }

  if(m_faceDetailHasBeenSet)
  {
   payload.WithObject("FaceDetail", m_faceDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
