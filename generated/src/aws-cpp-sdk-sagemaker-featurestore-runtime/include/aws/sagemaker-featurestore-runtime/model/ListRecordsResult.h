/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>

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
class ListRecordsResult {
 public:
  AWS_SAGEMAKERFEATURESTORERUNTIME_API ListRecordsResult() = default;
  AWS_SAGEMAKERFEATURESTORERUNTIME_API ListRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKERFEATURESTORERUNTIME_API ListRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of record identifier values for the records stored in the
   * <code>OnlineStore</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRecordIdentifiers() const { return m_recordIdentifiers; }
  template <typename RecordIdentifiersT = Aws::Vector<Aws::String>>
  void SetRecordIdentifiers(RecordIdentifiersT&& value) {
    m_recordIdentifiersHasBeenSet = true;
    m_recordIdentifiers = std::forward<RecordIdentifiersT>(value);
  }
  template <typename RecordIdentifiersT = Aws::Vector<Aws::String>>
  ListRecordsResult& WithRecordIdentifiers(RecordIdentifiersT&& value) {
    SetRecordIdentifiers(std::forward<RecordIdentifiersT>(value));
    return *this;
  }
  template <typename RecordIdentifiersT = Aws::String>
  ListRecordsResult& AddRecordIdentifiers(RecordIdentifiersT&& value) {
    m_recordIdentifiersHasBeenSet = true;
    m_recordIdentifiers.emplace_back(std::forward<RecordIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to resume pagination if the response includes more record identifiers
   * than <code>MaxResults</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecordsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_recordIdentifiers;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recordIdentifiersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
