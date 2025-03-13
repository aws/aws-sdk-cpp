/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DisplayFormatOptions.h>
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

DisplayFormatOptions::DisplayFormatOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DisplayFormatOptions& DisplayFormatOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UseBlankCellFormat"))
  {
    m_useBlankCellFormat = jsonValue.GetBool("UseBlankCellFormat");
    m_useBlankCellFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlankCellFormat"))
  {
    m_blankCellFormat = jsonValue.GetString("BlankCellFormat");
    m_blankCellFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateFormat"))
  {
    m_dateFormat = jsonValue.GetString("DateFormat");
    m_dateFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DecimalSeparator"))
  {
    m_decimalSeparator = TopicNumericSeparatorSymbolMapper::GetTopicNumericSeparatorSymbolForName(jsonValue.GetString("DecimalSeparator"));
    m_decimalSeparatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupingSeparator"))
  {
    m_groupingSeparator = jsonValue.GetString("GroupingSeparator");
    m_groupingSeparatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseGrouping"))
  {
    m_useGrouping = jsonValue.GetBool("UseGrouping");
    m_useGroupingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FractionDigits"))
  {
    m_fractionDigits = jsonValue.GetInteger("FractionDigits");
    m_fractionDigitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");
    m_prefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Suffix"))
  {
    m_suffix = jsonValue.GetString("Suffix");
    m_suffixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnitScaler"))
  {
    m_unitScaler = NumberScaleMapper::GetNumberScaleForName(jsonValue.GetString("UnitScaler"));
    m_unitScalerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NegativeFormat"))
  {
    m_negativeFormat = jsonValue.GetObject("NegativeFormat");
    m_negativeFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrencySymbol"))
  {
    m_currencySymbol = jsonValue.GetString("CurrencySymbol");
    m_currencySymbolHasBeenSet = true;
  }
  return *this;
}

JsonValue DisplayFormatOptions::Jsonize() const
{
  JsonValue payload;

  if(m_useBlankCellFormatHasBeenSet)
  {
   payload.WithBool("UseBlankCellFormat", m_useBlankCellFormat);

  }

  if(m_blankCellFormatHasBeenSet)
  {
   payload.WithString("BlankCellFormat", m_blankCellFormat);

  }

  if(m_dateFormatHasBeenSet)
  {
   payload.WithString("DateFormat", m_dateFormat);

  }

  if(m_decimalSeparatorHasBeenSet)
  {
   payload.WithString("DecimalSeparator", TopicNumericSeparatorSymbolMapper::GetNameForTopicNumericSeparatorSymbol(m_decimalSeparator));
  }

  if(m_groupingSeparatorHasBeenSet)
  {
   payload.WithString("GroupingSeparator", m_groupingSeparator);

  }

  if(m_useGroupingHasBeenSet)
  {
   payload.WithBool("UseGrouping", m_useGrouping);

  }

  if(m_fractionDigitsHasBeenSet)
  {
   payload.WithInteger("FractionDigits", m_fractionDigits);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_suffixHasBeenSet)
  {
   payload.WithString("Suffix", m_suffix);

  }

  if(m_unitScalerHasBeenSet)
  {
   payload.WithString("UnitScaler", NumberScaleMapper::GetNameForNumberScale(m_unitScaler));
  }

  if(m_negativeFormatHasBeenSet)
  {
   payload.WithObject("NegativeFormat", m_negativeFormat.Jsonize());

  }

  if(m_currencySymbolHasBeenSet)
  {
   payload.WithString("CurrencySymbol", m_currencySymbol);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
