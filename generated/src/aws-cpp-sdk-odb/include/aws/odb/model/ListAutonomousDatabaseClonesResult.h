/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseSummary.h>

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
class ListAutonomousDatabaseClonesResult {
 public:
  AWS_ODB_API ListAutonomousDatabaseClonesResult() = default;
  AWS_ODB_API ListAutonomousDatabaseClonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListAutonomousDatabaseClonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListAutonomousDatabaseClonesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Autonomous Database clones along with their properties.</p>
   */
  inline const Aws::Vector<AutonomousDatabaseSummary>& GetAutonomousDatabaseClones() const { return m_autonomousDatabaseClones; }
  template <typename AutonomousDatabaseClonesT = Aws::Vector<AutonomousDatabaseSummary>>
  void SetAutonomousDatabaseClones(AutonomousDatabaseClonesT&& value) {
    m_autonomousDatabaseClonesHasBeenSet = true;
    m_autonomousDatabaseClones = std::forward<AutonomousDatabaseClonesT>(value);
  }
  template <typename AutonomousDatabaseClonesT = Aws::Vector<AutonomousDatabaseSummary>>
  ListAutonomousDatabaseClonesResult& WithAutonomousDatabaseClones(AutonomousDatabaseClonesT&& value) {
    SetAutonomousDatabaseClones(std::forward<AutonomousDatabaseClonesT>(value));
    return *this;
  }
  template <typename AutonomousDatabaseClonesT = AutonomousDatabaseSummary>
  ListAutonomousDatabaseClonesResult& AddAutonomousDatabaseClones(AutonomousDatabaseClonesT&& value) {
    m_autonomousDatabaseClonesHasBeenSet = true;
    m_autonomousDatabaseClones.emplace_back(std::forward<AutonomousDatabaseClonesT>(value));
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
  ListAutonomousDatabaseClonesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AutonomousDatabaseSummary> m_autonomousDatabaseClones;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_autonomousDatabaseClonesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
