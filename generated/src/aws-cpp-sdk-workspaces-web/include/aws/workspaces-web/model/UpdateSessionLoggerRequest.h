/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/EventFilter.h>
#include <aws/workspaces-web/model/LogConfiguration.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdateSessionLoggerRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdateSessionLoggerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSessionLogger"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the session logger to update.</p>
     */
    inline const Aws::String& GetSessionLoggerArn() const { return m_sessionLoggerArn; }
    inline bool SessionLoggerArnHasBeenSet() const { return m_sessionLoggerArnHasBeenSet; }
    template<typename SessionLoggerArnT = Aws::String>
    void SetSessionLoggerArn(SessionLoggerArnT&& value) { m_sessionLoggerArnHasBeenSet = true; m_sessionLoggerArn = std::forward<SessionLoggerArnT>(value); }
    template<typename SessionLoggerArnT = Aws::String>
    UpdateSessionLoggerRequest& WithSessionLoggerArn(SessionLoggerArnT&& value) { SetSessionLoggerArn(std::forward<SessionLoggerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated eventFilter.</p>
     */
    inline const EventFilter& GetEventFilter() const { return m_eventFilter; }
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }
    template<typename EventFilterT = EventFilter>
    void SetEventFilter(EventFilterT&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::forward<EventFilterT>(value); }
    template<typename EventFilterT = EventFilter>
    UpdateSessionLoggerRequest& WithEventFilter(EventFilterT&& value) { SetEventFilter(std::forward<EventFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated logConfiguration.</p>
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    UpdateSessionLoggerRequest& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated display name.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateSessionLoggerRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionLoggerArn;
    bool m_sessionLoggerArnHasBeenSet = false;

    EventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
