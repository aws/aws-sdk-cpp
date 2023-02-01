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
  class ConvertRecoveryPointToSnapshotResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ConvertRecoveryPointToSnapshotResult();
    AWS_REDSHIFTSERVERLESS_API ConvertRecoveryPointToSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ConvertRecoveryPointToSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The snapshot converted from the recovery point.</p>
     */
    inline const Snapshot& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>The snapshot converted from the recovery point.</p>
     */
    inline void SetSnapshot(const Snapshot& value) { m_snapshot = value; }

    /**
     * <p>The snapshot converted from the recovery point.</p>
     */
    inline void SetSnapshot(Snapshot&& value) { m_snapshot = std::move(value); }

    /**
     * <p>The snapshot converted from the recovery point.</p>
     */
    inline ConvertRecoveryPointToSnapshotResult& WithSnapshot(const Snapshot& value) { SetSnapshot(value); return *this;}

    /**
     * <p>The snapshot converted from the recovery point.</p>
     */
    inline ConvertRecoveryPointToSnapshotResult& WithSnapshot(Snapshot&& value) { SetSnapshot(std::move(value)); return *this;}

  private:

    Snapshot m_snapshot;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
