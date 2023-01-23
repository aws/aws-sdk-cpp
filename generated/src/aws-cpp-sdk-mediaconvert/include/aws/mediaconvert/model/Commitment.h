/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class Commitment
  {
    NOT_SET,
    ONE_YEAR
  };

namespace CommitmentMapper
{
AWS_MEDIACONVERT_API Commitment GetCommitmentForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCommitment(Commitment value);
} // namespace CommitmentMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
