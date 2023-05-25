/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CustomImage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CustomImage::CustomImage() : 
    m_imageNameHasBeenSet(false),
    m_imageVersionNumber(0),
    m_imageVersionNumberHasBeenSet(false),
    m_appImageConfigNameHasBeenSet(false)
{
}

CustomImage::CustomImage(JsonView jsonValue) : 
    m_imageNameHasBeenSet(false),
    m_imageVersionNumber(0),
    m_imageVersionNumberHasBeenSet(false),
    m_appImageConfigNameHasBeenSet(false)
{
  *this = jsonValue;
}

CustomImage& CustomImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageName"))
  {
    m_imageName = jsonValue.GetString("ImageName");

    m_imageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageVersionNumber"))
  {
    m_imageVersionNumber = jsonValue.GetInteger("ImageVersionNumber");

    m_imageVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppImageConfigName"))
  {
    m_appImageConfigName = jsonValue.GetString("AppImageConfigName");

    m_appImageConfigNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomImage::Jsonize() const
{
  JsonValue payload;

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_imageVersionNumberHasBeenSet)
  {
   payload.WithInteger("ImageVersionNumber", m_imageVersionNumber);

  }

  if(m_appImageConfigNameHasBeenSet)
  {
   payload.WithString("AppImageConfigName", m_appImageConfigName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
