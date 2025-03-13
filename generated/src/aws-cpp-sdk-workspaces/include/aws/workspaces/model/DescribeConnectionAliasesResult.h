/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectionAlias.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class DescribeConnectionAliasesResult
  {
  public:
    AWS_WORKSPACES_API DescribeConnectionAliasesResult() = default;
    AWS_WORKSPACES_API DescribeConnectionAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeConnectionAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline const Aws::Vector<ConnectionAlias>& GetConnectionAliases() const { return m_connectionAliases; }
    template<typename ConnectionAliasesT = Aws::Vector<ConnectionAlias>>
    void SetConnectionAliases(ConnectionAliasesT&& value) { m_connectionAliasesHasBeenSet = true; m_connectionAliases = std::forward<ConnectionAliasesT>(value); }
    template<typename ConnectionAliasesT = Aws::Vector<ConnectionAlias>>
    DescribeConnectionAliasesResult& WithConnectionAliases(ConnectionAliasesT&& value) { SetConnectionAliases(std::forward<ConnectionAliasesT>(value)); return *this;}
    template<typename ConnectionAliasesT = ConnectionAlias>
    DescribeConnectionAliasesResult& AddConnectionAliases(ConnectionAliasesT&& value) { m_connectionAliasesHasBeenSet = true; m_connectionAliases.emplace_back(std::forward<ConnectionAliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConnectionAliasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectionAliasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionAlias> m_connectionAliases;
    bool m_connectionAliasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
