/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/SnapshotCopyConfiguration.h>
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
  class ListSnapshotCopyConfigurationsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListSnapshotCopyConfigurationsResult();
    AWS_REDSHIFTSERVERLESS_API ListSnapshotCopyConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListSnapshotCopyConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListSnapshotCopyConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSnapshotCopyConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSnapshotCopyConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline const Aws::Vector<SnapshotCopyConfiguration>& GetSnapshotCopyConfigurations() const{ return m_snapshotCopyConfigurations; }

    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline void SetSnapshotCopyConfigurations(const Aws::Vector<SnapshotCopyConfiguration>& value) { m_snapshotCopyConfigurations = value; }

    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline void SetSnapshotCopyConfigurations(Aws::Vector<SnapshotCopyConfiguration>&& value) { m_snapshotCopyConfigurations = std::move(value); }

    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline ListSnapshotCopyConfigurationsResult& WithSnapshotCopyConfigurations(const Aws::Vector<SnapshotCopyConfiguration>& value) { SetSnapshotCopyConfigurations(value); return *this;}

    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline ListSnapshotCopyConfigurationsResult& WithSnapshotCopyConfigurations(Aws::Vector<SnapshotCopyConfiguration>&& value) { SetSnapshotCopyConfigurations(std::move(value)); return *this;}

    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline ListSnapshotCopyConfigurationsResult& AddSnapshotCopyConfigurations(const SnapshotCopyConfiguration& value) { m_snapshotCopyConfigurations.push_back(value); return *this; }

    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline ListSnapshotCopyConfigurationsResult& AddSnapshotCopyConfigurations(SnapshotCopyConfiguration&& value) { m_snapshotCopyConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSnapshotCopyConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSnapshotCopyConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSnapshotCopyConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SnapshotCopyConfiguration> m_snapshotCopyConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
