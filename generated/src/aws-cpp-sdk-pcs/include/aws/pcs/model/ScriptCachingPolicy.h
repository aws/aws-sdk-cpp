/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class ScriptCachingPolicy { NOT_SET, CACHE_ONCE, REFRESH_ON_REBOOT };

namespace ScriptCachingPolicyMapper {
AWS_PCS_API ScriptCachingPolicy GetScriptCachingPolicyForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForScriptCachingPolicy(ScriptCachingPolicy value);
}  // namespace ScriptCachingPolicyMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
