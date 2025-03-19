/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserDashboardFeatureConfigurations.h>
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

AnonymousUserDashboardFeatureConfigurations::AnonymousUserDashboardFeatureConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

AnonymousUserDashboardFeatureConfigurations& AnonymousUserDashboardFeatureConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SharedView"))
  {
    m_sharedView = jsonValue.GetObject("SharedView");
    m_sharedViewHasBeenSet = true;
  }
  return *this;
}

JsonValue AnonymousUserDashboardFeatureConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_sharedViewHasBeenSet)
  {
   payload.WithObject("SharedView", m_sharedView.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
