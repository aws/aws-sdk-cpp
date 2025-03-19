/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ImageSet.h>
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

ImageSet::ImageSet(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageSet& ImageSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Original"))
  {
    m_original = jsonValue.GetObject("Original");
    m_originalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Height64"))
  {
    m_height64 = jsonValue.GetObject("Height64");
    m_height64HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Height32"))
  {
    m_height32 = jsonValue.GetObject("Height32");
    m_height32HasBeenSet = true;
  }
  return *this;
}

JsonValue ImageSet::Jsonize() const
{
  JsonValue payload;

  if(m_originalHasBeenSet)
  {
   payload.WithObject("Original", m_original.Jsonize());

  }

  if(m_height64HasBeenSet)
  {
   payload.WithObject("Height64", m_height64.Jsonize());

  }

  if(m_height32HasBeenSet)
  {
   payload.WithObject("Height32", m_height32.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
