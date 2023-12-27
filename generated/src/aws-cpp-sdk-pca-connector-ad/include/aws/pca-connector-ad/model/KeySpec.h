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
  enum class KeySpec
  {
    NOT_SET,
    KEY_EXCHANGE,
    SIGNATURE
  };

namespace KeySpecMapper
{
AWS_PCACONNECTORAD_API KeySpec GetKeySpecForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForKeySpec(KeySpec value);
} // namespace KeySpecMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
