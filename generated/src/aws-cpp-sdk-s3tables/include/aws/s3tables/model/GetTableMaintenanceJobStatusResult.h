/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3tables/model/TableMaintenanceJobType.h>
#include <aws/s3tables/model/TableMaintenanceJobStatusValue.h>
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
namespace S3Tables
{
namespace Model
{
  class GetTableMaintenanceJobStatusResult
  {
  public:
    AWS_S3TABLES_API GetTableMaintenanceJobStatusResult();
    AWS_S3TABLES_API GetTableMaintenanceJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableMaintenanceJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const{ return m_tableARN; }
    inline void SetTableARN(const Aws::String& value) { m_tableARN = value; }
    inline void SetTableARN(Aws::String&& value) { m_tableARN = std::move(value); }
    inline void SetTableARN(const char* value) { m_tableARN.assign(value); }
    inline GetTableMaintenanceJobStatusResult& WithTableARN(const Aws::String& value) { SetTableARN(value); return *this;}
    inline GetTableMaintenanceJobStatusResult& WithTableARN(Aws::String&& value) { SetTableARN(std::move(value)); return *this;}
    inline GetTableMaintenanceJobStatusResult& WithTableARN(const char* value) { SetTableARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the maintenance job.</p>
     */
    inline const Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>& value) { m_status = value; }
    inline void SetStatus(Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>&& value) { m_status = std::move(value); }
    inline GetTableMaintenanceJobStatusResult& WithStatus(const Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>& value) { SetStatus(value); return *this;}
    inline GetTableMaintenanceJobStatusResult& WithStatus(Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>&& value) { SetStatus(std::move(value)); return *this;}
    inline GetTableMaintenanceJobStatusResult& AddStatus(const TableMaintenanceJobType& key, const TableMaintenanceJobStatusValue& value) { m_status.emplace(key, value); return *this; }
    inline GetTableMaintenanceJobStatusResult& AddStatus(TableMaintenanceJobType&& key, const TableMaintenanceJobStatusValue& value) { m_status.emplace(std::move(key), value); return *this; }
    inline GetTableMaintenanceJobStatusResult& AddStatus(const TableMaintenanceJobType& key, TableMaintenanceJobStatusValue&& value) { m_status.emplace(key, std::move(value)); return *this; }
    inline GetTableMaintenanceJobStatusResult& AddStatus(TableMaintenanceJobType&& key, TableMaintenanceJobStatusValue&& value) { m_status.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableMaintenanceJobStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableMaintenanceJobStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableMaintenanceJobStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tableARN;

    Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue> m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
