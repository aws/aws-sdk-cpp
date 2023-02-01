/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HistogramBinOptions.h>
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

HistogramBinOptions::HistogramBinOptions() : 
    m_selectedBinType(HistogramBinType::NOT_SET),
    m_selectedBinTypeHasBeenSet(false),
    m_binCountHasBeenSet(false),
    m_binWidthHasBeenSet(false),
    m_startValue(0.0),
    m_startValueHasBeenSet(false)
{
}

HistogramBinOptions::HistogramBinOptions(JsonView jsonValue) : 
    m_selectedBinType(HistogramBinType::NOT_SET),
    m_selectedBinTypeHasBeenSet(false),
    m_binCountHasBeenSet(false),
    m_binWidthHasBeenSet(false),
    m_startValue(0.0),
    m_startValueHasBeenSet(false)
{
  *this = jsonValue;
}

HistogramBinOptions& HistogramBinOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedBinType"))
  {
    m_selectedBinType = HistogramBinTypeMapper::GetHistogramBinTypeForName(jsonValue.GetString("SelectedBinType"));

    m_selectedBinTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinCount"))
  {
    m_binCount = jsonValue.GetObject("BinCount");

    m_binCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinWidth"))
  {
    m_binWidth = jsonValue.GetObject("BinWidth");

    m_binWidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartValue"))
  {
    m_startValue = jsonValue.GetDouble("StartValue");

    m_startValueHasBeenSet = true;
  }

  return *this;
}

JsonValue HistogramBinOptions::Jsonize() const
{
  JsonValue payload;

  if(m_selectedBinTypeHasBeenSet)
  {
   payload.WithString("SelectedBinType", HistogramBinTypeMapper::GetNameForHistogramBinType(m_selectedBinType));
  }

  if(m_binCountHasBeenSet)
  {
   payload.WithObject("BinCount", m_binCount.Jsonize());

  }

  if(m_binWidthHasBeenSet)
  {
   payload.WithObject("BinWidth", m_binWidth.Jsonize());

  }

  if(m_startValueHasBeenSet)
  {
   payload.WithDouble("StartValue", m_startValue);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
