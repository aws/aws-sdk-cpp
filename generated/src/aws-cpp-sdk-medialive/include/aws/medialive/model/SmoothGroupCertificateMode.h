/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class SmoothGroupCertificateMode
  {
    NOT_SET,
    SELF_SIGNED,
    VERIFY_AUTHENTICITY
  };

namespace SmoothGroupCertificateModeMapper
{
AWS_MEDIALIVE_API SmoothGroupCertificateMode GetSmoothGroupCertificateModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupCertificateMode(SmoothGroupCertificateMode value);
} // namespace SmoothGroupCertificateModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
