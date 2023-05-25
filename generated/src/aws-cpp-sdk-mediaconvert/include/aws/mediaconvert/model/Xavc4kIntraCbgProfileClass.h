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
  enum class Xavc4kIntraCbgProfileClass
  {
    NOT_SET,
    CLASS_100,
    CLASS_300,
    CLASS_480
  };

namespace Xavc4kIntraCbgProfileClassMapper
{
AWS_MEDIACONVERT_API Xavc4kIntraCbgProfileClass GetXavc4kIntraCbgProfileClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavc4kIntraCbgProfileClass(Xavc4kIntraCbgProfileClass value);
} // namespace Xavc4kIntraCbgProfileClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
