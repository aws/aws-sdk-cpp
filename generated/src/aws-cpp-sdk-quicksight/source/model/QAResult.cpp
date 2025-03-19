/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QAResult.h>
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

QAResult::QAResult(JsonView jsonValue)
{
  *this = jsonValue;
}

QAResult& QAResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultType"))
  {
    m_resultType = QAResultTypeMapper::GetQAResultTypeForName(jsonValue.GetString("ResultType"));
    m_resultTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DashboardVisual"))
  {
    m_dashboardVisual = jsonValue.GetObject("DashboardVisual");
    m_dashboardVisualHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeneratedAnswer"))
  {
    m_generatedAnswer = jsonValue.GetObject("GeneratedAnswer");
    m_generatedAnswerHasBeenSet = true;
  }
  return *this;
}

JsonValue QAResult::Jsonize() const
{
  JsonValue payload;

  if(m_resultTypeHasBeenSet)
  {
   payload.WithString("ResultType", QAResultTypeMapper::GetNameForQAResultType(m_resultType));
  }

  if(m_dashboardVisualHasBeenSet)
  {
   payload.WithObject("DashboardVisual", m_dashboardVisual.Jsonize());

  }

  if(m_generatedAnswerHasBeenSet)
  {
   payload.WithObject("GeneratedAnswer", m_generatedAnswer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
