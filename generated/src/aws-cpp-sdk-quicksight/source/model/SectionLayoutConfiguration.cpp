/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionLayoutConfiguration.h>
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

SectionLayoutConfiguration::SectionLayoutConfiguration() : 
    m_freeFormLayoutHasBeenSet(false)
{
}

SectionLayoutConfiguration::SectionLayoutConfiguration(JsonView jsonValue) : 
    m_freeFormLayoutHasBeenSet(false)
{
  *this = jsonValue;
}

SectionLayoutConfiguration& SectionLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FreeFormLayout"))
  {
    m_freeFormLayout = jsonValue.GetObject("FreeFormLayout");

    m_freeFormLayoutHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_freeFormLayoutHasBeenSet)
  {
   payload.WithObject("FreeFormLayout", m_freeFormLayout.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
