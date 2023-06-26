/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/AuditImage.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

AuditImage::AuditImage() : 
    m_bytesHasBeenSet(false),
    m_s3ObjectHasBeenSet(false),
    m_boundingBoxHasBeenSet(false)
{
}

AuditImage::AuditImage(JsonView jsonValue) : 
    m_bytesHasBeenSet(false),
    m_s3ObjectHasBeenSet(false),
    m_boundingBoxHasBeenSet(false)
{
  *this = jsonValue;
}

AuditImage& AuditImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bytes"))
  {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("Bytes"));
    m_bytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Object"))
  {
    m_s3Object = jsonValue.GetObject("S3Object");

    m_s3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditImage::Jsonize() const
{
  JsonValue payload;

  if(m_bytesHasBeenSet)
  {
   payload.WithString("Bytes", HashingUtils::Base64Encode(m_bytes));
  }

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("S3Object", m_s3Object.Jsonize());

  }

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
