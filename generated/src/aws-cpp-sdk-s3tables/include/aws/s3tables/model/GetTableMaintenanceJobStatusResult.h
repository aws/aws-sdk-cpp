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
    AWS_S3TABLES_API GetTableMaintenanceJobStatusResult() = default;
    AWS_S3TABLES_API GetTableMaintenanceJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableMaintenanceJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const { return m_tableARN; }
    template<typename TableARNT = Aws::String>
    void SetTableARN(TableARNT&& value) { m_tableARNHasBeenSet = true; m_tableARN = std::forward<TableARNT>(value); }
    template<typename TableARNT = Aws::String>
    GetTableMaintenanceJobStatusResult& WithTableARN(TableARNT&& value) { SetTableARN(std::forward<TableARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the maintenance job.</p>
     */
    inline const Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue>>
    GetTableMaintenanceJobStatusResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    inline GetTableMaintenanceJobStatusResult& AddStatus(TableMaintenanceJobType key, TableMaintenanceJobStatusValue value) {
      m_statusHasBeenSet = true; m_status.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableMaintenanceJobStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableARN;
    bool m_tableARNHasBeenSet = false;

    Aws::Map<TableMaintenanceJobType, TableMaintenanceJobStatusValue> m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
