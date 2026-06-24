/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/PermissionStatementSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {
/**
 * <p>Output for ListResourcePermissionStatements operation</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/ListResourcePermissionStatementsOutput">AWS
 * API Reference</a></p>
 */
class ListResourcePermissionStatementsResult {
 public:
  AWS_SIGNIN_API ListResourcePermissionStatementsResult() = default;
  AWS_SIGNIN_API ListResourcePermissionStatementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API ListResourcePermissionStatementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of permission statement summaries</p>
   */
  inline const Aws::Vector<PermissionStatementSummary>& GetPermissionStatements() const { return m_permissionStatements; }
  template <typename PermissionStatementsT = Aws::Vector<PermissionStatementSummary>>
  void SetPermissionStatements(PermissionStatementsT&& value) {
    m_permissionStatementsHasBeenSet = true;
    m_permissionStatements = std::forward<PermissionStatementsT>(value);
  }
  template <typename PermissionStatementsT = Aws::Vector<PermissionStatementSummary>>
  ListResourcePermissionStatementsResult& WithPermissionStatements(PermissionStatementsT&& value) {
    SetPermissionStatements(std::forward<PermissionStatementsT>(value));
    return *this;
  }
  template <typename PermissionStatementsT = PermissionStatementSummary>
  ListResourcePermissionStatementsResult& AddPermissionStatements(PermissionStatementsT&& value) {
    m_permissionStatementsHasBeenSet = true;
    m_permissionStatements.emplace_back(std::forward<PermissionStatementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for next page of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourcePermissionStatementsResult& WithNextToken(NextTokenT&& value) {
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
  ListResourcePermissionStatementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PermissionStatementSummary> m_permissionStatements;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_permissionStatementsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
