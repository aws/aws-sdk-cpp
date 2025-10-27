/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/MWAA_EXPORTS.h>

namespace Aws {
namespace MWAA {
namespace Model {
enum class WebserverAccessMode { NOT_SET, PRIVATE_ONLY, PUBLIC_ONLY };

namespace WebserverAccessModeMapper {
AWS_MWAA_API WebserverAccessMode GetWebserverAccessModeForName(const Aws::String& name);

AWS_MWAA_API Aws::String GetNameForWebserverAccessMode(WebserverAccessMode value);
}  // namespace WebserverAccessModeMapper
}  // namespace Model
}  // namespace MWAA
}  // namespace Aws
