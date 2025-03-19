/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesKubernetesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsGuardDutyDetectorDataSourcesKubernetesDetails::AwsGuardDutyDetectorDataSourcesKubernetesDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsGuardDutyDetectorDataSourcesKubernetesDetails& AwsGuardDutyDetectorDataSourcesKubernetesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuditLogs"))
  {
    m_auditLogs = jsonValue.GetObject("AuditLogs");
    m_auditLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsGuardDutyDetectorDataSourcesKubernetesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_auditLogsHasBeenSet)
  {
   payload.WithObject("AuditLogs", m_auditLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
