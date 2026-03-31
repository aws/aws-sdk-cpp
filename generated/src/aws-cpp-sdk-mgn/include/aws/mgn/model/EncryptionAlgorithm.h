/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class EncryptionAlgorithm { NOT_SET, SHA256 };

namespace EncryptionAlgorithmMapper {
AWS_MGN_API EncryptionAlgorithm GetEncryptionAlgorithmForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForEncryptionAlgorithm(EncryptionAlgorithm value);
}  // namespace EncryptionAlgorithmMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
