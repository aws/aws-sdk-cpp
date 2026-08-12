/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ExadbVmCluster.h>

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
class GetExadbVmClusterResult {
 public:
  AWS_ODB_API GetExadbVmClusterResult() = default;
  AWS_ODB_API GetExadbVmClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API GetExadbVmClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Exascale VM cluster.</p>
   */
  inline const ExadbVmCluster& GetExadbVmCluster() const { return m_exadbVmCluster; }
  template <typename ExadbVmClusterT = ExadbVmCluster>
  void SetExadbVmCluster(ExadbVmClusterT&& value) {
    m_exadbVmClusterHasBeenSet = true;
    m_exadbVmCluster = std::forward<ExadbVmClusterT>(value);
  }
  template <typename ExadbVmClusterT = ExadbVmCluster>
  GetExadbVmClusterResult& WithExadbVmCluster(ExadbVmClusterT&& value) {
    SetExadbVmCluster(std::forward<ExadbVmClusterT>(value));
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
  GetExadbVmClusterResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ExadbVmCluster m_exadbVmCluster;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_exadbVmClusterHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
