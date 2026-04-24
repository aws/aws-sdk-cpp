/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Wickr {
namespace Model {
enum class DataRetentionActionType { NOT_SET, ENABLE, DISABLE, PUBKEY_MSG_ACK };

namespace DataRetentionActionTypeMapper {
AWS_WICKR_API DataRetentionActionType GetDataRetentionActionTypeForName(const Aws::String& name);

AWS_WICKR_API Aws::String GetNameForDataRetentionActionType(DataRetentionActionType value);
}  // namespace DataRetentionActionTypeMapper
}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
