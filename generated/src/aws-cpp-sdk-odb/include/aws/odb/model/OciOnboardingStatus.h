/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace odb
{
namespace Model
{
  enum class OciOnboardingStatus
  {
    NOT_SET,
    NOT_STARTED,
    PENDING_LINK_GENERATION,
    PENDING_CUSTOMER_ACTION,
    PENDING_INITIALIZATION,
    ACTIVATING,
    ACTIVE_IN_HOME_REGION,
    ACTIVE,
    ACTIVE_LIMITED,
    FAILED,
    PUBLIC_OFFER_UNSUPPORTED,
    SUSPENDED,
    CANCELED
  };

namespace OciOnboardingStatusMapper
{
AWS_ODB_API OciOnboardingStatus GetOciOnboardingStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForOciOnboardingStatus(OciOnboardingStatus value);
} // namespace OciOnboardingStatusMapper
} // namespace Model
} // namespace odb
} // namespace Aws
