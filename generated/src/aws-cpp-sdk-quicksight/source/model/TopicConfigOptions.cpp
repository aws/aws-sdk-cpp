/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicConfigOptions.h>
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

TopicConfigOptions::TopicConfigOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicConfigOptions& TopicConfigOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QBusinessInsightsEnabled"))
  {
    m_qBusinessInsightsEnabled = jsonValue.GetBool("QBusinessInsightsEnabled");
    m_qBusinessInsightsEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicConfigOptions::Jsonize() const
{
  JsonValue payload;

  if(m_qBusinessInsightsEnabledHasBeenSet)
  {
   payload.WithBool("QBusinessInsightsEnabled", m_qBusinessInsightsEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
