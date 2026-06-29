/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordEntry.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordError.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMakerFeatureStoreRuntime {
namespace Model {
class BatchWriteRecordResult {
 public:
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordResult() = default;
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of errors that occurred when writing records in the batch.</p>
   */
  inline const Aws::Vector<BatchWriteRecordError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchWriteRecordError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchWriteRecordError>>
  BatchWriteRecordResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchWriteRecordError>
  BatchWriteRecordResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of entries that were not processed. These entries can be retried.</p>
   */
  inline const Aws::Vector<BatchWriteRecordEntry>& GetUnprocessedEntries() const { return m_unprocessedEntries; }
  template <typename UnprocessedEntriesT = Aws::Vector<BatchWriteRecordEntry>>
  void SetUnprocessedEntries(UnprocessedEntriesT&& value) {
    m_unprocessedEntriesHasBeenSet = true;
    m_unprocessedEntries = std::forward<UnprocessedEntriesT>(value);
  }
  template <typename UnprocessedEntriesT = Aws::Vector<BatchWriteRecordEntry>>
  BatchWriteRecordResult& WithUnprocessedEntries(UnprocessedEntriesT&& value) {
    SetUnprocessedEntries(std::forward<UnprocessedEntriesT>(value));
    return *this;
  }
  template <typename UnprocessedEntriesT = BatchWriteRecordEntry>
  BatchWriteRecordResult& AddUnprocessedEntries(UnprocessedEntriesT&& value) {
    m_unprocessedEntriesHasBeenSet = true;
    m_unprocessedEntries.emplace_back(std::forward<UnprocessedEntriesT>(value));
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
  BatchWriteRecordResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchWriteRecordError> m_errors;

  Aws::Vector<BatchWriteRecordEntry> m_unprocessedEntries;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_errorsHasBeenSet = false;
  bool m_unprocessedEntriesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
