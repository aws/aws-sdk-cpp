/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringAlertActions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringAlertActions::MonitoringAlertActions() : 
    m_modelDashboardIndicatorHasBeenSet(false)
{
}

MonitoringAlertActions::MonitoringAlertActions(JsonView jsonValue) : 
    m_modelDashboardIndicatorHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringAlertActions& MonitoringAlertActions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelDashboardIndicator"))
  {
    m_modelDashboardIndicator = jsonValue.GetObject("ModelDashboardIndicator");

    m_modelDashboardIndicatorHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringAlertActions::Jsonize() const
{
  JsonValue payload;

  if(m_modelDashboardIndicatorHasBeenSet)
  {
   payload.WithObject("ModelDashboardIndicator", m_modelDashboardIndicator.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
