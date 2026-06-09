/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents a location in source code associated with a security
 * finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CodeLocation">AWS
 * API Reference</a></p>
 */
class CodeLocation {
 public:
  AWS_SECURITYAGENT_API CodeLocation() = default;
  AWS_SECURITYAGENT_API CodeLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CodeLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The absolute path to the file containing the code location.</p>
   */
  inline const Aws::String& GetFilePath() const { return m_filePath; }
  inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
  template <typename FilePathT = Aws::String>
  void SetFilePath(FilePathT&& value) {
    m_filePathHasBeenSet = true;
    m_filePath = std::forward<FilePathT>(value);
  }
  template <typename FilePathT = Aws::String>
  CodeLocation& WithFilePath(FilePathT&& value) {
    SetFilePath(std::forward<FilePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The starting line number of the code location.</p>
   */
  inline int GetLineStart() const { return m_lineStart; }
  inline bool LineStartHasBeenSet() const { return m_lineStartHasBeenSet; }
  inline void SetLineStart(int value) {
    m_lineStartHasBeenSet = true;
    m_lineStart = value;
  }
  inline CodeLocation& WithLineStart(int value) {
    SetLineStart(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ending line number of the code location.</p>
   */
  inline int GetLineEnd() const { return m_lineEnd; }
  inline bool LineEndHasBeenSet() const { return m_lineEndHasBeenSet; }
  inline void SetLineEnd(int value) {
    m_lineEndHasBeenSet = true;
    m_lineEnd = value;
  }
  inline CodeLocation& WithLineEnd(int value) {
    SetLineEnd(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of this location in the vulnerability, such as source or sink.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  CodeLocation& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_filePath;

  int m_lineStart{0};

  int m_lineEnd{0};

  Aws::String m_label;
  bool m_filePathHasBeenSet = false;
  bool m_lineStartHasBeenSet = false;
  bool m_lineEndHasBeenSet = false;
  bool m_labelHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
