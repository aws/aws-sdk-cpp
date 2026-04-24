/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ListAccessPointsDescription.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {
class ListAccessPointsResult {
 public:
  AWS_S3FILES_API ListAccessPointsResult() = default;
  AWS_S3FILES_API ListAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3FILES_API ListAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token to use in a subsequent request if more results are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAccessPointsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of access point descriptions.</p>
   */
  inline const Aws::Vector<ListAccessPointsDescription>& GetAccessPoints() const { return m_accessPoints; }
  template <typename AccessPointsT = Aws::Vector<ListAccessPointsDescription>>
  void SetAccessPoints(AccessPointsT&& value) {
    m_accessPointsHasBeenSet = true;
    m_accessPoints = std::forward<AccessPointsT>(value);
  }
  template <typename AccessPointsT = Aws::Vector<ListAccessPointsDescription>>
  ListAccessPointsResult& WithAccessPoints(AccessPointsT&& value) {
    SetAccessPoints(std::forward<AccessPointsT>(value));
    return *this;
  }
  template <typename AccessPointsT = ListAccessPointsDescription>
  ListAccessPointsResult& AddAccessPoints(AccessPointsT&& value) {
    m_accessPointsHasBeenSet = true;
    m_accessPoints.emplace_back(std::forward<AccessPointsT>(value));
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
  ListAccessPointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ListAccessPointsDescription> m_accessPoints;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_accessPointsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
