/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/DataLakeUpdateException.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/DataLakeStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The status of the last <code>UpdateDataLake</code> or
   * <code>DeleteDataLake</code> API request. This is set to Completed after the
   * configuration is updated, or removed if deletion of the data lake is
   * successful.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeUpdateStatus">AWS
   * API Reference</a></p>
   */
  class DataLakeUpdateStatus
  {
  public:
    AWS_SECURITYLAKE_API DataLakeUpdateStatus() = default;
    AWS_SECURITYLAKE_API DataLakeUpdateStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeUpdateStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request which failed.</p>
     */
    inline const DataLakeUpdateException& GetException() const { return m_exception; }
    inline bool ExceptionHasBeenSet() const { return m_exceptionHasBeenSet; }
    template<typename ExceptionT = DataLakeUpdateException>
    void SetException(ExceptionT&& value) { m_exceptionHasBeenSet = true; m_exception = std::forward<ExceptionT>(value); }
    template<typename ExceptionT = DataLakeUpdateException>
    DataLakeUpdateStatus& WithException(ExceptionT&& value) { SetException(std::forward<ExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DataLakeUpdateStatus& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request that was requested.</p>
     */
    inline DataLakeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataLakeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataLakeUpdateStatus& WithStatus(DataLakeStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    DataLakeUpdateException m_exception;
    bool m_exceptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    DataLakeStatus m_status{DataLakeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
