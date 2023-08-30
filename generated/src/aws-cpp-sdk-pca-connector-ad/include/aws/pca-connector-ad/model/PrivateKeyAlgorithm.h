/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{
  enum class PrivateKeyAlgorithm
  {
    NOT_SET,
    RSA,
    ECDH_P256,
    ECDH_P384,
    ECDH_P521
  };

namespace PrivateKeyAlgorithmMapper
{
AWS_PCACONNECTORAD_API PrivateKeyAlgorithm GetPrivateKeyAlgorithmForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForPrivateKeyAlgorithm(PrivateKeyAlgorithm value);
} // namespace PrivateKeyAlgorithmMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
