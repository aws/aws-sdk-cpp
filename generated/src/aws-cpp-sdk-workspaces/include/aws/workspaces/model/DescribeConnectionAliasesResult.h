﻿/**
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
    AWS_WORKSPACES_API DescribeConnectionAliasesResult();
    AWS_WORKSPACES_API DescribeConnectionAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeConnectionAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline const Aws::Vector<ConnectionAlias>& GetConnectionAliases() const{ return m_connectionAliases; }
    inline void SetConnectionAliases(const Aws::Vector<ConnectionAlias>& value) { m_connectionAliases = value; }
    inline void SetConnectionAliases(Aws::Vector<ConnectionAlias>&& value) { m_connectionAliases = std::move(value); }
    inline DescribeConnectionAliasesResult& WithConnectionAliases(const Aws::Vector<ConnectionAlias>& value) { SetConnectionAliases(value); return *this;}
    inline DescribeConnectionAliasesResult& WithConnectionAliases(Aws::Vector<ConnectionAlias>&& value) { SetConnectionAliases(std::move(value)); return *this;}
    inline DescribeConnectionAliasesResult& AddConnectionAliases(const ConnectionAlias& value) { m_connectionAliases.push_back(value); return *this; }
    inline DescribeConnectionAliasesResult& AddConnectionAliases(ConnectionAlias&& value) { m_connectionAliases.push_back(std::move(value)); return *this; }
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
    inline DescribeConnectionAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConnectionAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConnectionAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConnectionAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConnectionAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConnectionAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionAlias> m_connectionAliases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
