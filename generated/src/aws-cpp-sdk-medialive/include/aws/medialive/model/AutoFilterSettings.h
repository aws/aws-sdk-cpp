/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * System-managed filter selection. Resolves to the perceptual filter at strength 1
 * where the codec
is eligible (AV1 and H.265 unconditionally; H.264 only at
 * enhanced_quality), and to no filter
otherwise. An empty / undefined
 * filter_settings_choice is treated as "auto".

Carries no body (extends
 * EmptySettings, which sets additionalProperties: false), mirroring
 * the
ColorSpacePassthroughSettings empty-settings pattern.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AutoFilterSettings">AWS
 * API Reference</a></p>
 */
class AutoFilterSettings {
 public:
  AWS_MEDIALIVE_API AutoFilterSettings() = default;
  AWS_MEDIALIVE_API AutoFilterSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AutoFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
