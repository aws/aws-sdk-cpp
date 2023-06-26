/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/TableRestoreStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class RestoreTableFromSnapshotResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromSnapshotResult();
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The TableRestoreStatus object that contains the status of the restore
     * operation.</p>
     */
    inline const TableRestoreStatus& GetTableRestoreStatus() const{ return m_tableRestoreStatus; }

    /**
     * <p>The TableRestoreStatus object that contains the status of the restore
     * operation.</p>
     */
    inline void SetTableRestoreStatus(const TableRestoreStatus& value) { m_tableRestoreStatus = value; }

    /**
     * <p>The TableRestoreStatus object that contains the status of the restore
     * operation.</p>
     */
    inline void SetTableRestoreStatus(TableRestoreStatus&& value) { m_tableRestoreStatus = std::move(value); }

    /**
     * <p>The TableRestoreStatus object that contains the status of the restore
     * operation.</p>
     */
    inline RestoreTableFromSnapshotResult& WithTableRestoreStatus(const TableRestoreStatus& value) { SetTableRestoreStatus(value); return *this;}

    /**
     * <p>The TableRestoreStatus object that contains the status of the restore
     * operation.</p>
     */
    inline RestoreTableFromSnapshotResult& WithTableRestoreStatus(TableRestoreStatus&& value) { SetTableRestoreStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RestoreTableFromSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RestoreTableFromSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RestoreTableFromSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TableRestoreStatus m_tableRestoreStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
