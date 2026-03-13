/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/NetworkMigrationMapperSegmentConstruct.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {
class GetNetworkMigrationMapperSegmentConstructResult {
 public:
  AWS_MGN_API GetNetworkMigrationMapperSegmentConstructResult() = default;
  AWS_MGN_API GetNetworkMigrationMapperSegmentConstructResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MGN_API GetNetworkMigrationMapperSegmentConstructResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The construct metadata including type, name, and configuration.</p>
   */
  inline const NetworkMigrationMapperSegmentConstruct& GetConstruct() const { return m_construct; }
  template <typename ConstructT = NetworkMigrationMapperSegmentConstruct>
  void SetConstruct(ConstructT&& value) {
    m_constructHasBeenSet = true;
    m_construct = std::forward<ConstructT>(value);
  }
  template <typename ConstructT = NetworkMigrationMapperSegmentConstruct>
  GetNetworkMigrationMapperSegmentConstructResult& WithConstruct(ConstructT&& value) {
    SetConstruct(std::forward<ConstructT>(value));
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
  GetNetworkMigrationMapperSegmentConstructResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  NetworkMigrationMapperSegmentConstruct m_construct;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_constructHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
