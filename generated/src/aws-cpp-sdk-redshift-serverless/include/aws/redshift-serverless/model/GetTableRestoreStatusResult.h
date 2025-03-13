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
  class GetTableRestoreStatusResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetTableRestoreStatusResult() = default;
    AWS_REDSHIFTSERVERLESS_API GetTableRestoreStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetTableRestoreStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned <code>TableRestoreStatus</code> object that contains information
     * about the status of your <code>RestoreTableFromSnapshot</code> request.</p>
     */
    inline const TableRestoreStatus& GetTableRestoreStatus() const { return m_tableRestoreStatus; }
    template<typename TableRestoreStatusT = TableRestoreStatus>
    void SetTableRestoreStatus(TableRestoreStatusT&& value) { m_tableRestoreStatusHasBeenSet = true; m_tableRestoreStatus = std::forward<TableRestoreStatusT>(value); }
    template<typename TableRestoreStatusT = TableRestoreStatus>
    GetTableRestoreStatusResult& WithTableRestoreStatus(TableRestoreStatusT&& value) { SetTableRestoreStatus(std::forward<TableRestoreStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableRestoreStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TableRestoreStatus m_tableRestoreStatus;
    bool m_tableRestoreStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
