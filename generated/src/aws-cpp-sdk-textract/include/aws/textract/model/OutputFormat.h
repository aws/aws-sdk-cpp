/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/OutputAdditionalFileFormat.h>
#include <aws/textract/model/OutputTextFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>Controls the format of the extraction output, including the text format and
 * any additional file formats.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/OutputFormat">AWS
 * API Reference</a></p>
 */
class OutputFormat {
 public:
  AWS_TEXTRACT_API OutputFormat() = default;
  AWS_TEXTRACT_API OutputFormat(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API OutputFormat& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Controls whether an additional file format is produced alongside the primary
   * output.</p>
   */
  inline const OutputAdditionalFileFormat& GetAdditionalFileFormat() const { return m_additionalFileFormat; }
  inline bool AdditionalFileFormatHasBeenSet() const { return m_additionalFileFormatHasBeenSet; }
  template <typename AdditionalFileFormatT = OutputAdditionalFileFormat>
  void SetAdditionalFileFormat(AdditionalFileFormatT&& value) {
    m_additionalFileFormatHasBeenSet = true;
    m_additionalFileFormat = std::forward<AdditionalFileFormatT>(value);
  }
  template <typename AdditionalFileFormatT = OutputAdditionalFileFormat>
  OutputFormat& WithAdditionalFileFormat(AdditionalFileFormatT&& value) {
    SetAdditionalFileFormat(std::forward<AdditionalFileFormatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the text formats produced in the extraction output.</p>
   */
  inline const OutputTextFormat& GetTextFormat() const { return m_textFormat; }
  inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }
  template <typename TextFormatT = OutputTextFormat>
  void SetTextFormat(TextFormatT&& value) {
    m_textFormatHasBeenSet = true;
    m_textFormat = std::forward<TextFormatT>(value);
  }
  template <typename TextFormatT = OutputTextFormat>
  OutputFormat& WithTextFormat(TextFormatT&& value) {
    SetTextFormat(std::forward<TextFormatT>(value));
    return *this;
  }
  ///@}
 private:
  OutputAdditionalFileFormat m_additionalFileFormat;

  OutputTextFormat m_textFormat;
  bool m_additionalFileFormatHasBeenSet = false;
  bool m_textFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
