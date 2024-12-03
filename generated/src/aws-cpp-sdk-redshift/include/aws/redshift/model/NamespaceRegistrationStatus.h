/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class NamespaceRegistrationStatus
  {
    NOT_SET,
    Registering,
    Deregistering
  };

namespace NamespaceRegistrationStatusMapper
{
AWS_REDSHIFT_API NamespaceRegistrationStatus GetNamespaceRegistrationStatusForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForNamespaceRegistrationStatus(NamespaceRegistrationStatus value);
} // namespace NamespaceRegistrationStatusMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
