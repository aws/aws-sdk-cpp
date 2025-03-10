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
  enum class IpAddressType
  {
    NOT_SET,
    IPV4,
    DUALSTACK
  };

namespace IpAddressTypeMapper
{
AWS_PCACONNECTORAD_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
