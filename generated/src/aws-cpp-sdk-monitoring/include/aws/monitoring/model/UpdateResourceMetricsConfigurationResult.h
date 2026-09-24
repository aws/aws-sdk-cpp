/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ResourceMetricsConfiguration.h>
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
/**
 * <p>Returns the updated resource metrics configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/UpdateResourceMetricsConfigurationOutput">AWS
 * API Reference</a></p>
 */
class UpdateResourceMetricsConfigurationResult {
 public:
  AWS_CLOUDWATCH_API UpdateResourceMetricsConfigurationResult() = default;
  AWS_CLOUDWATCH_API UpdateResourceMetricsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCH_API UpdateResourceMetricsConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The resource metrics configuration after the update was applied.</p>
   */
  inline const ResourceMetricsConfiguration& GetResourceMetricsConfiguration() const { return m_resourceMetricsConfiguration; }
  template <typename ResourceMetricsConfigurationT = ResourceMetricsConfiguration>
  void SetResourceMetricsConfiguration(ResourceMetricsConfigurationT&& value) {
    m_resourceMetricsConfigurationHasBeenSet = true;
    m_resourceMetricsConfiguration = std::forward<ResourceMetricsConfigurationT>(value);
  }
  template <typename ResourceMetricsConfigurationT = ResourceMetricsConfiguration>
  UpdateResourceMetricsConfigurationResult& WithResourceMetricsConfiguration(ResourceMetricsConfigurationT&& value) {
    SetResourceMetricsConfiguration(std::forward<ResourceMetricsConfigurationT>(value));
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
  UpdateResourceMetricsConfigurationResult& WithRequestId(RequestIdT&& value) {
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
  UpdateResourceMetricsConfigurationResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ResourceMetricsConfiguration m_resourceMetricsConfiguration;

  Aws::String m_requestId;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resourceMetricsConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
