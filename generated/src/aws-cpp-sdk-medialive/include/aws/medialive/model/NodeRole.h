/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class NodeRole { NOT_SET, BACKUP, ACTIVE };

namespace NodeRoleMapper {
AWS_MEDIALIVE_API NodeRole GetNodeRoleForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNodeRole(NodeRole value);
}  // namespace NodeRoleMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
