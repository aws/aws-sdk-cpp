/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>

namespace Aws {
namespace RolesAnywhere {
namespace Model {
enum class TipSubjectSource { NOT_SET, x509SAN_URI, x509Subject_CN };

namespace TipSubjectSourceMapper {
AWS_ROLESANYWHERE_API TipSubjectSource GetTipSubjectSourceForName(const Aws::String& name);

AWS_ROLESANYWHERE_API Aws::String GetNameForTipSubjectSource(TipSubjectSource value);
}  // namespace TipSubjectSourceMapper
}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
