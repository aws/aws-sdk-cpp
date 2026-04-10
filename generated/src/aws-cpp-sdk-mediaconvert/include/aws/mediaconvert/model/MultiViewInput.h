/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
 * Input settings for MultiView Settings. You can include exactly one input as
 * enhancement layer.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MultiViewInput">AWS
 * API Reference</a></p>
 */
class MultiViewInput {
 public:
  AWS_MEDIACONVERT_API MultiViewInput() = default;
  AWS_MEDIACONVERT_API MultiViewInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API MultiViewInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specify the input file S3, HTTP, or HTTPS URL for your right eye view video.
   */
  inline const Aws::String& GetFileInput() const { return m_fileInput; }
  inline bool FileInputHasBeenSet() const { return m_fileInputHasBeenSet; }
  template <typename FileInputT = Aws::String>
  void SetFileInput(FileInputT&& value) {
    m_fileInputHasBeenSet = true;
    m_fileInput = std::forward<FileInputT>(value);
  }
  template <typename FileInputT = Aws::String>
  MultiViewInput& WithFileInput(FileInputT&& value) {
    SetFileInput(std::forward<FileInputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileInput;
  bool m_fileInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
