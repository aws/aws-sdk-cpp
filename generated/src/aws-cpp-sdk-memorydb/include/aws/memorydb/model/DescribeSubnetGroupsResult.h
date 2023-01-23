/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/SubnetGroup.h>
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
  class DescribeSubnetGroupsResult
  {
  public:
    AWS_MEMORYDB_API DescribeSubnetGroupsResult();
    AWS_MEMORYDB_API DescribeSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeSubnetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeSubnetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeSubnetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of subnet groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline const Aws::Vector<SubnetGroup>& GetSubnetGroups() const{ return m_subnetGroups; }

    /**
     * <p>A list of subnet groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline void SetSubnetGroups(const Aws::Vector<SubnetGroup>& value) { m_subnetGroups = value; }

    /**
     * <p>A list of subnet groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline void SetSubnetGroups(Aws::Vector<SubnetGroup>&& value) { m_subnetGroups = std::move(value); }

    /**
     * <p>A list of subnet groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeSubnetGroupsResult& WithSubnetGroups(const Aws::Vector<SubnetGroup>& value) { SetSubnetGroups(value); return *this;}

    /**
     * <p>A list of subnet groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeSubnetGroupsResult& WithSubnetGroups(Aws::Vector<SubnetGroup>&& value) { SetSubnetGroups(std::move(value)); return *this;}

    /**
     * <p>A list of subnet groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeSubnetGroupsResult& AddSubnetGroups(const SubnetGroup& value) { m_subnetGroups.push_back(value); return *this; }

    /**
     * <p>A list of subnet groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeSubnetGroupsResult& AddSubnetGroups(SubnetGroup&& value) { m_subnetGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SubnetGroup> m_subnetGroups;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
