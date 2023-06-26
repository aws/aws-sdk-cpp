/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Polly
{
namespace Model
{
  enum class Gender
  {
    NOT_SET,
    Female,
    Male
  };

namespace GenderMapper
{
AWS_POLLY_API Gender GetGenderForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForGender(Gender value);
} // namespace GenderMapper
} // namespace Model
} // namespace Polly
} // namespace Aws
