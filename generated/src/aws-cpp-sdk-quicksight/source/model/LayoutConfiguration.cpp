/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LayoutConfiguration.h>
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

LayoutConfiguration::LayoutConfiguration() : 
    m_gridLayoutHasBeenSet(false),
    m_freeFormLayoutHasBeenSet(false),
    m_sectionBasedLayoutHasBeenSet(false)
{
}

LayoutConfiguration::LayoutConfiguration(JsonView jsonValue) : 
    m_gridLayoutHasBeenSet(false),
    m_freeFormLayoutHasBeenSet(false),
    m_sectionBasedLayoutHasBeenSet(false)
{
  *this = jsonValue;
}

LayoutConfiguration& LayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GridLayout"))
  {
    m_gridLayout = jsonValue.GetObject("GridLayout");

    m_gridLayoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FreeFormLayout"))
  {
    m_freeFormLayout = jsonValue.GetObject("FreeFormLayout");

    m_freeFormLayoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SectionBasedLayout"))
  {
    m_sectionBasedLayout = jsonValue.GetObject("SectionBasedLayout");

    m_sectionBasedLayoutHasBeenSet = true;
  }

  return *this;
}

JsonValue LayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_gridLayoutHasBeenSet)
  {
   payload.WithObject("GridLayout", m_gridLayout.Jsonize());

  }

  if(m_freeFormLayoutHasBeenSet)
  {
   payload.WithObject("FreeFormLayout", m_freeFormLayout.Jsonize());

  }

  if(m_sectionBasedLayoutHasBeenSet)
  {
   payload.WithObject("SectionBasedLayout", m_sectionBasedLayout.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
