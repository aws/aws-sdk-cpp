/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/S3Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

S3Resource::S3Resource() : 
    m_bucketArnHasBeenSet(false),
    m_keyRangeHasBeenSet(false),
    m_targetOnDeviceServicesHasBeenSet(false)
{
}

S3Resource::S3Resource(JsonView jsonValue) : 
    m_bucketArnHasBeenSet(false),
    m_keyRangeHasBeenSet(false),
    m_targetOnDeviceServicesHasBeenSet(false)
{
  *this = jsonValue;
}

S3Resource& S3Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketArn"))
  {
    m_bucketArn = jsonValue.GetString("BucketArn");

    m_bucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyRange"))
  {
    m_keyRange = jsonValue.GetObject("KeyRange");

    m_keyRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetOnDeviceServices"))
  {
    Aws::Utils::Array<JsonView> targetOnDeviceServicesJsonList = jsonValue.GetArray("TargetOnDeviceServices");
    for(unsigned targetOnDeviceServicesIndex = 0; targetOnDeviceServicesIndex < targetOnDeviceServicesJsonList.GetLength(); ++targetOnDeviceServicesIndex)
    {
      m_targetOnDeviceServices.push_back(targetOnDeviceServicesJsonList[targetOnDeviceServicesIndex].AsObject());
    }
    m_targetOnDeviceServicesHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Resource::Jsonize() const
{
  JsonValue payload;

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("BucketArn", m_bucketArn);

  }

  if(m_keyRangeHasBeenSet)
  {
   payload.WithObject("KeyRange", m_keyRange.Jsonize());

  }

  if(m_targetOnDeviceServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetOnDeviceServicesJsonList(m_targetOnDeviceServices.size());
   for(unsigned targetOnDeviceServicesIndex = 0; targetOnDeviceServicesIndex < targetOnDeviceServicesJsonList.GetLength(); ++targetOnDeviceServicesIndex)
   {
     targetOnDeviceServicesJsonList[targetOnDeviceServicesIndex].AsObject(m_targetOnDeviceServices[targetOnDeviceServicesIndex].Jsonize());
   }
   payload.WithArray("TargetOnDeviceServices", std::move(targetOnDeviceServicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
