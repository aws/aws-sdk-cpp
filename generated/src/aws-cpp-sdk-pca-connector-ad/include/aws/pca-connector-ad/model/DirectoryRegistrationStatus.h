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
  enum class DirectoryRegistrationStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace DirectoryRegistrationStatusMapper
{
AWS_PCACONNECTORAD_API DirectoryRegistrationStatus GetDirectoryRegistrationStatusForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForDirectoryRegistrationStatus(DirectoryRegistrationStatus value);
} // namespace DirectoryRegistrationStatusMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
