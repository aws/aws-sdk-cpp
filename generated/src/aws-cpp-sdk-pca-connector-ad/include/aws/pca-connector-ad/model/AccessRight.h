/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>

namespace Aws {
namespace PcaConnectorAd {
namespace Model {
enum class AccessRight { NOT_SET, ALLOW, DENY };

namespace AccessRightMapper {
AWS_PCACONNECTORAD_API AccessRight GetAccessRightForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForAccessRight(AccessRight value);
}  // namespace AccessRightMapper
}  // namespace Model
}  // namespace PcaConnectorAd
}  // namespace Aws
