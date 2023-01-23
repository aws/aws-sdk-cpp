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
  enum class XavcHdIntraCbgProfileClass
  {
    NOT_SET,
    CLASS_50,
    CLASS_100,
    CLASS_200
  };

namespace XavcHdIntraCbgProfileClassMapper
{
AWS_MEDIACONVERT_API XavcHdIntraCbgProfileClass GetXavcHdIntraCbgProfileClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcHdIntraCbgProfileClass(XavcHdIntraCbgProfileClass value);
} // namespace XavcHdIntraCbgProfileClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
