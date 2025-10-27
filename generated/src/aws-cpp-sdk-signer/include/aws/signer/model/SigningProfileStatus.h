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
enum class SigningProfileStatus { NOT_SET, Active, Canceled, Revoked };

namespace SigningProfileStatusMapper {
AWS_SIGNER_API SigningProfileStatus GetSigningProfileStatusForName(const Aws::String& name);

AWS_SIGNER_API Aws::String GetNameForSigningProfileStatus(SigningProfileStatus value);
}  // namespace SigningProfileStatusMapper
}  // namespace Model
}  // namespace signer
}  // namespace Aws
