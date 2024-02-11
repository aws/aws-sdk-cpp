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
  enum class ServicePrincipalNameStatusReason
  {
    NOT_SET,
    DIRECTORY_ACCESS_DENIED,
    DIRECTORY_NOT_REACHABLE,
    DIRECTORY_RESOURCE_NOT_FOUND,
    SPN_EXISTS_ON_DIFFERENT_AD_OBJECT,
    INTERNAL_FAILURE
  };

namespace ServicePrincipalNameStatusReasonMapper
{
AWS_PCACONNECTORAD_API ServicePrincipalNameStatusReason GetServicePrincipalNameStatusReasonForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForServicePrincipalNameStatusReason(ServicePrincipalNameStatusReason value);
} // namespace ServicePrincipalNameStatusReasonMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
