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
  enum class CacheBehavior
  {
    NOT_SET,
    CACHE_ON_FAILURE,
    CACHE_ALWAYS
  };

namespace CacheBehaviorMapper
{
AWS_OMICS_API CacheBehavior GetCacheBehaviorForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForCacheBehavior(CacheBehavior value);
} // namespace CacheBehaviorMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
