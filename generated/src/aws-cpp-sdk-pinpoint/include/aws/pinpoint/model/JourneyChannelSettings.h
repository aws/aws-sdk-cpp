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
    AWS_PINPOINT_API JourneyChannelSettings();
    AWS_PINPOINT_API JourneyChannelSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyChannelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline const Aws::String& GetConnectCampaignArn() const{ return m_connectCampaignArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline bool ConnectCampaignArnHasBeenSet() const { return m_connectCampaignArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline void SetConnectCampaignArn(const Aws::String& value) { m_connectCampaignArnHasBeenSet = true; m_connectCampaignArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline void SetConnectCampaignArn(Aws::String&& value) { m_connectCampaignArnHasBeenSet = true; m_connectCampaignArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline void SetConnectCampaignArn(const char* value) { m_connectCampaignArnHasBeenSet = true; m_connectCampaignArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline JourneyChannelSettings& WithConnectCampaignArn(const Aws::String& value) { SetConnectCampaignArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline JourneyChannelSettings& WithConnectCampaignArn(Aws::String&& value) { SetConnectCampaignArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Connect Campaign.</p>
     */
    inline JourneyChannelSettings& WithConnectCampaignArn(const char* value) { SetConnectCampaignArn(value); return *this;}


    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline const Aws::String& GetConnectCampaignExecutionRoleArn() const{ return m_connectCampaignExecutionRoleArn; }

    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline bool ConnectCampaignExecutionRoleArnHasBeenSet() const { return m_connectCampaignExecutionRoleArnHasBeenSet; }

    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline void SetConnectCampaignExecutionRoleArn(const Aws::String& value) { m_connectCampaignExecutionRoleArnHasBeenSet = true; m_connectCampaignExecutionRoleArn = value; }

    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline void SetConnectCampaignExecutionRoleArn(Aws::String&& value) { m_connectCampaignExecutionRoleArnHasBeenSet = true; m_connectCampaignExecutionRoleArn = std::move(value); }

    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline void SetConnectCampaignExecutionRoleArn(const char* value) { m_connectCampaignExecutionRoleArnHasBeenSet = true; m_connectCampaignExecutionRoleArn.assign(value); }

    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline JourneyChannelSettings& WithConnectCampaignExecutionRoleArn(const Aws::String& value) { SetConnectCampaignExecutionRoleArn(value); return *this;}

    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline JourneyChannelSettings& WithConnectCampaignExecutionRoleArn(Aws::String&& value) { SetConnectCampaignExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>IAM role ARN to be assumed when invoking Connect campaign execution APIs for
     * dialing.</p>
     */
    inline JourneyChannelSettings& WithConnectCampaignExecutionRoleArn(const char* value) { SetConnectCampaignExecutionRoleArn(value); return *this;}

  private:

    Aws::String m_connectCampaignArn;
    bool m_connectCampaignArnHasBeenSet = false;

    Aws::String m_connectCampaignExecutionRoleArn;
    bool m_connectCampaignExecutionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
