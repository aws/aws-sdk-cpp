/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class DeletableCertificateBasedAuthProperty
  {
    NOT_SET,
    CERTIFICATE_BASED_AUTH_PROPERTIES_CERTIFICATE_AUTHORITY_ARN
  };

namespace DeletableCertificateBasedAuthPropertyMapper
{
AWS_WORKSPACES_API DeletableCertificateBasedAuthProperty GetDeletableCertificateBasedAuthPropertyForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDeletableCertificateBasedAuthProperty(DeletableCertificateBasedAuthProperty value);
} // namespace DeletableCertificateBasedAuthPropertyMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
