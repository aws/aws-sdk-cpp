/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/ServiceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

ServiceSummary::ServiceSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ServiceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_dnsConfigHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_healthCheckCustomConfigHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
}

ServiceSummary::ServiceSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ServiceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_dnsConfigHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_healthCheckCustomConfigHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceSummary& ServiceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsConfig"))
  {
    m_dnsConfig = jsonValue.GetObject("DnsConfig");

    m_dnsConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckConfig"))
  {
    m_healthCheckConfig = jsonValue.GetObject("HealthCheckConfig");

    m_healthCheckConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckCustomConfig"))
  {
    m_healthCheckCustomConfig = jsonValue.GetObject("HealthCheckCustomConfig");

    m_healthCheckCustomConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ServiceTypeMapper::GetNameForServiceType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_dnsConfigHasBeenSet)
  {
   payload.WithObject("DnsConfig", m_dnsConfig.Jsonize());

  }

  if(m_healthCheckConfigHasBeenSet)
  {
   payload.WithObject("HealthCheckConfig", m_healthCheckConfig.Jsonize());

  }

  if(m_healthCheckCustomConfigHasBeenSet)
  {
   payload.WithObject("HealthCheckCustomConfig", m_healthCheckCustomConfig.Jsonize());

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
