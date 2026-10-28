/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

namespace Aws {
namespace neptunedata {
namespace Model {
enum class Scope { NOT_SET, ALL, QUADS, DICTIONARIES };

namespace ScopeMapper {
AWS_NEPTUNEDATA_API Scope GetScopeForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForScope(Scope value);
}  // namespace ScopeMapper
}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
