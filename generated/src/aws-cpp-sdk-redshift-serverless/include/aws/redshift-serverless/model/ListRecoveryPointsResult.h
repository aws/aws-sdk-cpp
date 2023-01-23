/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/RecoveryPoint.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListRecoveryPointsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListRecoveryPointsResult();
    AWS_REDSHIFTSERVERLESS_API ListRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListRecoveryPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListRecoveryPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListRecoveryPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The returned recovery point objects.</p>
     */
    inline const Aws::Vector<RecoveryPoint>& GetRecoveryPoints() const{ return m_recoveryPoints; }

    /**
     * <p>The returned recovery point objects.</p>
     */
    inline void SetRecoveryPoints(const Aws::Vector<RecoveryPoint>& value) { m_recoveryPoints = value; }

    /**
     * <p>The returned recovery point objects.</p>
     */
    inline void SetRecoveryPoints(Aws::Vector<RecoveryPoint>&& value) { m_recoveryPoints = std::move(value); }

    /**
     * <p>The returned recovery point objects.</p>
     */
    inline ListRecoveryPointsResult& WithRecoveryPoints(const Aws::Vector<RecoveryPoint>& value) { SetRecoveryPoints(value); return *this;}

    /**
     * <p>The returned recovery point objects.</p>
     */
    inline ListRecoveryPointsResult& WithRecoveryPoints(Aws::Vector<RecoveryPoint>&& value) { SetRecoveryPoints(std::move(value)); return *this;}

    /**
     * <p>The returned recovery point objects.</p>
     */
    inline ListRecoveryPointsResult& AddRecoveryPoints(const RecoveryPoint& value) { m_recoveryPoints.push_back(value); return *this; }

    /**
     * <p>The returned recovery point objects.</p>
     */
    inline ListRecoveryPointsResult& AddRecoveryPoints(RecoveryPoint&& value) { m_recoveryPoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecoveryPoint> m_recoveryPoints;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
