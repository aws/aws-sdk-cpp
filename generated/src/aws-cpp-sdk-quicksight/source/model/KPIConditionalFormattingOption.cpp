/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIConditionalFormattingOption.h>
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

KPIConditionalFormattingOption::KPIConditionalFormattingOption() : 
    m_primaryValueHasBeenSet(false),
    m_progressBarHasBeenSet(false)
{
}

KPIConditionalFormattingOption::KPIConditionalFormattingOption(JsonView jsonValue) : 
    m_primaryValueHasBeenSet(false),
    m_progressBarHasBeenSet(false)
{
  *this = jsonValue;
}

KPIConditionalFormattingOption& KPIConditionalFormattingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryValue"))
  {
    m_primaryValue = jsonValue.GetObject("PrimaryValue");

    m_primaryValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressBar"))
  {
    m_progressBar = jsonValue.GetObject("ProgressBar");

    m_progressBarHasBeenSet = true;
  }

  return *this;
}

JsonValue KPIConditionalFormattingOption::Jsonize() const
{
  JsonValue payload;

  if(m_primaryValueHasBeenSet)
  {
   payload.WithObject("PrimaryValue", m_primaryValue.Jsonize());

  }

  if(m_progressBarHasBeenSet)
  {
   payload.WithObject("ProgressBar", m_progressBar.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
