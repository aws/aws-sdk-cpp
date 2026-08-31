/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Support {
namespace Model {

/**
 * <p>The progress of a multipart attachment upload, returned by
 * <a>DescribeAttachmentUploadStatus</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/UploadProgress">AWS
 * API Reference</a></p>
 */
class UploadProgress {
 public:
  AWS_SUPPORT_API UploadProgress() = default;
  AWS_SUPPORT_API UploadProgress(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API UploadProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of parts that the file is split into.</p>
   */
  inline int GetTotalParts() const { return m_totalParts; }
  inline bool TotalPartsHasBeenSet() const { return m_totalPartsHasBeenSet; }
  inline void SetTotalParts(int value) {
    m_totalPartsHasBeenSet = true;
    m_totalParts = value;
  }
  inline UploadProgress& WithTotalParts(int value) {
    SetTotalParts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of parts that have been successfully uploaded.</p>
   */
  inline int GetCompletedPartsCount() const { return m_completedPartsCount; }
  inline bool CompletedPartsCountHasBeenSet() const { return m_completedPartsCountHasBeenSet; }
  inline void SetCompletedPartsCount(int value) {
    m_completedPartsCountHasBeenSet = true;
    m_completedPartsCount = value;
  }
  inline UploadProgress& WithCompletedPartsCount(int value) {
    SetCompletedPartsCount(value);
    return *this;
  }
  ///@}
 private:
  int m_totalParts{0};

  int m_completedPartsCount{0};
  bool m_totalPartsHasBeenSet = false;
  bool m_completedPartsCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
