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
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult();
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeConnectionAliasPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }
    inline void SetAliasId(const Aws::String& value) { m_aliasId = value; }
    inline void SetAliasId(Aws::String&& value) { m_aliasId = std::move(value); }
    inline void SetAliasId(const char* value) { m_aliasId.assign(value); }
    inline DescribeConnectionAliasPermissionsResult& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}
    inline DescribeConnectionAliasPermissionsResult& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}
    inline DescribeConnectionAliasPermissionsResult& WithAliasId(const char* value) { SetAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions associated with a connection alias.</p>
     */
    inline const Aws::Vector<ConnectionAliasPermission>& GetConnectionAliasPermissions() const{ return m_connectionAliasPermissions; }
    inline void SetConnectionAliasPermissions(const Aws::Vector<ConnectionAliasPermission>& value) { m_connectionAliasPermissions = value; }
    inline void SetConnectionAliasPermissions(Aws::Vector<ConnectionAliasPermission>&& value) { m_connectionAliasPermissions = std::move(value); }
    inline DescribeConnectionAliasPermissionsResult& WithConnectionAliasPermissions(const Aws::Vector<ConnectionAliasPermission>& value) { SetConnectionAliasPermissions(value); return *this;}
    inline DescribeConnectionAliasPermissionsResult& WithConnectionAliasPermissions(Aws::Vector<ConnectionAliasPermission>&& value) { SetConnectionAliasPermissions(std::move(value)); return *this;}
    inline DescribeConnectionAliasPermissionsResult& AddConnectionAliasPermissions(const ConnectionAliasPermission& value) { m_connectionAliasPermissions.push_back(value); return *this; }
    inline DescribeConnectionAliasPermissionsResult& AddConnectionAliasPermissions(ConnectionAliasPermission&& value) { m_connectionAliasPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeConnectionAliasPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConnectionAliasPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConnectionAliasPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConnectionAliasPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConnectionAliasPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConnectionAliasPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aliasId;

    Aws::Vector<ConnectionAliasPermission> m_connectionAliasPermissions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
