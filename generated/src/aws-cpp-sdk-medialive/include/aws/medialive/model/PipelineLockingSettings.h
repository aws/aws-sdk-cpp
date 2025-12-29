/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/PipelineLockingMethod.h>

#include <utility>

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
 * Pipeline Locking Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PipelineLockingSettings">AWS
 * API Reference</a></p>
 */
class PipelineLockingSettings {
 public:
  AWS_MEDIALIVE_API PipelineLockingSettings() = default;
  AWS_MEDIALIVE_API PipelineLockingSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API PipelineLockingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The method to use to lock the video frames in the pipelines. sourceTimecode
   * (default): Use the timecode in the source. videoAlignment: Lock frames that the
   * encoder identifies as having matching content. If videoAlignment is selected,
   * existing timecodes will not be used for any locking decisions.
   */
  inline PipelineLockingMethod GetPipelineLockingMethod() const { return m_pipelineLockingMethod; }
  inline bool PipelineLockingMethodHasBeenSet() const { return m_pipelineLockingMethodHasBeenSet; }
  inline void SetPipelineLockingMethod(PipelineLockingMethod value) {
    m_pipelineLockingMethodHasBeenSet = true;
    m_pipelineLockingMethod = value;
  }
  inline PipelineLockingSettings& WithPipelineLockingMethod(PipelineLockingMethod value) {
    SetPipelineLockingMethod(value);
    return *this;
  }
  ///@}
 private:
  PipelineLockingMethod m_pipelineLockingMethod{PipelineLockingMethod::NOT_SET};
  bool m_pipelineLockingMethodHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
