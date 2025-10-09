/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ActionConnectorSearchFilter.h>
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

ActionConnectorSearchFilter::ActionConnectorSearchFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionConnectorSearchFilter& ActionConnectorSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ActionConnectorSearchFilterNameEnumMapper::GetActionConnectorSearchFilterNameEnumForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = FilterOperatorMapper::GetFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionConnectorSearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ActionConnectorSearchFilterNameEnumMapper::GetNameForActionConnectorSearchFilterNameEnum(m_name));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", FilterOperatorMapper::GetNameForFilterOperator(m_operator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
