/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineValueLabelConfiguration.h>
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

ReferenceLineValueLabelConfiguration::ReferenceLineValueLabelConfiguration() : 
    m_relativePosition(ReferenceLineValueLabelRelativePosition::NOT_SET),
    m_relativePositionHasBeenSet(false),
    m_formatConfigurationHasBeenSet(false)
{
}

ReferenceLineValueLabelConfiguration::ReferenceLineValueLabelConfiguration(JsonView jsonValue) : 
    m_relativePosition(ReferenceLineValueLabelRelativePosition::NOT_SET),
    m_relativePositionHasBeenSet(false),
    m_formatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceLineValueLabelConfiguration& ReferenceLineValueLabelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RelativePosition"))
  {
    m_relativePosition = ReferenceLineValueLabelRelativePositionMapper::GetReferenceLineValueLabelRelativePositionForName(jsonValue.GetString("RelativePosition"));

    m_relativePositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FormatConfiguration"))
  {
    m_formatConfiguration = jsonValue.GetObject("FormatConfiguration");

    m_formatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceLineValueLabelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_relativePositionHasBeenSet)
  {
   payload.WithString("RelativePosition", ReferenceLineValueLabelRelativePositionMapper::GetNameForReferenceLineValueLabelRelativePosition(m_relativePosition));
  }

  if(m_formatConfigurationHasBeenSet)
  {
   payload.WithObject("FormatConfiguration", m_formatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
