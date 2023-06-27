/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class CommitmentLength
  {
    NOT_SET,
    SIXTY_DAYS,
    ONE_YEAR,
    THREE_YEARS
  };

namespace CommitmentLengthMapper
{
AWS_PRIVATENETWORKS_API CommitmentLength GetCommitmentLengthForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForCommitmentLength(CommitmentLength value);
} // namespace CommitmentLengthMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
