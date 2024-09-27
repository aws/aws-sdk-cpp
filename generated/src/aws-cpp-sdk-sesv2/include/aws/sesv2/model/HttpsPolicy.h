/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class HttpsPolicy
  {
    NOT_SET,
    REQUIRE,
    REQUIRE_OPEN_ONLY,
    OPTIONAL
  };

namespace HttpsPolicyMapper
{
AWS_SESV2_API HttpsPolicy GetHttpsPolicyForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForHttpsPolicy(HttpsPolicy value);
} // namespace HttpsPolicyMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
