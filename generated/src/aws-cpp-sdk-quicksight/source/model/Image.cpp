/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Image.h>
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

Image::Image(JsonView jsonValue)
{
  *this = jsonValue;
}

Image& Image::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeneratedImageUrl"))
  {
    m_generatedImageUrl = jsonValue.GetString("GeneratedImageUrl");
    m_generatedImageUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_generatedImageUrlHasBeenSet)
  {
   payload.WithString("GeneratedImageUrl", m_generatedImageUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
