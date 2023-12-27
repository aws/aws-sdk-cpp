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
  enum class ClientCompatibilityV3
  {
    NOT_SET,
    WINDOWS_SERVER_2008,
    WINDOWS_SERVER_2008_R2,
    WINDOWS_SERVER_2012,
    WINDOWS_SERVER_2012_R2,
    WINDOWS_SERVER_2016
  };

namespace ClientCompatibilityV3Mapper
{
AWS_PCACONNECTORAD_API ClientCompatibilityV3 GetClientCompatibilityV3ForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForClientCompatibilityV3(ClientCompatibilityV3 value);
} // namespace ClientCompatibilityV3Mapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
