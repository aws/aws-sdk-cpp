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
enum class HashAlgorithm { NOT_SET, SHA256, SHA384, SHA512 };

namespace HashAlgorithmMapper {
AWS_PCACONNECTORAD_API HashAlgorithm GetHashAlgorithmForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForHashAlgorithm(HashAlgorithm value);
}  // namespace HashAlgorithmMapper
}  // namespace Model
}  // namespace PcaConnectorAd
}  // namespace Aws
