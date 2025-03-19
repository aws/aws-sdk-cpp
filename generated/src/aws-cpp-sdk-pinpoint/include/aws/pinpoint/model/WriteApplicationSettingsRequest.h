/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
   * <p>Specifies the default settings for an application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteApplicationSettingsRequest">AWS
   * API Reference</a></p>
   */
  class WriteApplicationSettingsRequest
  {
  public:
    AWS_PINPOINT_API WriteApplicationSettingsRequest() = default;
    AWS_PINPOINT_API WriteApplicationSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WriteApplicationSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p> <p>To override these settings
     * and define custom settings for a specific campaign, use the CampaignHook object
     * of the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource.</p>
     */
    inline const CampaignHook& GetCampaignHook() const { return m_campaignHook; }
    inline bool CampaignHookHasBeenSet() const { return m_campaignHookHasBeenSet; }
    template<typename CampaignHookT = CampaignHook>
    void SetCampaignHook(CampaignHookT&& value) { m_campaignHookHasBeenSet = true; m_campaignHook = std::forward<CampaignHookT>(value); }
    template<typename CampaignHookT = CampaignHook>
    WriteApplicationSettingsRequest& WithCampaignHook(CampaignHookT&& value) { SetCampaignHook(std::forward<CampaignHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const { return m_cloudWatchMetricsEnabled; }
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }
    inline WriteApplicationSettingsRequest& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetEventTaggingEnabled() const { return m_eventTaggingEnabled; }
    inline bool EventTaggingEnabledHasBeenSet() const { return m_eventTaggingEnabledHasBeenSet; }
    inline void SetEventTaggingEnabled(bool value) { m_eventTaggingEnabledHasBeenSet = true; m_eventTaggingEnabled = value; }
    inline WriteApplicationSettingsRequest& WithEventTaggingEnabled(bool value) { SetEventTaggingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits and define custom limits for a specific campaign or journey, use
     * the <link  linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource or the <link 
     * linkend="apps-application-id-journeys-journey-id">Journey</link> resource,
     * respectively.</p>
     */
    inline const CampaignLimits& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = CampaignLimits>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = CampaignLimits>
    WriteApplicationSettingsRequest& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
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
     * time is enabled.</p> <p>To override the default quiet time settings for a
     * specific campaign or journey, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource or
     * the <link  linkend="apps-application-id-journeys-journey-id">Journey</link>
     * resource to define a custom quiet time for the campaign or journey.</p>
     */
    inline const QuietTime& GetQuietTime() const { return m_quietTime; }
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }
    template<typename QuietTimeT = QuietTime>
    void SetQuietTime(QuietTimeT&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::forward<QuietTimeT>(value); }
    template<typename QuietTimeT = QuietTime>
    WriteApplicationSettingsRequest& WithQuietTime(QuietTimeT&& value) { SetQuietTime(std::forward<QuietTimeT>(value)); return *this;}
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
    WriteApplicationSettingsRequest& WithJourneyLimits(JourneyLimitsT&& value) { SetJourneyLimits(std::forward<JourneyLimitsT>(value)); return *this;}
    ///@}
  private:

    CampaignHook m_campaignHook;
    bool m_campaignHookHasBeenSet = false;

    bool m_cloudWatchMetricsEnabled{false};
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    bool m_eventTaggingEnabled{false};
    bool m_eventTaggingEnabledHasBeenSet = false;

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
