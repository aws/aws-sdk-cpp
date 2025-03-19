/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>The channel-specific configurations for the journey.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyChannelSettings">AWS
   * API Reference</a></p>
   */
  class JourneyChannelSettings
  {
  public:
    AWS_PINPOINT_API JourneyChannelSettings() = default;
    AWS_PINPOINT_API JourneyChannelSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyChannelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline const Aws::String& GetConnectCampaignArn() const { return m_connectCampaignArn; }
    inline bool ConnectCampaignArnHasBeenSet() const { return m_connectCampaignArnHasBeenSet; }
    template<typename ConnectCampaignArnT = Aws::String>
    void SetConnectCampaignArn(ConnectCampaignArnT&& value) { m_connectCampaignArnHasBeenSet = true; m_connectCampaignArn = std::forward<ConnectCampaignArnT>(value); }
    template<typename ConnectCampaignArnT = Aws::String>
    JourneyChannelSettings& WithConnectCampaignArn(ConnectCampaignArnT&& value) { SetConnectCampaignArn(std::forward<ConnectCampaignArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline const Aws::String& GetConnectCampaignExecutionRoleArn() const { return m_connectCampaignExecutionRoleArn; }
    inline bool ConnectCampaignExecutionRoleArnHasBeenSet() const { return m_connectCampaignExecutionRoleArnHasBeenSet; }
    template<typename ConnectCampaignExecutionRoleArnT = Aws::String>
    void SetConnectCampaignExecutionRoleArn(ConnectCampaignExecutionRoleArnT&& value) { m_connectCampaignExecutionRoleArnHasBeenSet = true; m_connectCampaignExecutionRoleArn = std::forward<ConnectCampaignExecutionRoleArnT>(value); }
    template<typename ConnectCampaignExecutionRoleArnT = Aws::String>
    JourneyChannelSettings& WithConnectCampaignExecutionRoleArn(ConnectCampaignExecutionRoleArnT&& value) { SetConnectCampaignExecutionRoleArn(std::forward<ConnectCampaignExecutionRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectCampaignArn;
    bool m_connectCampaignArnHasBeenSet = false;

    Aws::String m_connectCampaignExecutionRoleArn;
    bool m_connectCampaignExecutionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
