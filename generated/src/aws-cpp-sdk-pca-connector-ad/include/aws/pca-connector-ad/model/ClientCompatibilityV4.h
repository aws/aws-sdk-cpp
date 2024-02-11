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
  enum class ClientCompatibilityV4
  {
    NOT_SET,
    WINDOWS_SERVER_2012,
    WINDOWS_SERVER_2012_R2,
    WINDOWS_SERVER_2016
  };

namespace ClientCompatibilityV4Mapper
{
AWS_PCACONNECTORAD_API ClientCompatibilityV4 GetClientCompatibilityV4ForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForClientCompatibilityV4(ClientCompatibilityV4 value);
} // namespace ClientCompatibilityV4Mapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
