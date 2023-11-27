/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest() : 
    m_autoEnable(false),
    m_autoEnableHasBeenSet(false),
    m_autoEnableStandards(AutoEnableStandards::NOT_SET),
    m_autoEnableStandardsHasBeenSet(false),
    m_organizationConfigurationHasBeenSet(false)
{
}

Aws::String UpdateOrganizationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoEnableHasBeenSet)
  {
   payload.WithBool("AutoEnable", m_autoEnable);

  }

  if(m_autoEnableStandardsHasBeenSet)
  {
   payload.WithString("AutoEnableStandards", AutoEnableStandardsMapper::GetNameForAutoEnableStandards(m_autoEnableStandards));
  }

  if(m_organizationConfigurationHasBeenSet)
  {
   payload.WithObject("OrganizationConfiguration", m_organizationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




