/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/OTelEnrichmentMetricSelector.h>
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
class UpdateOTelEnrichmentResult {
 public:
  AWS_CLOUDWATCH_API UpdateOTelEnrichmentResult() = default;
  AWS_CLOUDWATCH_API UpdateOTelEnrichmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCH_API UpdateOTelEnrichmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The include filters that are stored for the account after the replacement.
   * This parameter is omitted when the request cleared the include filters, which
   * means that every supported namespace is in scope.</p>
   */
  inline const Aws::Vector<OTelEnrichmentMetricSelector>& GetIncludeFilters() const { return m_includeFilters; }
  template <typename IncludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  void SetIncludeFilters(IncludeFiltersT&& value) {
    m_includeFiltersHasBeenSet = true;
    m_includeFilters = std::forward<IncludeFiltersT>(value);
  }
  template <typename IncludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  UpdateOTelEnrichmentResult& WithIncludeFilters(IncludeFiltersT&& value) {
    SetIncludeFilters(std::forward<IncludeFiltersT>(value));
    return *this;
  }
  template <typename IncludeFiltersT = OTelEnrichmentMetricSelector>
  UpdateOTelEnrichmentResult& AddIncludeFilters(IncludeFiltersT&& value) {
    m_includeFiltersHasBeenSet = true;
    m_includeFilters.emplace_back(std::forward<IncludeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclude filters that are stored for the account after the replacement.
   * This parameter is omitted when the request cleared the exclude filters, which
   * means that nothing is excluded.</p>
   */
  inline const Aws::Vector<OTelEnrichmentMetricSelector>& GetExcludeFilters() const { return m_excludeFilters; }
  template <typename ExcludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  void SetExcludeFilters(ExcludeFiltersT&& value) {
    m_excludeFiltersHasBeenSet = true;
    m_excludeFilters = std::forward<ExcludeFiltersT>(value);
  }
  template <typename ExcludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  UpdateOTelEnrichmentResult& WithExcludeFilters(ExcludeFiltersT&& value) {
    SetExcludeFilters(std::forward<ExcludeFiltersT>(value));
    return *this;
  }
  template <typename ExcludeFiltersT = OTelEnrichmentMetricSelector>
  UpdateOTelEnrichmentResult& AddExcludeFilters(ExcludeFiltersT&& value) {
    m_excludeFiltersHasBeenSet = true;
    m_excludeFilters.emplace_back(std::forward<ExcludeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that enrichment started for the account.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateOTelEnrichmentResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the enrichment configuration for the account was last
   * stored.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateOTelEnrichmentResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateOTelEnrichmentResult& WithRequestId(RequestIdT&& value) {
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
  UpdateOTelEnrichmentResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<OTelEnrichmentMetricSelector> m_includeFilters;

  Aws::Vector<OTelEnrichmentMetricSelector> m_excludeFilters;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_includeFiltersHasBeenSet = false;
  bool m_excludeFiltersHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
