/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ImageMapping.h>
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

ImageMapping::ImageMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageMapping& ImageMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceImage"))
  {
    m_sourceImage = jsonValue.GetString("sourceImage");
    m_sourceImageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationImage"))
  {
    m_destinationImage = jsonValue.GetString("destinationImage");
    m_destinationImageHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageMapping::Jsonize() const
{
  JsonValue payload;

  if(m_sourceImageHasBeenSet)
  {
   payload.WithString("sourceImage", m_sourceImage);

  }

  if(m_destinationImageHasBeenSet)
  {
   payload.WithString("destinationImage", m_destinationImage);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
