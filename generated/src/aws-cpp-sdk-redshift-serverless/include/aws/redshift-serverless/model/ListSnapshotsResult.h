/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/Snapshot.h>
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
  class ListSnapshotsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListSnapshotsResult();
    AWS_REDSHIFTSERVERLESS_API ListSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>All of the returned snapshot objects.</p>
     */
    inline const Aws::Vector<Snapshot>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>All of the returned snapshot objects.</p>
     */
    inline void SetSnapshots(const Aws::Vector<Snapshot>& value) { m_snapshots = value; }

    /**
     * <p>All of the returned snapshot objects.</p>
     */
    inline void SetSnapshots(Aws::Vector<Snapshot>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>All of the returned snapshot objects.</p>
     */
    inline ListSnapshotsResult& WithSnapshots(const Aws::Vector<Snapshot>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>All of the returned snapshot objects.</p>
     */
    inline ListSnapshotsResult& WithSnapshots(Aws::Vector<Snapshot>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>All of the returned snapshot objects.</p>
     */
    inline ListSnapshotsResult& AddSnapshots(const Snapshot& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>All of the returned snapshot objects.</p>
     */
    inline ListSnapshotsResult& AddSnapshots(Snapshot&& value) { m_snapshots.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Snapshot> m_snapshots;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
