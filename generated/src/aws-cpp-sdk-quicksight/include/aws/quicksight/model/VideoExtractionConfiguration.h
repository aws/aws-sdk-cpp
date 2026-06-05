/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/VideoExtractionStatus.h>
#include <aws/quicksight/model/VideoExtractionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The configuration for video extraction from knowledge base
 * documents.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VideoExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class VideoExtractionConfiguration {
 public:
  AWS_QUICKSIGHT_API VideoExtractionConfiguration() = default;
  AWS_QUICKSIGHT_API VideoExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API VideoExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of video extraction. Valid values are ENABLED and DISABLED.</p>
   */
  inline VideoExtractionStatus GetVideoExtractionStatus() const { return m_videoExtractionStatus; }
  inline bool VideoExtractionStatusHasBeenSet() const { return m_videoExtractionStatusHasBeenSet; }
  inline void SetVideoExtractionStatus(VideoExtractionStatus value) {
    m_videoExtractionStatusHasBeenSet = true;
    m_videoExtractionStatus = value;
  }
  inline VideoExtractionConfiguration& WithVideoExtractionStatus(VideoExtractionStatus value) {
    SetVideoExtractionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of video extraction to perform.</p>
   */
  inline VideoExtractionType GetVideoExtractionType() const { return m_videoExtractionType; }
  inline bool VideoExtractionTypeHasBeenSet() const { return m_videoExtractionTypeHasBeenSet; }
  inline void SetVideoExtractionType(VideoExtractionType value) {
    m_videoExtractionTypeHasBeenSet = true;
    m_videoExtractionType = value;
  }
  inline VideoExtractionConfiguration& WithVideoExtractionType(VideoExtractionType value) {
    SetVideoExtractionType(value);
    return *this;
  }
  ///@}
 private:
  VideoExtractionStatus m_videoExtractionStatus{VideoExtractionStatus::NOT_SET};

  VideoExtractionType m_videoExtractionType{VideoExtractionType::NOT_SET};
  bool m_videoExtractionStatusHasBeenSet = false;
  bool m_videoExtractionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
