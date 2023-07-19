/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/ImageFrameInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

ImageFrameInformation::ImageFrameInformation() : 
    m_imageFrameIdHasBeenSet(false)
{
}

ImageFrameInformation::ImageFrameInformation(JsonView jsonValue) : 
    m_imageFrameIdHasBeenSet(false)
{
  *this = jsonValue;
}

ImageFrameInformation& ImageFrameInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageFrameId"))
  {
    m_imageFrameId = jsonValue.GetString("imageFrameId");

    m_imageFrameIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageFrameInformation::Jsonize() const
{
  JsonValue payload;

  if(m_imageFrameIdHasBeenSet)
  {
   payload.WithString("imageFrameId", m_imageFrameId);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
