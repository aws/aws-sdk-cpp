/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/QuietTime.h>
#include <aws/pinpoint/model/ApplicationSettingsJourneyLimits.h>
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
   * <p>Provides information about an application, including the default settings for
   * an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ApplicationSettingsResource">AWS
   * API Reference</a></p>
   */
  class ApplicationSettingsResource
  {
  public:
    AWS_PINPOINT_API ApplicationSettingsResource() = default;
    AWS_PINPOINT_API ApplicationSettingsResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ApplicationSettingsResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ApplicationSettingsResource& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p>
     */
    inline const CampaignHook& GetCampaignHook() const { return m_campaignHook; }
    inline bool CampaignHookHasBeenSet() const { return m_campaignHookHasBeenSet; }
    template<typename CampaignHookT = CampaignHook>
    void SetCampaignHook(CampaignHookT&& value) { m_campaignHookHasBeenSet = true; m_campaignHook = std::forward<CampaignHookT>(value); }
    template<typename CampaignHookT = CampaignHook>
    ApplicationSettingsResource& WithCampaignHook(CampaignHookT&& value) { SetCampaignHook(std::forward<CampaignHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    ApplicationSettingsResource& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default sending limits for campaigns in the application.</p>
     */
    inline const CampaignLimits& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = CampaignLimits>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = CampaignLimits>
    ApplicationSettingsResource& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default quiet time for campaigns in the application. Quiet time is a
     * specific time range when messages aren't sent to endpoints, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint is set to a valid value.</p></li> <li><p>The current time in the
     * endpoint's time zone is later than or equal to the time specified by the
     * QuietTime.Start property for the application (or a campaign or journey that has
     * custom quiet time settings).</p></li> <li><p>The current time in the endpoint's
     * time zone is earlier than or equal to the time specified by the QuietTime.End
     * property for the application (or a campaign or journey that has custom quiet
     * time settings).</p></li></ul> <p>If any of the preceding conditions isn't met,
     * the endpoint will receive messages from a campaign or journey, even if quiet
     * time is enabled.</p>
     */
    inline const QuietTime& GetQuietTime() const { return m_quietTime; }
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }
    template<typename QuietTimeT = QuietTime>
    void SetQuietTime(QuietTimeT&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::forward<QuietTimeT>(value); }
    template<typename QuietTimeT = QuietTime>
    ApplicationSettingsResource& WithQuietTime(QuietTimeT&& value) { SetQuietTime(std::forward<QuietTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default sending limits for journeys in the application. These limits
     * apply to each journey for the application but can be overridden, on a per
     * journey basis, with the JourneyLimits resource.</p>
     */
    inline const ApplicationSettingsJourneyLimits& GetJourneyLimits() const { return m_journeyLimits; }
    inline bool JourneyLimitsHasBeenSet() const { return m_journeyLimitsHasBeenSet; }
    template<typename JourneyLimitsT = ApplicationSettingsJourneyLimits>
    void SetJourneyLimits(JourneyLimitsT&& value) { m_journeyLimitsHasBeenSet = true; m_journeyLimits = std::forward<JourneyLimitsT>(value); }
    template<typename JourneyLimitsT = ApplicationSettingsJourneyLimits>
    ApplicationSettingsResource& WithJourneyLimits(JourneyLimitsT&& value) { SetJourneyLimits(std::forward<JourneyLimitsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    CampaignHook m_campaignHook;
    bool m_campaignHookHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    CampaignLimits m_limits;
    bool m_limitsHasBeenSet = false;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet = false;

    ApplicationSettingsJourneyLimits m_journeyLimits;
    bool m_journeyLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
