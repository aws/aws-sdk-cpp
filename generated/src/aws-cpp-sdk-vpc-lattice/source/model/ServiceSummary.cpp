/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

ServiceSummary::ServiceSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_dnsEntryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ServiceSummary::ServiceSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_dnsEntryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceSummary& ServiceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");

    m_customDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsEntry"))
  {
    m_dnsEntry = jsonValue.GetObject("dnsEntry");

    m_dnsEntryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceStatusMapper::GetServiceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_customDomainNameHasBeenSet)
  {
   payload.WithString("customDomainName", m_customDomainName);

  }

  if(m_dnsEntryHasBeenSet)
  {
   payload.WithObject("dnsEntry", m_dnsEntry.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceStatusMapper::GetNameForServiceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
