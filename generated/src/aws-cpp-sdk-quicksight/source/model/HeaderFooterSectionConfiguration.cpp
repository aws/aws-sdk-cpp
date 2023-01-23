/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HeaderFooterSectionConfiguration.h>
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

HeaderFooterSectionConfiguration::HeaderFooterSectionConfiguration() : 
    m_sectionIdHasBeenSet(false),
    m_layoutHasBeenSet(false),
    m_styleHasBeenSet(false)
{
}

HeaderFooterSectionConfiguration::HeaderFooterSectionConfiguration(JsonView jsonValue) : 
    m_sectionIdHasBeenSet(false),
    m_layoutHasBeenSet(false),
    m_styleHasBeenSet(false)
{
  *this = jsonValue;
}

HeaderFooterSectionConfiguration& HeaderFooterSectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SectionId"))
  {
    m_sectionId = jsonValue.GetString("SectionId");

    m_sectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Layout"))
  {
    m_layout = jsonValue.GetObject("Layout");

    m_layoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Style"))
  {
    m_style = jsonValue.GetObject("Style");

    m_styleHasBeenSet = true;
  }

  return *this;
}

JsonValue HeaderFooterSectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sectionIdHasBeenSet)
  {
   payload.WithString("SectionId", m_sectionId);

  }

  if(m_layoutHasBeenSet)
  {
   payload.WithObject("Layout", m_layout.Jsonize());

  }

  if(m_styleHasBeenSet)
  {
   payload.WithObject("Style", m_style.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
