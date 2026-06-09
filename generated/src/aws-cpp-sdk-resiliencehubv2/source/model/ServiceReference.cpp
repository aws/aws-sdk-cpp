/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceReference::ServiceReference(JsonView jsonValue) { *this = jsonValue; }

ServiceReference& ServiceReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceId")) {
    m_serviceId = jsonValue.GetString("serviceId");
    m_serviceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceName")) {
    m_serviceName = jsonValue.GetString("serviceName");
    m_serviceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceReference::Jsonize() const {
  JsonValue payload;

  if (m_serviceIdHasBeenSet) {
    payload.WithString("serviceId", m_serviceId);
  }

  if (m_serviceNameHasBeenSet) {
    payload.WithString("serviceName", m_serviceName);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
