/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/Signer_EXPORTS.h>

namespace Aws {
namespace signer {
namespace Model {
enum class SigningStatus { NOT_SET, InProgress, Failed, Succeeded };

namespace SigningStatusMapper {
AWS_SIGNER_API SigningStatus GetSigningStatusForName(const Aws::String& name);

AWS_SIGNER_API Aws::String GetNameForSigningStatus(SigningStatus value);
}  // namespace SigningStatusMapper
}  // namespace Model
}  // namespace signer
}  // namespace Aws
