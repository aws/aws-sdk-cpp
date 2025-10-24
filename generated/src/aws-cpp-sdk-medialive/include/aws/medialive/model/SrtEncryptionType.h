﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class SrtEncryptionType { NOT_SET, AES128, AES192, AES256 };

namespace SrtEncryptionTypeMapper {
AWS_MEDIALIVE_API SrtEncryptionType GetSrtEncryptionTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSrtEncryptionType(SrtEncryptionType value);
}  // namespace SrtEncryptionTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
