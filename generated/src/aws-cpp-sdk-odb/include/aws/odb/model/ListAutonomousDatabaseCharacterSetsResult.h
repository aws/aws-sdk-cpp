/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseCharacterSetSummary.h>

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
class ListAutonomousDatabaseCharacterSetsResult {
 public:
  AWS_ODB_API ListAutonomousDatabaseCharacterSetsResult() = default;
  AWS_ODB_API ListAutonomousDatabaseCharacterSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListAutonomousDatabaseCharacterSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListAutonomousDatabaseCharacterSetsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of available Autonomous Database character sets.</p>
   */
  inline const Aws::Vector<AutonomousDatabaseCharacterSetSummary>& GetAutonomousDatabaseCharacterSets() const {
    return m_autonomousDatabaseCharacterSets;
  }
  template <typename AutonomousDatabaseCharacterSetsT = Aws::Vector<AutonomousDatabaseCharacterSetSummary>>
  void SetAutonomousDatabaseCharacterSets(AutonomousDatabaseCharacterSetsT&& value) {
    m_autonomousDatabaseCharacterSetsHasBeenSet = true;
    m_autonomousDatabaseCharacterSets = std::forward<AutonomousDatabaseCharacterSetsT>(value);
  }
  template <typename AutonomousDatabaseCharacterSetsT = Aws::Vector<AutonomousDatabaseCharacterSetSummary>>
  ListAutonomousDatabaseCharacterSetsResult& WithAutonomousDatabaseCharacterSets(AutonomousDatabaseCharacterSetsT&& value) {
    SetAutonomousDatabaseCharacterSets(std::forward<AutonomousDatabaseCharacterSetsT>(value));
    return *this;
  }
  template <typename AutonomousDatabaseCharacterSetsT = AutonomousDatabaseCharacterSetSummary>
  ListAutonomousDatabaseCharacterSetsResult& AddAutonomousDatabaseCharacterSets(AutonomousDatabaseCharacterSetsT&& value) {
    m_autonomousDatabaseCharacterSetsHasBeenSet = true;
    m_autonomousDatabaseCharacterSets.emplace_back(std::forward<AutonomousDatabaseCharacterSetsT>(value));
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
  ListAutonomousDatabaseCharacterSetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AutonomousDatabaseCharacterSetSummary> m_autonomousDatabaseCharacterSets;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_autonomousDatabaseCharacterSetsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
