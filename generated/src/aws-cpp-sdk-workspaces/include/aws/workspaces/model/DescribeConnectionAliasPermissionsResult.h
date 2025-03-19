/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ConnectionAliasPermission.h>
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
  class DescribeConnectionAliasPermissionsResult
  {
  public:
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult() = default;
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline const Aws::String& GetAliasId() const { return m_aliasId; }
    template<typename AliasIdT = Aws::String>
    void SetAliasId(AliasIdT&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::forward<AliasIdT>(value); }
    template<typename AliasIdT = Aws::String>
    DescribeConnectionAliasPermissionsResult& WithAliasId(AliasIdT&& value) { SetAliasId(std::forward<AliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline const Aws::Vector<ConnectionAliasPermission>& GetConnectionAliasPermissions() const { return m_connectionAliasPermissions; }
    template<typename ConnectionAliasPermissionsT = Aws::Vector<ConnectionAliasPermission>>
    void SetConnectionAliasPermissions(ConnectionAliasPermissionsT&& value) { m_connectionAliasPermissionsHasBeenSet = true; m_connectionAliasPermissions = std::forward<ConnectionAliasPermissionsT>(value); }
    template<typename ConnectionAliasPermissionsT = Aws::Vector<ConnectionAliasPermission>>
    DescribeConnectionAliasPermissionsResult& WithConnectionAliasPermissions(ConnectionAliasPermissionsT&& value) { SetConnectionAliasPermissions(std::forward<ConnectionAliasPermissionsT>(value)); return *this;}
    template<typename ConnectionAliasPermissionsT = ConnectionAliasPermission>
    DescribeConnectionAliasPermissionsResult& AddConnectionAliasPermissions(ConnectionAliasPermissionsT&& value) { m_connectionAliasPermissionsHasBeenSet = true; m_connectionAliasPermissions.emplace_back(std::forward<ConnectionAliasPermissionsT>(value)); return *this; }
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
    DescribeConnectionAliasPermissionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectionAliasPermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    Aws::Vector<ConnectionAliasPermission> m_connectionAliasPermissions;
    bool m_connectionAliasPermissionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
