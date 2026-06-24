/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseVersionSummary.h>

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
class ListAutonomousDatabaseVersionsResult {
 public:
  AWS_ODB_API ListAutonomousDatabaseVersionsResult() = default;
  AWS_ODB_API ListAutonomousDatabaseVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListAutonomousDatabaseVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListAutonomousDatabaseVersionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of available Autonomous Database software versions.</p>
   */
  inline const Aws::Vector<AutonomousDatabaseVersionSummary>& GetAutonomousDatabaseVersions() const { return m_autonomousDatabaseVersions; }
  template <typename AutonomousDatabaseVersionsT = Aws::Vector<AutonomousDatabaseVersionSummary>>
  void SetAutonomousDatabaseVersions(AutonomousDatabaseVersionsT&& value) {
    m_autonomousDatabaseVersionsHasBeenSet = true;
    m_autonomousDatabaseVersions = std::forward<AutonomousDatabaseVersionsT>(value);
  }
  template <typename AutonomousDatabaseVersionsT = Aws::Vector<AutonomousDatabaseVersionSummary>>
  ListAutonomousDatabaseVersionsResult& WithAutonomousDatabaseVersions(AutonomousDatabaseVersionsT&& value) {
    SetAutonomousDatabaseVersions(std::forward<AutonomousDatabaseVersionsT>(value));
    return *this;
  }
  template <typename AutonomousDatabaseVersionsT = AutonomousDatabaseVersionSummary>
  ListAutonomousDatabaseVersionsResult& AddAutonomousDatabaseVersions(AutonomousDatabaseVersionsT&& value) {
    m_autonomousDatabaseVersionsHasBeenSet = true;
    m_autonomousDatabaseVersions.emplace_back(std::forward<AutonomousDatabaseVersionsT>(value));
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
  ListAutonomousDatabaseVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AutonomousDatabaseVersionSummary> m_autonomousDatabaseVersions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_autonomousDatabaseVersionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
