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
  class RestoreTableFromRecoveryPointResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromRecoveryPointResult();
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TableRestoreStatus& GetTableRestoreStatus() const{ return m_tableRestoreStatus; }

    
    inline void SetTableRestoreStatus(const TableRestoreStatus& value) { m_tableRestoreStatus = value; }

    
    inline void SetTableRestoreStatus(TableRestoreStatus&& value) { m_tableRestoreStatus = std::move(value); }

    
    inline RestoreTableFromRecoveryPointResult& WithTableRestoreStatus(const TableRestoreStatus& value) { SetTableRestoreStatus(value); return *this;}

    
    inline RestoreTableFromRecoveryPointResult& WithTableRestoreStatus(TableRestoreStatus&& value) { SetTableRestoreStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RestoreTableFromRecoveryPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RestoreTableFromRecoveryPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RestoreTableFromRecoveryPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TableRestoreStatus m_tableRestoreStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
