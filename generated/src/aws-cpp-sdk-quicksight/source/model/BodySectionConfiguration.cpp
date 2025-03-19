/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BodySectionConfiguration.h>
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

BodySectionConfiguration::BodySectionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BodySectionConfiguration& BodySectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SectionId"))
  {
    m_sectionId = jsonValue.GetString("SectionId");
    m_sectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetObject("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Style"))
  {
    m_style = jsonValue.GetObject("Style");
    m_styleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PageBreakConfiguration"))
  {
    m_pageBreakConfiguration = jsonValue.GetObject("PageBreakConfiguration");
    m_pageBreakConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RepeatConfiguration"))
  {
    m_repeatConfiguration = jsonValue.GetObject("RepeatConfiguration");
    m_repeatConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue BodySectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sectionIdHasBeenSet)
  {
   payload.WithString("SectionId", m_sectionId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_styleHasBeenSet)
  {
   payload.WithObject("Style", m_style.Jsonize());

  }

  if(m_pageBreakConfigurationHasBeenSet)
  {
   payload.WithObject("PageBreakConfiguration", m_pageBreakConfiguration.Jsonize());

  }

  if(m_repeatConfigurationHasBeenSet)
  {
   payload.WithObject("RepeatConfiguration", m_repeatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
