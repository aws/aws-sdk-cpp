/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/security-ir/model/UpdateResolverTypeRequest.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateResolverTypeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resolverTypeHasBeenSet) {
    payload.WithString("resolverType", ResolverTypeMapper::GetNameForResolverType(m_resolverType));
  }

  return payload.View().WriteReadable();
}
