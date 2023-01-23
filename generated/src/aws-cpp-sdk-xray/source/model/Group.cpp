/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/Group.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

Group::Group() : 
    m_groupNameHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_insightsConfigurationHasBeenSet(false)
{
}

Group::Group(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_insightsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupARN"))
  {
    m_groupARN = jsonValue.GetString("GroupARN");

    m_groupARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterExpression"))
  {
    m_filterExpression = jsonValue.GetString("FilterExpression");

    m_filterExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsightsConfiguration"))
  {
    m_insightsConfiguration = jsonValue.GetObject("InsightsConfiguration");

    m_insightsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupARNHasBeenSet)
  {
   payload.WithString("GroupARN", m_groupARN);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_insightsConfigurationHasBeenSet)
  {
   payload.WithObject("InsightsConfiguration", m_insightsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
