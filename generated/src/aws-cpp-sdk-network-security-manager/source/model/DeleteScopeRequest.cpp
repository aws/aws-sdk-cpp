/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/DeleteScopeRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteScopeRequest::SerializePayload() const { return {}; }
