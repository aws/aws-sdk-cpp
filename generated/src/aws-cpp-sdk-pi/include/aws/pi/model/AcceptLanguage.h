/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class AcceptLanguage
  {
    NOT_SET,
    EN_US
  };

namespace AcceptLanguageMapper
{
AWS_PI_API AcceptLanguage GetAcceptLanguageForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForAcceptLanguage(AcceptLanguage value);
} // namespace AcceptLanguageMapper
} // namespace Model
} // namespace PI
} // namespace Aws
