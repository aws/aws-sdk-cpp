/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/ReservedInstance.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for results from <code>DescribeReservedInstances</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstancesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesResult();
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeReservedInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeReservedInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeReservedInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline const Aws::Vector<ReservedInstance>& GetReservedInstances() const{ return m_reservedInstances; }

    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline void SetReservedInstances(const Aws::Vector<ReservedInstance>& value) { m_reservedInstances = value; }

    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline void SetReservedInstances(Aws::Vector<ReservedInstance>&& value) { m_reservedInstances = std::move(value); }

    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline DescribeReservedInstancesResult& WithReservedInstances(const Aws::Vector<ReservedInstance>& value) { SetReservedInstances(value); return *this;}

    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline DescribeReservedInstancesResult& WithReservedInstances(Aws::Vector<ReservedInstance>&& value) { SetReservedInstances(std::move(value)); return *this;}

    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline DescribeReservedInstancesResult& AddReservedInstances(const ReservedInstance& value) { m_reservedInstances.push_back(value); return *this; }

    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline DescribeReservedInstancesResult& AddReservedInstances(ReservedInstance&& value) { m_reservedInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedInstance> m_reservedInstances;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
