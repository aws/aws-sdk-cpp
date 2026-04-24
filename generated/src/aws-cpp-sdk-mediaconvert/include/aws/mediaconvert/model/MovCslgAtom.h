/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class MovCslgAtom { NOT_SET, INCLUDE, EXCLUDE };

namespace MovCslgAtomMapper {
AWS_MEDIACONVERT_API MovCslgAtom GetMovCslgAtomForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMovCslgAtom(MovCslgAtom value);
}  // namespace MovCslgAtomMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
