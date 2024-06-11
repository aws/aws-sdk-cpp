﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ParameterGroup.h>
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
namespace MemoryDB
{
namespace Model
{
  class DescribeParameterGroupsResult
  {
  public:
    AWS_MEMORYDB_API DescribeParameterGroupsResult();
    AWS_MEMORYDB_API DescribeParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeParameterGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeParameterGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeParameterGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameter groups. Each element in the list contains detailed
     * information about one parameter group.</p>
     */
    inline const Aws::Vector<ParameterGroup>& GetParameterGroups() const{ return m_parameterGroups; }
    inline void SetParameterGroups(const Aws::Vector<ParameterGroup>& value) { m_parameterGroups = value; }
    inline void SetParameterGroups(Aws::Vector<ParameterGroup>&& value) { m_parameterGroups = std::move(value); }
    inline DescribeParameterGroupsResult& WithParameterGroups(const Aws::Vector<ParameterGroup>& value) { SetParameterGroups(value); return *this;}
    inline DescribeParameterGroupsResult& WithParameterGroups(Aws::Vector<ParameterGroup>&& value) { SetParameterGroups(std::move(value)); return *this;}
    inline DescribeParameterGroupsResult& AddParameterGroups(const ParameterGroup& value) { m_parameterGroups.push_back(value); return *this; }
    inline DescribeParameterGroupsResult& AddParameterGroups(ParameterGroup&& value) { m_parameterGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeParameterGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeParameterGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeParameterGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ParameterGroup> m_parameterGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
