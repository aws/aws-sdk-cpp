/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ImageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ImageDetails::ImageDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageDetails& ImageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");
    m_imageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");
    m_imageDigestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceImage"))
  {
    m_sourceImage = jsonValue.GetString("sourceImage");
    m_sourceImageHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  if(m_sourceImageHasBeenSet)
  {
   payload.WithString("sourceImage", m_sourceImage);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
