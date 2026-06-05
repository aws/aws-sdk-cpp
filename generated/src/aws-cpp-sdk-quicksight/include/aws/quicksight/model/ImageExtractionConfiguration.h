/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ImageExtractionStatus.h>

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
 * <p>The configuration for image extraction from knowledge base
 * documents.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class ImageExtractionConfiguration {
 public:
  AWS_QUICKSIGHT_API ImageExtractionConfiguration() = default;
  AWS_QUICKSIGHT_API ImageExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ImageExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of image extraction. Valid values are ENABLED and DISABLED.</p>
   */
  inline ImageExtractionStatus GetImageExtractionStatus() const { return m_imageExtractionStatus; }
  inline bool ImageExtractionStatusHasBeenSet() const { return m_imageExtractionStatusHasBeenSet; }
  inline void SetImageExtractionStatus(ImageExtractionStatus value) {
    m_imageExtractionStatusHasBeenSet = true;
    m_imageExtractionStatus = value;
  }
  inline ImageExtractionConfiguration& WithImageExtractionStatus(ImageExtractionStatus value) {
    SetImageExtractionStatus(value);
    return *this;
  }
  ///@}
 private:
  ImageExtractionStatus m_imageExtractionStatus{ImageExtractionStatus::NOT_SET};
  bool m_imageExtractionStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
