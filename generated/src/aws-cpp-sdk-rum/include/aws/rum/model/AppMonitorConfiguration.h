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
    AWS_CLOUDWATCHRUM_API AppMonitorConfiguration() = default;
    AWS_CLOUDWATCHRUM_API AppMonitorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API AppMonitorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If you set this to <code>true</code>, the RUM web client sets two cookies, a
     * session cookie and a user cookie. The cookies allow the RUM web client to
     * collect data relating to the number of users an application has and the behavior
     * of the application across a sequence of events. Cookies are stored in the
     * top-level domain of the current page.</p>
     */
    inline bool GetAllowCookies() const { return m_allowCookies; }
    inline bool AllowCookiesHasBeenSet() const { return m_allowCookiesHasBeenSet; }
    inline void SetAllowCookies(bool value) { m_allowCookiesHasBeenSet = true; m_allowCookies = value; }
    inline AppMonitorConfiguration& WithAllowCookies(bool value) { SetAllowCookies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set this to <code>true</code>, RUM enables X-Ray tracing for the user
     * sessions that RUM samples. RUM adds an X-Ray trace header to allowed HTTP
     * requests. It also records an X-Ray segment for allowed HTTP requests. You can
     * see traces and segments from these user sessions in the X-Ray console and the
     * CloudWatch ServiceLens console. For more information, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/aws-xray.html">What is
     * X-Ray?</a> </p>
     */
    inline bool GetEnableXRay() const { return m_enableXRay; }
    inline bool EnableXRayHasBeenSet() const { return m_enableXRayHasBeenSet; }
    inline void SetEnableXRay(bool value) { m_enableXRayHasBeenSet = true; m_enableXRay = value; }
    inline AppMonitorConfiguration& WithEnableXRay(bool value) { SetEnableXRay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of URLs in your website or application to exclude from RUM data
     * collection.</p> <p>You can't include both <code>ExcludedPages</code> and
     * <code>IncludedPages</code> in the same operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedPages() const { return m_excludedPages; }
    inline bool ExcludedPagesHasBeenSet() const { return m_excludedPagesHasBeenSet; }
    template<typename ExcludedPagesT = Aws::Vector<Aws::String>>
    void SetExcludedPages(ExcludedPagesT&& value) { m_excludedPagesHasBeenSet = true; m_excludedPages = std::forward<ExcludedPagesT>(value); }
    template<typename ExcludedPagesT = Aws::Vector<Aws::String>>
    AppMonitorConfiguration& WithExcludedPages(ExcludedPagesT&& value) { SetExcludedPages(std::forward<ExcludedPagesT>(value)); return *this;}
    template<typename ExcludedPagesT = Aws::String>
    AppMonitorConfiguration& AddExcludedPages(ExcludedPagesT&& value) { m_excludedPagesHasBeenSet = true; m_excludedPages.emplace_back(std::forward<ExcludedPagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of pages in your application that are to be displayed with a
     * "favorite" icon in the CloudWatch RUM console.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFavoritePages() const { return m_favoritePages; }
    inline bool FavoritePagesHasBeenSet() const { return m_favoritePagesHasBeenSet; }
    template<typename FavoritePagesT = Aws::Vector<Aws::String>>
    void SetFavoritePages(FavoritePagesT&& value) { m_favoritePagesHasBeenSet = true; m_favoritePages = std::forward<FavoritePagesT>(value); }
    template<typename FavoritePagesT = Aws::Vector<Aws::String>>
    AppMonitorConfiguration& WithFavoritePages(FavoritePagesT&& value) { SetFavoritePages(std::forward<FavoritePagesT>(value)); return *this;}
    template<typename FavoritePagesT = Aws::String>
    AppMonitorConfiguration& AddFavoritePages(FavoritePagesT&& value) { m_favoritePagesHasBeenSet = true; m_favoritePages.emplace_back(std::forward<FavoritePagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the guest IAM role that is attached to the Amazon Cognito identity
     * pool that is used to authorize the sending of data to RUM.</p>  <p>It is
     * possible that an app monitor does not have a value for
     * <code>GuestRoleArn</code>. For example, this can happen when you use the console
     * to create an app monitor and you allow CloudWatch RUM to create a new identity
     * pool for Authorization. In this case, <code>GuestRoleArn</code> is not present
     * in the <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_GetAppMonitor.html">GetAppMonitor</a>
     * response because it is not stored by the service.</p> <p>If this issue affects
     * you, you can take one of the following steps:</p> <ul> <li> <p>Use the Cloud
     * Development Kit (CDK) to create an identity pool and the associated IAM role,
     * and use that for your app monitor.</p> </li> <li> <p>Make a separate <a
     * href="https://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetIdentityPoolRoles.html">GetIdentityPoolRoles</a>
     * call to Amazon Cognito to retrieve the <code>GuestRoleArn</code>.</p> </li>
     * </ul> 
     */
    inline const Aws::String& GetGuestRoleArn() const { return m_guestRoleArn; }
    inline bool GuestRoleArnHasBeenSet() const { return m_guestRoleArnHasBeenSet; }
    template<typename GuestRoleArnT = Aws::String>
    void SetGuestRoleArn(GuestRoleArnT&& value) { m_guestRoleArnHasBeenSet = true; m_guestRoleArn = std::forward<GuestRoleArnT>(value); }
    template<typename GuestRoleArnT = Aws::String>
    AppMonitorConfiguration& WithGuestRoleArn(GuestRoleArnT&& value) { SetGuestRoleArn(std::forward<GuestRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Cognito identity pool that is used to authorize the
     * sending of data to RUM.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    AppMonitorConfiguration& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this app monitor is to collect data from only certain pages in your
     * application, this structure lists those pages. </p> <p>You can't include both
     * <code>ExcludedPages</code> and <code>IncludedPages</code> in the same
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedPages() const { return m_includedPages; }
    inline bool IncludedPagesHasBeenSet() const { return m_includedPagesHasBeenSet; }
    template<typename IncludedPagesT = Aws::Vector<Aws::String>>
    void SetIncludedPages(IncludedPagesT&& value) { m_includedPagesHasBeenSet = true; m_includedPages = std::forward<IncludedPagesT>(value); }
    template<typename IncludedPagesT = Aws::Vector<Aws::String>>
    AppMonitorConfiguration& WithIncludedPages(IncludedPagesT&& value) { SetIncludedPages(std::forward<IncludedPagesT>(value)); return *this;}
    template<typename IncludedPagesT = Aws::String>
    AppMonitorConfiguration& AddIncludedPages(IncludedPagesT&& value) { m_includedPagesHasBeenSet = true; m_includedPages.emplace_back(std::forward<IncludedPagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the portion of user sessions to use for RUM data collection.
     * Choosing a higher portion gives you more data but also incurs more costs.</p>
     * <p>The range for this value is 0 to 1 inclusive. Setting this to 1 means that
     * 100% of user sessions are sampled, and setting it to 0.1 means that 10% of user
     * sessions are sampled.</p> <p>If you omit this parameter, the default of 0.1 is
     * used, and 10% of sessions will be sampled.</p>
     */
    inline double GetSessionSampleRate() const { return m_sessionSampleRate; }
    inline bool SessionSampleRateHasBeenSet() const { return m_sessionSampleRateHasBeenSet; }
    inline void SetSessionSampleRate(double value) { m_sessionSampleRateHasBeenSet = true; m_sessionSampleRate = value; }
    inline AppMonitorConfiguration& WithSessionSampleRate(double value) { SetSessionSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that lists the types of telemetry data that this app monitor is to
     * collect.</p> <ul> <li> <p> <code>errors</code> indicates that RUM collects data
     * about unhandled JavaScript errors raised by your application.</p> </li> <li> <p>
     * <code>performance</code> indicates that RUM collects performance data about how
     * your application and its resources are loaded and rendered. This includes Core
     * Web Vitals.</p> </li> <li> <p> <code>http</code> indicates that RUM collects
     * data about HTTP errors thrown by your application.</p> </li> </ul>
     */
    inline const Aws::Vector<Telemetry>& GetTelemetries() const { return m_telemetries; }
    inline bool TelemetriesHasBeenSet() const { return m_telemetriesHasBeenSet; }
    template<typename TelemetriesT = Aws::Vector<Telemetry>>
    void SetTelemetries(TelemetriesT&& value) { m_telemetriesHasBeenSet = true; m_telemetries = std::forward<TelemetriesT>(value); }
    template<typename TelemetriesT = Aws::Vector<Telemetry>>
    AppMonitorConfiguration& WithTelemetries(TelemetriesT&& value) { SetTelemetries(std::forward<TelemetriesT>(value)); return *this;}
    inline AppMonitorConfiguration& AddTelemetries(Telemetry value) { m_telemetriesHasBeenSet = true; m_telemetries.push_back(value); return *this; }
    ///@}
  private:

    bool m_allowCookies{false};
    bool m_allowCookiesHasBeenSet = false;

    bool m_enableXRay{false};
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

    double m_sessionSampleRate{0.0};
    bool m_sessionSampleRateHasBeenSet = false;

    Aws::Vector<Telemetry> m_telemetries;
    bool m_telemetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
