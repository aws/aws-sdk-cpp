/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldCustomTextContent.h>
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

TableFieldCustomTextContent::TableFieldCustomTextContent() : 
    m_valueHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false)
{
}

TableFieldCustomTextContent::TableFieldCustomTextContent(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldCustomTextContent& TableFieldCustomTextContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontConfiguration"))
  {
    m_fontConfiguration = jsonValue.GetObject("FontConfiguration");

    m_fontConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldCustomTextContent::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_fontConfigurationHasBeenSet)
  {
   payload.WithObject("FontConfiguration", m_fontConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
