/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class AudioFormat { NOT_SET, wav, flac, ogg_vorbis, mp3 };

namespace AudioFormatMapper {
AWS_POLLY_API AudioFormat GetAudioFormatForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForAudioFormat(AudioFormat value);
}  // namespace AudioFormatMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
