/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/Telemetry.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>This structure contains much of the configuration data for the app
   * monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/AppMonitorConfiguration">AWS
   * API Reference</a></p>
   */
  class AppMonitorConfiguration
  {
  public:
    AWS_CLOUDWATCHRUM_API AppMonitorConfiguration();
    AWS_CLOUDWATCHRUM_API AppMonitorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API AppMonitorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you set this to <code>true</code>, the RUM web client sets two cookies, a
     * session cookie and a user cookie. The cookies allow the RUM web client to
     * collect data relating to the number of users an application has and the behavior
     * of the application across a sequence of events. Cookies are stored in the
     * top-level domain of the current page.</p>
     */
    inline bool GetAllowCookies() const{ return m_allowCookies; }

    /**
     * <p>If you set this to <code>true</code>, the RUM web client sets two cookies, a
     * session cookie and a user cookie. The cookies allow the RUM web client to
     * collect data relating to the number of users an application has and the behavior
     * of the application across a sequence of events. Cookies are stored in the
     * top-level domain of the current page.</p>
     */
    inline bool AllowCookiesHasBeenSet() const { return m_allowCookiesHasBeenSet; }

    /**
     * <p>If you set this to <code>true</code>, the RUM web client sets two cookies, a
     * session cookie and a user cookie. The cookies allow the RUM web client to
     * collect data relating to the number of users an application has and the behavior
     * of the application across a sequence of events. Cookies are stored in the
     * top-level domain of the current page.</p>
     */
    inline void SetAllowCookies(bool value) { m_allowCookiesHasBeenSet = true; m_allowCookies = value; }

    /**
     * <p>If you set this to <code>true</code>, the RUM web client sets two cookies, a
     * session cookie and a user cookie. The cookies allow the RUM web client to
     * collect data relating to the number of users an application has and the behavior
     * of the application across a sequence of events. Cookies are stored in the
     * top-level domain of the current page.</p>
     */
    inline AppMonitorConfiguration& WithAllowCookies(bool value) { SetAllowCookies(value); return *this;}


    /**
     * <p>If you set this to <code>true</code>, RUM enables X-Ray tracing for the user
     * sessions that RUM samples. RUM adds an X-Ray trace header to allowed HTTP
     * requests. It also records an X-Ray segment for allowed HTTP requests. You can
     * see traces and segments from these user sessions in the X-Ray console and the
     * CloudWatch ServiceLens console. For more information, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/aws-xray.html">What is
     * X-Ray?</a> </p>
     */
    inline bool GetEnableXRay() const{ return m_enableXRay; }

    /**
     * <p>If you set this to <code>true</code>, RUM enables X-Ray tracing for the user
     * sessions that RUM samples. RUM adds an X-Ray trace header to allowed HTTP
     * requests. It also records an X-Ray segment for allowed HTTP requests. You can
     * see traces and segments from these user sessions in the X-Ray console and the
     * CloudWatch ServiceLens console. For more information, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/aws-xray.html">What is
     * X-Ray?</a> </p>
     */
    inline bool EnableXRayHasBeenSet() const { return m_enableXRayHasBeenSet; }

    /**
     * <p>If you set this to <code>true</code>, RUM enables X-Ray tracing for the user
     * sessions that RUM samples. RUM adds an X-Ray trace header to allowed HTTP
     * requests. It also records an X-Ray segment for allowed HTTP requests. You can
     * see traces and segments from these user sessions in the X-Ray console and the
     * CloudWatch ServiceLens console. For more information, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/aws-xray.html">What is
     * X-Ray?</a> </p>
     */
    inline void SetEnableXRay(bool value) { m_enableXRayHasBeenSet = true; m_enableXRay = value; }

    /**
     * <p>If you set this to <code>true</code>, RUM enables X-Ray tracing for the user
     * sessions that RUM samples. RUM adds an X-Ray trace header to allowed HTTP
     * requests. It also records an X-Ray segment for allowed HTTP requests. You can
     * see traces and segments from these user sessions in the X-Ray console and the
     * CloudWatch ServiceLens console. For more information, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/aws-xray.html">What is
     * X-Ray?</a> </p>
     */
    inline AppMonitorConfiguration& WithEnableXRay(bool value) { SetEnableXRay(value); return *this;}


    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedPages() const{ return m_excludedPages; }

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline bool ExcludedPagesHasBeenSet() const { return m_excludedPagesHasBeenSet; }

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline void SetExcludedPages(const Aws::Vector<Aws::String>& value) { m_excludedPagesHasBeenSet = true; m_excludedPages = value; }

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline void SetExcludedPages(Aws::Vector<Aws::String>&& value) { m_excludedPagesHasBeenSet = true; m_excludedPages = std::move(value); }

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline AppMonitorConfiguration& WithExcludedPages(const Aws::Vector<Aws::String>& value) { SetExcludedPages(value); return *this;}

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline AppMonitorConfiguration& WithExcludedPages(Aws::Vector<Aws::String>&& value) { SetExcludedPages(std::move(value)); return *this;}

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline AppMonitorConfiguration& AddExcludedPages(const Aws::String& value) { m_excludedPagesHasBeenSet = true; m_excludedPages.push_back(value); return *this; }

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline AppMonitorConfiguration& AddExcludedPages(Aws::String&& value) { m_excludedPagesHasBeenSet = true; m_excludedPages.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline AppMonitorConfiguration& AddExcludedPages(const char* value) { m_excludedPagesHasBeenSet = true; m_excludedPages.push_back(value); return *this; }


    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFavoritePages() const{ return m_favoritePages; }

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline bool FavoritePagesHasBeenSet() const { return m_favoritePagesHasBeenSet; }

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline void SetFavoritePages(const Aws::Vector<Aws::String>& value) { m_favoritePagesHasBeenSet = true; m_favoritePages = value; }

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline void SetFavoritePages(Aws::Vector<Aws::String>&& value) { m_favoritePagesHasBeenSet = true; m_favoritePages = std::move(value); }

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline AppMonitorConfiguration& WithFavoritePages(const Aws::Vector<Aws::String>& value) { SetFavoritePages(value); return *this;}

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline AppMonitorConfiguration& WithFavoritePages(Aws::Vector<Aws::String>&& value) { SetFavoritePages(std::move(value)); return *this;}

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline AppMonitorConfiguration& AddFavoritePages(const Aws::String& value) { m_favoritePagesHasBeenSet = true; m_favoritePages.push_back(value); return *this; }

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline AppMonitorConfiguration& AddFavoritePages(Aws::String&& value) { m_favoritePagesHasBeenSet = true; m_favoritePages.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline AppMonitorConfiguration& AddFavoritePages(const char* value) { m_favoritePagesHasBeenSet = true; m_favoritePages.push_back(value); return *this; }


    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline const Aws::String& GetGuestRoleArn() const{ return m_guestRoleArn; }

    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline bool GuestRoleArnHasBeenSet() const { return m_guestRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline void SetGuestRoleArn(const Aws::String& value) { m_guestRoleArnHasBeenSet = true; m_guestRoleArn = value; }

    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline void SetGuestRoleArn(Aws::String&& value) { m_guestRoleArnHasBeenSet = true; m_guestRoleArn = std::move(value); }

    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline void SetGuestRoleArn(const char* value) { m_guestRoleArnHasBeenSet = true; m_guestRoleArn.assign(value); }

    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline AppMonitorConfiguration& WithGuestRoleArn(const Aws::String& value) { SetGuestRoleArn(value); return *this;}

    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline AppMonitorConfiguration& WithGuestRoleArn(Aws::String&& value) { SetGuestRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>
     */
    inline AppMonitorConfiguration& WithGuestRoleArn(const char* value) { SetGuestRoleArn(value); return *this;}


    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline AppMonitorConfiguration& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline AppMonitorConfiguration& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline AppMonitorConfiguration& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedPages() const{ return m_includedPages; }

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline bool IncludedPagesHasBeenSet() const { return m_includedPagesHasBeenSet; }

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline void SetIncludedPages(const Aws::Vector<Aws::String>& value) { m_includedPagesHasBeenSet = true; m_includedPages = value; }

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline void SetIncludedPages(Aws::Vector<Aws::String>&& value) { m_includedPagesHasBeenSet = true; m_includedPages = std::move(value); }

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline AppMonitorConfiguration& WithIncludedPages(const Aws::Vector<Aws::String>& value) { SetIncludedPages(value); return *this;}

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline AppMonitorConfiguration& WithIncludedPages(Aws::Vector<Aws::String>&& value) { SetIncludedPages(std::move(value)); return *this;}

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline AppMonitorConfiguration& AddIncludedPages(const Aws::String& value) { m_includedPagesHasBeenSet = true; m_includedPages.push_back(value); return *this; }

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline AppMonitorConfiguration& AddIncludedPages(Aws::String&& value) { m_includedPagesHasBeenSet = true; m_includedPages.push_back(std::move(value)); return *this; }

    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline AppMonitorConfiguration& AddIncludedPages(const char* value) { m_includedPagesHasBeenSet = true; m_includedPages.push_back(value); return *this; }


    /**
     * <p>Specifies the portion of user sessions to use for RUM data collection.
     * Choosing a higher portion gives you more data but also incurs more costs.</p>
     * <p>The range for this value is 0 to 1 inclusive. Setting this to 1 means that
     * 100% of user sessions are sampled, and setting it to 0.1 means that 10% of user
     * sessions are sampled.</p> <p>If you omit this parameter, the default of 0.1 is
     * used, and 10% of sessions will be sampled.</p>
     */
    inline double GetSessionSampleRate() const{ return m_sessionSampleRate; }

    /**
     * <p>Specifies the portion of user sessions to use for RUM data collection.
     * Choosing a higher portion gives you more data but also incurs more costs.</p>
     * <p>The range for this value is 0 to 1 inclusive. Setting this to 1 means that
     * 100% of user sessions are sampled, and setting it to 0.1 means that 10% of user
     * sessions are sampled.</p> <p>If you omit this parameter, the default of 0.1 is
     * used, and 10% of sessions will be sampled.</p>
     */
    inline bool SessionSampleRateHasBeenSet() const { return m_sessionSampleRateHasBeenSet; }

    /**
     * <p>Specifies the portion of user sessions to use for RUM data collection.
     * Choosing a higher portion gives you more data but also incurs more costs.</p>
     * <p>The range for this value is 0 to 1 inclusive. Setting this to 1 means that
     * 100% of user sessions are sampled, and setting it to 0.1 means that 10% of user
     * sessions are sampled.</p> <p>If you omit this parameter, the default of 0.1 is
     * used, and 10% of sessions will be sampled.</p>
     */
    inline void SetSessionSampleRate(double value) { m_sessionSampleRateHasBeenSet = true; m_sessionSampleRate = value; }

    /**
     * <p>Specifies the portion of user sessions to use for RUM data collection.
     * Choosing a higher portion gives you more data but also incurs more costs.</p>
     * <p>The range for this value is 0 to 1 inclusive. Setting this to 1 means that
     * 100% of user sessions are sampled, and setting it to 0.1 means that 10% of user
     * sessions are sampled.</p> <p>If you omit this parameter, the default of 0.1 is
     * used, and 10% of sessions will be sampled.</p>
     */
    inline AppMonitorConfiguration& WithSessionSampleRate(double value) { SetSessionSampleRate(value); return *this;}


    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline const Aws::Vector<Telemetry>& GetTelemetries() const{ return m_telemetries; }

    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline bool TelemetriesHasBeenSet() const { return m_telemetriesHasBeenSet; }

    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline void SetTelemetries(const Aws::Vector<Telemetry>& value) { m_telemetriesHasBeenSet = true; m_telemetries = value; }

    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline void SetTelemetries(Aws::Vector<Telemetry>&& value) { m_telemetriesHasBeenSet = true; m_telemetries = std::move(value); }

    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline AppMonitorConfiguration& WithTelemetries(const Aws::Vector<Telemetry>& value) { SetTelemetries(value); return *this;}

    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline AppMonitorConfiguration& WithTelemetries(Aws::Vector<Telemetry>&& value) { SetTelemetries(std::move(value)); return *this;}

    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline AppMonitorConfiguration& AddTelemetries(const Telemetry& value) { m_telemetriesHasBeenSet = true; m_telemetries.push_back(value); return *this; }

    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline AppMonitorConfiguration& AddTelemetries(Telemetry&& value) { m_telemetriesHasBeenSet = true; m_telemetries.push_back(std::move(value)); return *this; }

  private:

    bool m_allowCookies;
    bool m_allowCookiesHasBeenSet = false;

    bool m_enableXRay;
    bool m_enableXRayHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedPages;
    bool m_excludedPagesHasBeenSet = false;

    Aws::Vector<Aws::String> m_favoritePages;
    bool m_favoritePagesHasBeenSet = false;

    Aws::String m_guestRoleArn;
    bool m_guestRoleArnHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_includedPages;
    bool m_includedPagesHasBeenSet = false;

    double m_sessionSampleRate;
    bool m_sessionSampleRateHasBeenSet = false;

    Aws::Vector<Telemetry> m_telemetries;
    bool m_telemetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
