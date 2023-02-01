/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
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
  class GetSnapshotResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetSnapshotResult();
    AWS_REDSHIFTSERVERLESS_API GetSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned snapshot object.</p>
     */
    inline const Snapshot& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>The returned snapshot object.</p>
     */
    inline void SetSnapshot(const Snapshot& value) { m_snapshot = value; }

    /**
     * <p>The returned snapshot object.</p>
     */
    inline void SetSnapshot(Snapshot&& value) { m_snapshot = std::move(value); }

    /**
     * <p>The returned snapshot object.</p>
     */
    inline GetSnapshotResult& WithSnapshot(const Snapshot& value) { SetSnapshot(value); return *this;}

    /**
     * <p>The returned snapshot object.</p>
     */
    inline GetSnapshotResult& WithSnapshot(Snapshot&& value) { SetSnapshot(std::move(value)); return *this;}

  private:

    Snapshot m_snapshot;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
