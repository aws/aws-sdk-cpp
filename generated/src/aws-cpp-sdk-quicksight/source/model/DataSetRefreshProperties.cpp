/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetRefreshProperties.h>
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

DataSetRefreshProperties::DataSetRefreshProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSetRefreshProperties& DataSetRefreshProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RefreshConfiguration"))
  {
    m_refreshConfiguration = jsonValue.GetObject("RefreshConfiguration");
    m_refreshConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureConfiguration"))
  {
    m_failureConfiguration = jsonValue.GetObject("FailureConfiguration");
    m_failureConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetRefreshProperties::Jsonize() const
{
  JsonValue payload;

  if(m_refreshConfigurationHasBeenSet)
  {
   payload.WithObject("RefreshConfiguration", m_refreshConfiguration.Jsonize());

  }

  if(m_failureConfigurationHasBeenSet)
  {
   payload.WithObject("FailureConfiguration", m_failureConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
