/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/QuietTime.h>
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
    AWS_PINPOINT_API WriteApplicationSettingsRequest();
    AWS_PINPOINT_API WriteApplicationSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WriteApplicationSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p> <p>To override these settings
     * and define custom settings for a specific campaign, use the CampaignHook object
     * of the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource.</p>
     */
    inline const CampaignHook& GetCampaignHook() const{ return m_campaignHook; }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p> <p>To override these settings
     * and define custom settings for a specific campaign, use the CampaignHook object
     * of the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource.</p>
     */
    inline bool CampaignHookHasBeenSet() const { return m_campaignHookHasBeenSet; }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p> <p>To override these settings
     * and define custom settings for a specific campaign, use the CampaignHook object
     * of the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource.</p>
     */
    inline void SetCampaignHook(const CampaignHook& value) { m_campaignHookHasBeenSet = true; m_campaignHook = value; }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p> <p>To override these settings
     * and define custom settings for a specific campaign, use the CampaignHook object
     * of the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource.</p>
     */
    inline void SetCampaignHook(CampaignHook&& value) { m_campaignHookHasBeenSet = true; m_campaignHook = std::move(value); }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p> <p>To override these settings
     * and define custom settings for a specific campaign, use the CampaignHook object
     * of the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource.</p>
     */
    inline WriteApplicationSettingsRequest& WithCampaignHook(const CampaignHook& value) { SetCampaignHook(value); return *this;}

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p> <p>To override these settings
     * and define custom settings for a specific campaign, use the CampaignHook object
     * of the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource.</p>
     */
    inline WriteApplicationSettingsRequest& WithCampaignHook(CampaignHook&& value) { SetCampaignHook(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }

    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }

    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline WriteApplicationSettingsRequest& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}


    
    inline bool GetEventTaggingEnabled() const{ return m_eventTaggingEnabled; }

    
    inline bool EventTaggingEnabledHasBeenSet() const { return m_eventTaggingEnabledHasBeenSet; }

    
    inline void SetEventTaggingEnabled(bool value) { m_eventTaggingEnabledHasBeenSet = true; m_eventTaggingEnabled = value; }

    
    inline WriteApplicationSettingsRequest& WithEventTaggingEnabled(bool value) { SetEventTaggingEnabled(value); return *this;}


    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits and define custom limits for a specific campaign or journey, use
     * the <link  linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource or the <link 
     * linkend="apps-application-id-journeys-journey-id">Journey</link> resource,
     * respectively.</p>
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits and define custom limits for a specific campaign or journey, use
     * the <link  linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource or the <link 
     * linkend="apps-application-id-journeys-journey-id">Journey</link> resource,
     * respectively.</p>
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits and define custom limits for a specific campaign or journey, use
     * the <link  linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource or the <link 
     * linkend="apps-application-id-journeys-journey-id">Journey</link> resource,
     * respectively.</p>
     */
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits and define custom limits for a specific campaign or journey, use
     * the <link  linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource or the <link 
     * linkend="apps-application-id-journeys-journey-id">Journey</link> resource,
     * respectively.</p>
     */
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits and define custom limits for a specific campaign or journey, use
     * the <link  linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource or the <link 
     * linkend="apps-application-id-journeys-journey-id">Journey</link> resource,
     * respectively.</p>
     */
    inline WriteApplicationSettingsRequest& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits and define custom limits for a specific campaign or journey, use
     * the <link  linkend="apps-application-id-campaigns-campaign-id">Campaign</link>
     * resource or the <link 
     * linkend="apps-application-id-journeys-journey-id">Journey</link> resource,
     * respectively.</p>
     */
    inline WriteApplicationSettingsRequest& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


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
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

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
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }

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
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

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
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

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
    inline WriteApplicationSettingsRequest& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

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
    inline WriteApplicationSettingsRequest& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}

  private:

    CampaignHook m_campaignHook;
    bool m_campaignHookHasBeenSet = false;

    bool m_cloudWatchMetricsEnabled;
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    bool m_eventTaggingEnabled;
    bool m_eventTaggingEnabledHasBeenSet = false;

    CampaignLimits m_limits;
    bool m_limitsHasBeenSet = false;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
