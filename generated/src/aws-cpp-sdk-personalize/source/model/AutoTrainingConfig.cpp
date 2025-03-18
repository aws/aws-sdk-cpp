/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/AutoTrainingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

AutoTrainingConfig::AutoTrainingConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoTrainingConfig& AutoTrainingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schedulingExpression"))
  {
    m_schedulingExpression = jsonValue.GetString("schedulingExpression");
    m_schedulingExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoTrainingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_schedulingExpressionHasBeenSet)
  {
   payload.WithString("schedulingExpression", m_schedulingExpression);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
