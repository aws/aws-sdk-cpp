/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/GetGlobalResolverRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetGlobalResolverRequest::SerializePayload() const { return {}; }
