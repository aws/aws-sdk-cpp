/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnchorDateConfiguration.h>
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

AnchorDateConfiguration::AnchorDateConfiguration() : 
    m_anchorOption(AnchorOption::NOT_SET),
    m_anchorOptionHasBeenSet(false),
    m_parameterNameHasBeenSet(false)
{
}

AnchorDateConfiguration::AnchorDateConfiguration(JsonView jsonValue) : 
    m_anchorOption(AnchorOption::NOT_SET),
    m_anchorOptionHasBeenSet(false),
    m_parameterNameHasBeenSet(false)
{
  *this = jsonValue;
}

AnchorDateConfiguration& AnchorDateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnchorOption"))
  {
    m_anchorOption = AnchorOptionMapper::GetAnchorOptionForName(jsonValue.GetString("AnchorOption"));

    m_anchorOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AnchorDateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_anchorOptionHasBeenSet)
  {
   payload.WithString("AnchorOption", AnchorOptionMapper::GetNameForAnchorOption(m_anchorOption));
  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
