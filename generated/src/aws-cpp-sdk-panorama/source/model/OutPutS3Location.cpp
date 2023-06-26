﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/OutPutS3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

OutPutS3Location::OutPutS3Location() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
}

OutPutS3Location::OutPutS3Location(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
  *this = jsonValue;
}

OutPutS3Location& OutPutS3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectKey"))
  {
    m_objectKey = jsonValue.GetString("ObjectKey");

    m_objectKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue OutPutS3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_objectKeyHasBeenSet)
  {
   payload.WithString("ObjectKey", m_objectKey);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
