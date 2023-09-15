﻿/**
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
    m_progressBarHasBeenSet(false),
    m_actualValueHasBeenSet(false),
    m_comparisonValueHasBeenSet(false)
{
}

KPIConditionalFormattingOption::KPIConditionalFormattingOption(JsonView jsonValue) : 
    m_primaryValueHasBeenSet(false),
    m_progressBarHasBeenSet(false),
    m_actualValueHasBeenSet(false),
    m_comparisonValueHasBeenSet(false)
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

  if(jsonValue.ValueExists("ActualValue"))
  {
    m_actualValue = jsonValue.GetObject("ActualValue");

    m_actualValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonValue"))
  {
    m_comparisonValue = jsonValue.GetObject("ComparisonValue");

    m_comparisonValueHasBeenSet = true;
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

  if(m_actualValueHasBeenSet)
  {
   payload.WithObject("ActualValue", m_actualValue.Jsonize());

  }

  if(m_comparisonValueHasBeenSet)
  {
   payload.WithObject("ComparisonValue", m_comparisonValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
