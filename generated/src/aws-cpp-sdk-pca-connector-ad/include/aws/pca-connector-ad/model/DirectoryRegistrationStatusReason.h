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
  enum class DirectoryRegistrationStatusReason
  {
    NOT_SET,
    DIRECTORY_ACCESS_DENIED,
    DIRECTORY_RESOURCE_NOT_FOUND,
    DIRECTORY_NOT_ACTIVE,
    DIRECTORY_NOT_REACHABLE,
    DIRECTORY_TYPE_NOT_SUPPORTED,
    INTERNAL_FAILURE
  };

namespace DirectoryRegistrationStatusReasonMapper
{
AWS_PCACONNECTORAD_API DirectoryRegistrationStatusReason GetDirectoryRegistrationStatusReasonForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForDirectoryRegistrationStatusReason(DirectoryRegistrationStatusReason value);
} // namespace DirectoryRegistrationStatusReasonMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
