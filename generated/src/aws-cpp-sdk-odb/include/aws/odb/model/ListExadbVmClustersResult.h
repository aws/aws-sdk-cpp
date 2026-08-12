/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ExadbVmClusterSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class ListExadbVmClustersResult {
 public:
  AWS_ODB_API ListExadbVmClustersResult() = default;
  AWS_ODB_API ListExadbVmClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListExadbVmClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExadbVmClustersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Exascale VM clusters.</p>
   */
  inline const Aws::Vector<ExadbVmClusterSummary>& GetExadbVmClusters() const { return m_exadbVmClusters; }
  template <typename ExadbVmClustersT = Aws::Vector<ExadbVmClusterSummary>>
  void SetExadbVmClusters(ExadbVmClustersT&& value) {
    m_exadbVmClustersHasBeenSet = true;
    m_exadbVmClusters = std::forward<ExadbVmClustersT>(value);
  }
  template <typename ExadbVmClustersT = Aws::Vector<ExadbVmClusterSummary>>
  ListExadbVmClustersResult& WithExadbVmClusters(ExadbVmClustersT&& value) {
    SetExadbVmClusters(std::forward<ExadbVmClustersT>(value));
    return *this;
  }
  template <typename ExadbVmClustersT = ExadbVmClusterSummary>
  ListExadbVmClustersResult& AddExadbVmClusters(ExadbVmClustersT&& value) {
    m_exadbVmClustersHasBeenSet = true;
    m_exadbVmClusters.emplace_back(std::forward<ExadbVmClustersT>(value));
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
  ListExadbVmClustersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ExadbVmClusterSummary> m_exadbVmClusters;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_exadbVmClustersHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
