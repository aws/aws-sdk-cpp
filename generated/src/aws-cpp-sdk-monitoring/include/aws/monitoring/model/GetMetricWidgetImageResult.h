/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ResponseMetadata.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {
class GetMetricWidgetImageResult {
 public:
  AWS_CLOUDWATCH_API GetMetricWidgetImageResult() = default;
  AWS_CLOUDWATCH_API GetMetricWidgetImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCH_API GetMetricWidgetImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The image of the graph, in the output format specified. The output is
   * base64-encoded.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetMetricWidgetImage() const { return m_metricWidgetImage; }
  template <typename MetricWidgetImageT = Aws::Utils::ByteBuffer>
  void SetMetricWidgetImage(MetricWidgetImageT&& value) {
    m_metricWidgetImageHasBeenSet = true;
    m_metricWidgetImage = std::forward<MetricWidgetImageT>(value);
  }
  template <typename MetricWidgetImageT = Aws::Utils::ByteBuffer>
  GetMetricWidgetImageResult& WithMetricWidgetImage(MetricWidgetImageT&& value) {
    SetMetricWidgetImage(std::forward<MetricWidgetImageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetMetricWidgetImageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetMetricWidgetImageResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_metricWidgetImage{};

  Aws::String m_requestId;

  ResponseMetadata m_responseMetadata;
  bool m_metricWidgetImageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
