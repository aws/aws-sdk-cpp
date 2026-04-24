/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class ShareInvitationAction { NOT_SET, ACCEPT, REJECT };

namespace ShareInvitationActionMapper {
AWS_WELLARCHITECTED_API ShareInvitationAction GetShareInvitationActionForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForShareInvitationAction(ShareInvitationAction value);
}  // namespace ShareInvitationActionMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
