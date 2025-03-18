/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PartnerAppMaintenanceConfig.h>
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

PartnerAppMaintenanceConfig::PartnerAppMaintenanceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

PartnerAppMaintenanceConfig& PartnerAppMaintenanceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaintenanceWindowStart"))
  {
    m_maintenanceWindowStart = jsonValue.GetString("MaintenanceWindowStart");
    m_maintenanceWindowStartHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerAppMaintenanceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maintenanceWindowStartHasBeenSet)
  {
   payload.WithString("MaintenanceWindowStart", m_maintenanceWindowStart);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
