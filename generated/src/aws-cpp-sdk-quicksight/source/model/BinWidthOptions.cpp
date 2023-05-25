/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BinWidthOptions.h>
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

BinWidthOptions::BinWidthOptions() : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_binCountLimit(0),
    m_binCountLimitHasBeenSet(false)
{
}

BinWidthOptions::BinWidthOptions(JsonView jsonValue) : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_binCountLimit(0),
    m_binCountLimitHasBeenSet(false)
{
  *this = jsonValue;
}

BinWidthOptions& BinWidthOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinCountLimit"))
  {
    m_binCountLimit = jsonValue.GetInt64("BinCountLimit");

    m_binCountLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue BinWidthOptions::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_binCountLimitHasBeenSet)
  {
   payload.WithInt64("BinCountLimit", m_binCountLimit);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
