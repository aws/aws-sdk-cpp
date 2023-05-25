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
    AWS_PINPOINT_API ApplicationSettingsResource();
    AWS_PINPOINT_API ApplicationSettingsResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ApplicationSettingsResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline ApplicationSettingsResource& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline ApplicationSettingsResource& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline ApplicationSettingsResource& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p>
     */
    inline const CampaignHook& GetCampaignHook() const{ return m_campaignHook; }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p>
     */
    inline bool CampaignHookHasBeenSet() const { return m_campaignHookHasBeenSet; }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p>
     */
    inline void SetCampaignHook(const CampaignHook& value) { m_campaignHookHasBeenSet = true; m_campaignHook = value; }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p>
     */
    inline void SetCampaignHook(CampaignHook&& value) { m_campaignHookHasBeenSet = true; m_campaignHook = std::move(value); }

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p>
     */
    inline ApplicationSettingsResource& WithCampaignHook(const CampaignHook& value) { SetCampaignHook(value); return *this;}

    /**
     * <p>The settings for the AWS Lambda function to invoke by default as a code hook
     * for campaigns in the application. You can use this hook to customize segments
     * that are used by campaigns in the application.</p>
     */
    inline ApplicationSettingsResource& WithCampaignHook(CampaignHook&& value) { SetCampaignHook(std::move(value)); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline ApplicationSettingsResource& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline ApplicationSettingsResource& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the application's settings were
     * last modified.</p>
     */
    inline ApplicationSettingsResource& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The default sending limits for campaigns in the application.</p>
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * <p>The default sending limits for campaigns in the application.</p>
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * <p>The default sending limits for campaigns in the application.</p>
     */
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * <p>The default sending limits for campaigns in the application.</p>
     */
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * <p>The default sending limits for campaigns in the application.</p>
     */
    inline ApplicationSettingsResource& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * <p>The default sending limits for campaigns in the application.</p>
     */
    inline ApplicationSettingsResource& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


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
     * time is enabled.</p>
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
     * time is enabled.</p>
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
     * time is enabled.</p>
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
     * time is enabled.</p>
     */
    inline ApplicationSettingsResource& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

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
    inline ApplicationSettingsResource& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
