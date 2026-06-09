/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceFunction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceFunction::ServiceFunction(JsonView jsonValue) { *this = jsonValue; }

ServiceFunction& ServiceFunction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionId")) {
    m_serviceFunctionId = jsonValue.GetString("serviceFunctionId");
    m_serviceFunctionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("criticality")) {
    m_criticality = ServiceFunctionCriticalityMapper::GetServiceFunctionCriticalityForName(jsonValue.GetString("criticality"));
    m_criticalityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceCount")) {
    m_resourceCount = jsonValue.GetInteger("resourceCount");
    m_resourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = ServiceFunctionSourceMapper::GetServiceFunctionSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceFunction::Jsonize() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_serviceFunctionIdHasBeenSet) {
    payload.WithString("serviceFunctionId", m_serviceFunctionId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_criticalityHasBeenSet) {
    payload.WithString("criticality", ServiceFunctionCriticalityMapper::GetNameForServiceFunctionCriticality(m_criticality));
  }

  if (m_resourceCountHasBeenSet) {
    payload.WithInteger("resourceCount", m_resourceCount);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", ServiceFunctionSourceMapper::GetNameForServiceFunctionSource(m_source));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
