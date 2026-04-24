/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/service-quotas/model/QuotaUtilizationInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ServiceQuotas {
namespace Model {

QuotaUtilizationInfo::QuotaUtilizationInfo(JsonView jsonValue) { *this = jsonValue; }

QuotaUtilizationInfo& QuotaUtilizationInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuotaCode")) {
    m_quotaCode = jsonValue.GetString("QuotaCode");
    m_quotaCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceCode")) {
    m_serviceCode = jsonValue.GetString("ServiceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuotaName")) {
    m_quotaName = jsonValue.GetString("QuotaName");
    m_quotaNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Namespace")) {
    m_namespace = jsonValue.GetString("Namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Utilization")) {
    m_utilization = jsonValue.GetDouble("Utilization");
    m_utilizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultValue")) {
    m_defaultValue = jsonValue.GetDouble("DefaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AppliedValue")) {
    m_appliedValue = jsonValue.GetDouble("AppliedValue");
    m_appliedValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceName")) {
    m_serviceName = jsonValue.GetString("ServiceName");
    m_serviceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Adjustable")) {
    m_adjustable = jsonValue.GetBool("Adjustable");
    m_adjustableHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaUtilizationInfo::Jsonize() const {
  JsonValue payload;

  if (m_quotaCodeHasBeenSet) {
    payload.WithString("QuotaCode", m_quotaCode);
  }

  if (m_serviceCodeHasBeenSet) {
    payload.WithString("ServiceCode", m_serviceCode);
  }

  if (m_quotaNameHasBeenSet) {
    payload.WithString("QuotaName", m_quotaName);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("Namespace", m_namespace);
  }

  if (m_utilizationHasBeenSet) {
    payload.WithDouble("Utilization", m_utilization);
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithDouble("DefaultValue", m_defaultValue);
  }

  if (m_appliedValueHasBeenSet) {
    payload.WithDouble("AppliedValue", m_appliedValue);
  }

  if (m_serviceNameHasBeenSet) {
    payload.WithString("ServiceName", m_serviceName);
  }

  if (m_adjustableHasBeenSet) {
    payload.WithBool("Adjustable", m_adjustable);
  }

  return payload;
}

}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
