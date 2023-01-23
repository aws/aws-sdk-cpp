/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Image.h>
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

Image::Image() : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageStatus(ImageStatus::NOT_SET),
    m_imageStatusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

Image::Image(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageStatus(ImageStatus::NOT_SET),
    m_imageStatusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Image& Image::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageArn"))
  {
    m_imageArn = jsonValue.GetString("ImageArn");

    m_imageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageName"))
  {
    m_imageName = jsonValue.GetString("ImageName");

    m_imageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageStatus"))
  {
    m_imageStatus = ImageStatusMapper::GetImageStatusForName(jsonValue.GetString("ImageStatus"));

    m_imageStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_imageArnHasBeenSet)
  {
   payload.WithString("ImageArn", m_imageArn);

  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_imageStatusHasBeenSet)
  {
   payload.WithString("ImageStatus", ImageStatusMapper::GetNameForImageStatus(m_imageStatus));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
