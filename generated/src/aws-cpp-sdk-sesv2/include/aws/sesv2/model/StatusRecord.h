/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SendingStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains status information for a reputation entity, including
   * the current status, cause description, and timestamp.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/StatusRecord">AWS
   * API Reference</a></p>
   */
  class StatusRecord
  {
  public:
    AWS_SESV2_API StatusRecord() = default;
    AWS_SESV2_API StatusRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API StatusRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current sending status. This can be one of the following:</p> <ul> <li>
     * <p> <code>ENABLED</code> – Sending is allowed.</p> </li> <li> <p>
     * <code>DISABLED</code> – Sending is prevented.</p> </li> <li> <p>
     * <code>REINSTATED</code> – Sending is allowed even with active reputation
     * findings.</p> </li> </ul>
     */
    inline SendingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SendingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StatusRecord& WithStatus(SendingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reason for the current status, or null if no specific
     * cause is available.</p>
     */
    inline const Aws::String& GetCause() const { return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    template<typename CauseT = Aws::String>
    void SetCause(CauseT&& value) { m_causeHasBeenSet = true; m_cause = std::forward<CauseT>(value); }
    template<typename CauseT = Aws::String>
    StatusRecord& WithCause(CauseT&& value) { SetCause(std::forward<CauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    StatusRecord& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    SendingStatus m_status{SendingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
