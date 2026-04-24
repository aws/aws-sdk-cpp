/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MultiViewInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Specify the enhancement layer input video file path for Multi View outputs. The
 * base layer input is treated as the left eye and this Multi View input is treated
 * as the right eye. Only one Multi View input is currently supported. MediaConvert
 * encodes both views into a single MV-HEVC output codec. When you add
 * MultiViewSettings to your job, you can only produce Multi View outputs. Adding
 * any other codec output to the same job is not supported.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MultiViewSettings">AWS
 * API Reference</a></p>
 */
class MultiViewSettings {
 public:
  AWS_MEDIACONVERT_API MultiViewSettings() = default;
  AWS_MEDIACONVERT_API MultiViewSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API MultiViewSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Input settings for MultiView Settings. You can include exactly one input as
   * enhancement layer.
   */
  inline const MultiViewInput& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = MultiViewInput>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = MultiViewInput>
  MultiViewSettings& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}
 private:
  MultiViewInput m_input;
  bool m_inputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
