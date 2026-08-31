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
 * <p>The range of part indexes for which to return presigned upload URLs from
 * <a>GetAttachmentUploadLinks</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/UploadRange">AWS
 * API Reference</a></p>
 */
class UploadRange {
 public:
  AWS_SUPPORT_API UploadRange() = default;
  AWS_SUPPORT_API UploadRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API UploadRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The starting part index of the range, inclusive. Part indexes start at 1.</p>
   */
  inline int GetStartIndex() const { return m_startIndex; }
  inline bool StartIndexHasBeenSet() const { return m_startIndexHasBeenSet; }
  inline void SetStartIndex(int value) {
    m_startIndexHasBeenSet = true;
    m_startIndex = value;
  }
  inline UploadRange& WithStartIndex(int value) {
    SetStartIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ending part index of the range, exclusive. The range is half-open:
   * <code>startIndex</code> is inclusive and <code>endIndex</code> is exclusive. For
   * example, a range with <code>startIndex</code> of 1 and <code>endIndex</code> of
   * 4 requests URLs for parts 1, 2, and 3. The range size (<code>endIndex</code> -
   * <code>startIndex</code>) must not exceed 10. If you omit <code>endIndex</code>,
   * the service defaults to <code>startIndex</code> + 10, capped by the total number
   * of parts.</p>
   */
  inline int GetEndIndex() const { return m_endIndex; }
  inline bool EndIndexHasBeenSet() const { return m_endIndexHasBeenSet; }
  inline void SetEndIndex(int value) {
    m_endIndexHasBeenSet = true;
    m_endIndex = value;
  }
  inline UploadRange& WithEndIndex(int value) {
    SetEndIndex(value);
    return *this;
  }
  ///@}
 private:
  int m_startIndex{0};

  int m_endIndex{0};
  bool m_startIndexHasBeenSet = false;
  bool m_endIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
