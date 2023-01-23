/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class DkimSigningKeyLength
  {
    NOT_SET,
    RSA_1024_BIT,
    RSA_2048_BIT
  };

namespace DkimSigningKeyLengthMapper
{
AWS_SESV2_API DkimSigningKeyLength GetDkimSigningKeyLengthForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForDkimSigningKeyLength(DkimSigningKeyLength value);
} // namespace DkimSigningKeyLengthMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
