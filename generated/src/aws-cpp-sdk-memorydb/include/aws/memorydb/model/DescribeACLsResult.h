/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ACL.h>
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
  class DescribeACLsResult
  {
  public:
    AWS_MEMORYDB_API DescribeACLsResult();
    AWS_MEMORYDB_API DescribeACLsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeACLsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ACLs</p>
     */
    inline const Aws::Vector<ACL>& GetACLs() const{ return m_aCLs; }

    /**
     * <p>The list of ACLs</p>
     */
    inline void SetACLs(const Aws::Vector<ACL>& value) { m_aCLs = value; }

    /**
     * <p>The list of ACLs</p>
     */
    inline void SetACLs(Aws::Vector<ACL>&& value) { m_aCLs = std::move(value); }

    /**
     * <p>The list of ACLs</p>
     */
    inline DescribeACLsResult& WithACLs(const Aws::Vector<ACL>& value) { SetACLs(value); return *this;}

    /**
     * <p>The list of ACLs</p>
     */
    inline DescribeACLsResult& WithACLs(Aws::Vector<ACL>&& value) { SetACLs(std::move(value)); return *this;}

    /**
     * <p>The list of ACLs</p>
     */
    inline DescribeACLsResult& AddACLs(const ACL& value) { m_aCLs.push_back(value); return *this; }

    /**
     * <p>The list of ACLs</p>
     */
    inline DescribeACLsResult& AddACLs(ACL&& value) { m_aCLs.push_back(std::move(value)); return *this; }


    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline DescribeACLsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline DescribeACLsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline DescribeACLsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ACL> m_aCLs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
