/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/LastUpdateFailure.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/SettingsStatus.h>
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
   * <p>The status of the last <code>UpdateDatalake</code> or
   * <code>DeleteDatalake</code> API request. This is set to Completed after the
   * configuration is updated, or removed if deletion of the data lake is
   * successful.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateStatus">AWS
   * API Reference</a></p>
   */
  class UpdateStatus
  {
  public:
    AWS_SECURITYLAKE_API UpdateStatus();
    AWS_SECURITYLAKE_API UpdateStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API UpdateStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of the last <code>UpdateDatalake</code>or
     * <code>DeleteDatalake</code> API request which failed.</p>
     */
    inline const LastUpdateFailure& GetLastUpdateFailure() const{ return m_lastUpdateFailure; }

    /**
     * <p>The details of the last <code>UpdateDatalake</code>or
     * <code>DeleteDatalake</code> API request which failed.</p>
     */
    inline bool LastUpdateFailureHasBeenSet() const { return m_lastUpdateFailureHasBeenSet; }

    /**
     * <p>The details of the last <code>UpdateDatalake</code>or
     * <code>DeleteDatalake</code> API request which failed.</p>
     */
    inline void SetLastUpdateFailure(const LastUpdateFailure& value) { m_lastUpdateFailureHasBeenSet = true; m_lastUpdateFailure = value; }

    /**
     * <p>The details of the last <code>UpdateDatalake</code>or
     * <code>DeleteDatalake</code> API request which failed.</p>
     */
    inline void SetLastUpdateFailure(LastUpdateFailure&& value) { m_lastUpdateFailureHasBeenSet = true; m_lastUpdateFailure = std::move(value); }

    /**
     * <p>The details of the last <code>UpdateDatalake</code>or
     * <code>DeleteDatalake</code> API request which failed.</p>
     */
    inline UpdateStatus& WithLastUpdateFailure(const LastUpdateFailure& value) { SetLastUpdateFailure(value); return *this;}

    /**
     * <p>The details of the last <code>UpdateDatalake</code>or
     * <code>DeleteDatalake</code> API request which failed.</p>
     */
    inline UpdateStatus& WithLastUpdateFailure(LastUpdateFailure&& value) { SetLastUpdateFailure(std::move(value)); return *this;}


    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline const Aws::String& GetLastUpdateRequestId() const{ return m_lastUpdateRequestId; }

    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline bool LastUpdateRequestIdHasBeenSet() const { return m_lastUpdateRequestIdHasBeenSet; }

    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline void SetLastUpdateRequestId(const Aws::String& value) { m_lastUpdateRequestIdHasBeenSet = true; m_lastUpdateRequestId = value; }

    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline void SetLastUpdateRequestId(Aws::String&& value) { m_lastUpdateRequestIdHasBeenSet = true; m_lastUpdateRequestId = std::move(value); }

    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline void SetLastUpdateRequestId(const char* value) { m_lastUpdateRequestIdHasBeenSet = true; m_lastUpdateRequestId.assign(value); }

    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline UpdateStatus& WithLastUpdateRequestId(const Aws::String& value) { SetLastUpdateRequestId(value); return *this;}

    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline UpdateStatus& WithLastUpdateRequestId(Aws::String&& value) { SetLastUpdateRequestId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request.</p>
     */
    inline UpdateStatus& WithLastUpdateRequestId(const char* value) { SetLastUpdateRequestId(value); return *this;}


    /**
     * <p>The status of the last <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request that was requested.</p>
     */
    inline const SettingsStatus& GetLastUpdateStatus() const{ return m_lastUpdateStatus; }

    /**
     * <p>The status of the last <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request that was requested.</p>
     */
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the last <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request that was requested.</p>
     */
    inline void SetLastUpdateStatus(const SettingsStatus& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = value; }

    /**
     * <p>The status of the last <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request that was requested.</p>
     */
    inline void SetLastUpdateStatus(SettingsStatus&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::move(value); }

    /**
     * <p>The status of the last <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request that was requested.</p>
     */
    inline UpdateStatus& WithLastUpdateStatus(const SettingsStatus& value) { SetLastUpdateStatus(value); return *this;}

    /**
     * <p>The status of the last <code>UpdateDatalake</code> or
     * <code>DeleteDatalake</code> API request that was requested.</p>
     */
    inline UpdateStatus& WithLastUpdateStatus(SettingsStatus&& value) { SetLastUpdateStatus(std::move(value)); return *this;}

  private:

    LastUpdateFailure m_lastUpdateFailure;
    bool m_lastUpdateFailureHasBeenSet = false;

    Aws::String m_lastUpdateRequestId;
    bool m_lastUpdateRequestIdHasBeenSet = false;

    SettingsStatus m_lastUpdateStatus;
    bool m_lastUpdateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
