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
    AWS_SECURITYLAKE_API DataLakeUpdateStatus();
    AWS_SECURITYLAKE_API DataLakeUpdateStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeUpdateStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request which failed.</p>
     */
    inline const DataLakeUpdateException& GetException() const{ return m_exception; }

    /**
     * <p>The details of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request which failed.</p>
     */
    inline bool ExceptionHasBeenSet() const { return m_exceptionHasBeenSet; }

    /**
     * <p>The details of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request which failed.</p>
     */
    inline void SetException(const DataLakeUpdateException& value) { m_exceptionHasBeenSet = true; m_exception = value; }

    /**
     * <p>The details of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request which failed.</p>
     */
    inline void SetException(DataLakeUpdateException&& value) { m_exceptionHasBeenSet = true; m_exception = std::move(value); }

    /**
     * <p>The details of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request which failed.</p>
     */
    inline DataLakeUpdateStatus& WithException(const DataLakeUpdateException& value) { SetException(value); return *this;}

    /**
     * <p>The details of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request which failed.</p>
     */
    inline DataLakeUpdateStatus& WithException(DataLakeUpdateException&& value) { SetException(std::move(value)); return *this;}


    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateStatus& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateStatus& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateStatus& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The status of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request that was requested.</p>
     */
    inline const DataLakeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request that was requested.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request that was requested.</p>
     */
    inline void SetStatus(const DataLakeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request that was requested.</p>
     */
    inline void SetStatus(DataLakeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request that was requested.</p>
     */
    inline DataLakeUpdateStatus& WithStatus(const DataLakeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request that was requested.</p>
     */
    inline DataLakeUpdateStatus& WithStatus(DataLakeStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DataLakeUpdateException m_exception;
    bool m_exceptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    DataLakeStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
