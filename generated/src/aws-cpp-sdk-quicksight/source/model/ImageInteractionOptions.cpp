/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ImageInteractionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ImageInteractionOptions::ImageInteractionOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageInteractionOptions& ImageInteractionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageMenuOption"))
  {
    m_imageMenuOption = jsonValue.GetObject("ImageMenuOption");
    m_imageMenuOptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageInteractionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_imageMenuOptionHasBeenSet)
  {
   payload.WithObject("ImageMenuOption", m_imageMenuOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
