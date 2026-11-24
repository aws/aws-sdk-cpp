/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/FigureCaptionConfiguration.h>
#include <aws/textract/model/SummarizationConfiguration.h>

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
 * <p>Controls the generative capabilities applied during a document insights job,
 * such as summarization and figure captioning.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GenerativeConfiguration">AWS
 * API Reference</a></p>
 */
class GenerativeConfiguration {
 public:
  AWS_TEXTRACT_API GenerativeConfiguration() = default;
  AWS_TEXTRACT_API GenerativeConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API GenerativeConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Controls whether a generative summary of the document is produced. If you
   * omit it, no summary is produced.</p>
   */
  inline const SummarizationConfiguration& GetSummarization() const { return m_summarization; }
  inline bool SummarizationHasBeenSet() const { return m_summarizationHasBeenSet; }
  template <typename SummarizationT = SummarizationConfiguration>
  void SetSummarization(SummarizationT&& value) {
    m_summarizationHasBeenSet = true;
    m_summarization = std::forward<SummarizationT>(value);
  }
  template <typename SummarizationT = SummarizationConfiguration>
  GenerativeConfiguration& WithSummarization(SummarizationT&& value) {
    SetSummarization(std::forward<SummarizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls whether generative captions are produced for figures detected in the
   * document. If you omit it, no figure captions are produced.</p>
   */
  inline const FigureCaptionConfiguration& GetFigureCaption() const { return m_figureCaption; }
  inline bool FigureCaptionHasBeenSet() const { return m_figureCaptionHasBeenSet; }
  template <typename FigureCaptionT = FigureCaptionConfiguration>
  void SetFigureCaption(FigureCaptionT&& value) {
    m_figureCaptionHasBeenSet = true;
    m_figureCaption = std::forward<FigureCaptionT>(value);
  }
  template <typename FigureCaptionT = FigureCaptionConfiguration>
  GenerativeConfiguration& WithFigureCaption(FigureCaptionT&& value) {
    SetFigureCaption(std::forward<FigureCaptionT>(value));
    return *this;
  }
  ///@}
 private:
  SummarizationConfiguration m_summarization;

  FigureCaptionConfiguration m_figureCaption;
  bool m_summarizationHasBeenSet = false;
  bool m_figureCaptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
