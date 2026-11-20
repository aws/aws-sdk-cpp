/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/BoundingBoxConfiguration.h>
#include <aws/textract/model/ExtractionGranularity.h>
#include <aws/textract/model/OutputFormat.h>

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
 * <p>Controls how Amazon Textract extracts content from a document, including
 * whether bounding boxes are returned, the granularity of extraction, and the
 * output format.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class ExtractionConfiguration {
 public:
  AWS_TEXTRACT_API ExtractionConfiguration() = default;
  AWS_TEXTRACT_API ExtractionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API ExtractionConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Controls whether bounding box geometry is included in the extraction
   * output.</p>
   */
  inline const BoundingBoxConfiguration& GetBoundingBox() const { return m_boundingBox; }
  inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
  template <typename BoundingBoxT = BoundingBoxConfiguration>
  void SetBoundingBox(BoundingBoxT&& value) {
    m_boundingBoxHasBeenSet = true;
    m_boundingBox = std::forward<BoundingBoxT>(value);
  }
  template <typename BoundingBoxT = BoundingBoxConfiguration>
  ExtractionConfiguration& WithBoundingBox(BoundingBoxT&& value) {
    SetBoundingBox(std::forward<BoundingBoxT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the granularity levels at which content is extracted.</p>
   */
  inline const ExtractionGranularity& GetGranularity() const { return m_granularity; }
  inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
  template <typename GranularityT = ExtractionGranularity>
  void SetGranularity(GranularityT&& value) {
    m_granularityHasBeenSet = true;
    m_granularity = std::forward<GranularityT>(value);
  }
  template <typename GranularityT = ExtractionGranularity>
  ExtractionConfiguration& WithGranularity(GranularityT&& value) {
    SetGranularity(std::forward<GranularityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the format of the extraction output.</p>
   */
  inline const OutputFormat& GetOutputFormat() const { return m_outputFormat; }
  inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
  template <typename OutputFormatT = OutputFormat>
  void SetOutputFormat(OutputFormatT&& value) {
    m_outputFormatHasBeenSet = true;
    m_outputFormat = std::forward<OutputFormatT>(value);
  }
  template <typename OutputFormatT = OutputFormat>
  ExtractionConfiguration& WithOutputFormat(OutputFormatT&& value) {
    SetOutputFormat(std::forward<OutputFormatT>(value));
    return *this;
  }
  ///@}
 private:
  BoundingBoxConfiguration m_boundingBox;

  ExtractionGranularity m_granularity;

  OutputFormat m_outputFormat;
  bool m_boundingBoxHasBeenSet = false;
  bool m_granularityHasBeenSet = false;
  bool m_outputFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
