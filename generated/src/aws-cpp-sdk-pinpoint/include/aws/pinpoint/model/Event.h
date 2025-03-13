/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/Session.h>
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
   * <p>Specifies information about an event that reports data to Amazon
   * Pinpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Event">AWS API
   * Reference</a></p>
   */
  class Event
  {
  public:
    AWS_PINPOINT_API Event() = default;
    AWS_PINPOINT_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package name of the app that's recording the event.</p>
     */
    inline const Aws::String& GetAppPackageName() const { return m_appPackageName; }
    inline bool AppPackageNameHasBeenSet() const { return m_appPackageNameHasBeenSet; }
    template<typename AppPackageNameT = Aws::String>
    void SetAppPackageName(AppPackageNameT&& value) { m_appPackageNameHasBeenSet = true; m_appPackageName = std::forward<AppPackageNameT>(value); }
    template<typename AppPackageNameT = Aws::String>
    Event& WithAppPackageName(AppPackageNameT&& value) { SetAppPackageName(std::forward<AppPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the app that's recording the event.</p>
     */
    inline const Aws::String& GetAppTitle() const { return m_appTitle; }
    inline bool AppTitleHasBeenSet() const { return m_appTitleHasBeenSet; }
    template<typename AppTitleT = Aws::String>
    void SetAppTitle(AppTitleT&& value) { m_appTitleHasBeenSet = true; m_appTitle = std::forward<AppTitleT>(value); }
    template<typename AppTitleT = Aws::String>
    Event& WithAppTitle(AppTitleT&& value) { SetAppTitle(std::forward<AppTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the app that's recording the event.</p>
     */
    inline const Aws::String& GetAppVersionCode() const { return m_appVersionCode; }
    inline bool AppVersionCodeHasBeenSet() const { return m_appVersionCodeHasBeenSet; }
    template<typename AppVersionCodeT = Aws::String>
    void SetAppVersionCode(AppVersionCodeT&& value) { m_appVersionCodeHasBeenSet = true; m_appVersionCode = std::forward<AppVersionCodeT>(value); }
    template<typename AppVersionCodeT = Aws::String>
    Event& WithAppVersionCode(AppVersionCodeT&& value) { SetAppVersionCode(std::forward<AppVersionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom attributes that are associated with the event.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    Event& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    Event& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version of the SDK that's running on the client device.</p>
     */
    inline const Aws::String& GetClientSdkVersion() const { return m_clientSdkVersion; }
    inline bool ClientSdkVersionHasBeenSet() const { return m_clientSdkVersionHasBeenSet; }
    template<typename ClientSdkVersionT = Aws::String>
    void SetClientSdkVersion(ClientSdkVersionT&& value) { m_clientSdkVersionHasBeenSet = true; m_clientSdkVersion = std::forward<ClientSdkVersionT>(value); }
    template<typename ClientSdkVersionT = Aws::String>
    Event& WithClientSdkVersion(ClientSdkVersionT&& value) { SetClientSdkVersion(std::forward<ClientSdkVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    Event& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom metrics that are associated with the event.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, double>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, double>>
    Event& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    inline Event& AddMetrics(Aws::String key, double value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the SDK that's being used to record the event.</p>
     */
    inline const Aws::String& GetSdkName() const { return m_sdkName; }
    inline bool SdkNameHasBeenSet() const { return m_sdkNameHasBeenSet; }
    template<typename SdkNameT = Aws::String>
    void SetSdkName(SdkNameT&& value) { m_sdkNameHasBeenSet = true; m_sdkName = std::forward<SdkNameT>(value); }
    template<typename SdkNameT = Aws::String>
    Event& WithSdkName(SdkNameT&& value) { SetSdkName(std::forward<SdkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the session in which the event occurred.</p>
     */
    inline const Session& GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    template<typename SessionT = Session>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Session>
    Event& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the event occurred.</p>
     */
    inline const Aws::String& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::String>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::String>
    Event& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appPackageName;
    bool m_appPackageNameHasBeenSet = false;

    Aws::String m_appTitle;
    bool m_appTitleHasBeenSet = false;

    Aws::String m_appVersionCode;
    bool m_appVersionCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_clientSdkVersion;
    bool m_clientSdkVersionHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_sdkName;
    bool m_sdkNameHasBeenSet = false;

    Session m_session;
    bool m_sessionHasBeenSet = false;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
