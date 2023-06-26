/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericSeparatorConfiguration.h>
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

NumericSeparatorConfiguration::NumericSeparatorConfiguration() : 
    m_decimalSeparator(NumericSeparatorSymbol::NOT_SET),
    m_decimalSeparatorHasBeenSet(false),
    m_thousandsSeparatorHasBeenSet(false)
{
}

NumericSeparatorConfiguration::NumericSeparatorConfiguration(JsonView jsonValue) : 
    m_decimalSeparator(NumericSeparatorSymbol::NOT_SET),
    m_decimalSeparatorHasBeenSet(false),
    m_thousandsSeparatorHasBeenSet(false)
{
  *this = jsonValue;
}

NumericSeparatorConfiguration& NumericSeparatorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DecimalSeparator"))
  {
    m_decimalSeparator = NumericSeparatorSymbolMapper::GetNumericSeparatorSymbolForName(jsonValue.GetString("DecimalSeparator"));

    m_decimalSeparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThousandsSeparator"))
  {
    m_thousandsSeparator = jsonValue.GetObject("ThousandsSeparator");

    m_thousandsSeparatorHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericSeparatorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_decimalSeparatorHasBeenSet)
  {
   payload.WithString("DecimalSeparator", NumericSeparatorSymbolMapper::GetNameForNumericSeparatorSymbol(m_decimalSeparator));
  }

  if(m_thousandsSeparatorHasBeenSet)
  {
   payload.WithObject("ThousandsSeparator", m_thousandsSeparator.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
