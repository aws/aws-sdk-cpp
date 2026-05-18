/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/UploadedDocumentMetadata.h>

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
 * <p>An inline custom instruction with text content and optional file upload
 * metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InlineCustomInstruction">AWS
 * API Reference</a></p>
 */
class InlineCustomInstruction {
 public:
  AWS_QUICKSIGHT_API InlineCustomInstruction() = default;
  AWS_QUICKSIGHT_API InlineCustomInstruction(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API InlineCustomInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instruction text content.</p>
   */
  inline const Aws::String& GetInstructionText() const { return m_instructionText; }
  inline bool InstructionTextHasBeenSet() const { return m_instructionTextHasBeenSet; }
  template <typename InstructionTextT = Aws::String>
  void SetInstructionText(InstructionTextT&& value) {
    m_instructionTextHasBeenSet = true;
    m_instructionText = std::forward<InstructionTextT>(value);
  }
  template <typename InstructionTextT = Aws::String>
  InlineCustomInstruction& WithInstructionText(InstructionTextT&& value) {
    SetInstructionText(std::forward<InstructionTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata about an uploaded document associated with this instruction.</p>
   */
  inline const UploadedDocumentMetadata& GetUploadedDocumentMetadata() const { return m_uploadedDocumentMetadata; }
  inline bool UploadedDocumentMetadataHasBeenSet() const { return m_uploadedDocumentMetadataHasBeenSet; }
  template <typename UploadedDocumentMetadataT = UploadedDocumentMetadata>
  void SetUploadedDocumentMetadata(UploadedDocumentMetadataT&& value) {
    m_uploadedDocumentMetadataHasBeenSet = true;
    m_uploadedDocumentMetadata = std::forward<UploadedDocumentMetadataT>(value);
  }
  template <typename UploadedDocumentMetadataT = UploadedDocumentMetadata>
  InlineCustomInstruction& WithUploadedDocumentMetadata(UploadedDocumentMetadataT&& value) {
    SetUploadedDocumentMetadata(std::forward<UploadedDocumentMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instructionText;

  UploadedDocumentMetadata m_uploadedDocumentMetadata;
  bool m_instructionTextHasBeenSet = false;
  bool m_uploadedDocumentMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
