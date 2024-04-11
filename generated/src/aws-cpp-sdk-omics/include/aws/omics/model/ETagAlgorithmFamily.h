/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class ETagAlgorithmFamily
  {
    NOT_SET,
    MD5up,
    SHA256up,
    SHA512up
  };

namespace ETagAlgorithmFamilyMapper
{
AWS_OMICS_API ETagAlgorithmFamily GetETagAlgorithmFamilyForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForETagAlgorithmFamily(ETagAlgorithmFamily value);
} // namespace ETagAlgorithmFamilyMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
