/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ConnectorStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the operational status and health of a
   * connectorV2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/HealthCheck">AWS
   * API Reference</a></p>
   */
  class HealthCheck
  {
  public:
    AWS_SECURITYHUB_API HealthCheck() = default;
    AWS_SECURITYHUB_API HealthCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API HealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the connectorV2.</p>
     */
    inline ConnectorStatus GetConnectorStatus() const { return m_connectorStatus; }
    inline bool ConnectorStatusHasBeenSet() const { return m_connectorStatusHasBeenSet; }
    inline void SetConnectorStatus(ConnectorStatus value) { m_connectorStatusHasBeenSet = true; m_connectorStatus = value; }
    inline HealthCheck& WithConnectorStatus(ConnectorStatus value) { SetConnectorStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message for the reason of connectorStatus change.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    HealthCheck& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ISO 8601 UTC timestamp for the time check the health status of the
     * connectorV2.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckedAt() const { return m_lastCheckedAt; }
    inline bool LastCheckedAtHasBeenSet() const { return m_lastCheckedAtHasBeenSet; }
    template<typename LastCheckedAtT = Aws::Utils::DateTime>
    void SetLastCheckedAt(LastCheckedAtT&& value) { m_lastCheckedAtHasBeenSet = true; m_lastCheckedAt = std::forward<LastCheckedAtT>(value); }
    template<typename LastCheckedAtT = Aws::Utils::DateTime>
    HealthCheck& WithLastCheckedAt(LastCheckedAtT&& value) { SetLastCheckedAt(std::forward<LastCheckedAtT>(value)); return *this;}
    ///@}
  private:

    ConnectorStatus m_connectorStatus{ConnectorStatus::NOT_SET};
    bool m_connectorStatusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_lastCheckedAt{};
    bool m_lastCheckedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
