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
    AWS_PINPOINT_API Event();
    AWS_PINPOINT_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package name of the app that's recording the event.</p>
     */
    inline const Aws::String& GetAppPackageName() const{ return m_appPackageName; }
    inline bool AppPackageNameHasBeenSet() const { return m_appPackageNameHasBeenSet; }
    inline void SetAppPackageName(const Aws::String& value) { m_appPackageNameHasBeenSet = true; m_appPackageName = value; }
    inline void SetAppPackageName(Aws::String&& value) { m_appPackageNameHasBeenSet = true; m_appPackageName = std::move(value); }
    inline void SetAppPackageName(const char* value) { m_appPackageNameHasBeenSet = true; m_appPackageName.assign(value); }
    inline Event& WithAppPackageName(const Aws::String& value) { SetAppPackageName(value); return *this;}
    inline Event& WithAppPackageName(Aws::String&& value) { SetAppPackageName(std::move(value)); return *this;}
    inline Event& WithAppPackageName(const char* value) { SetAppPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the app that's recording the event.</p>
     */
    inline const Aws::String& GetAppTitle() const{ return m_appTitle; }
    inline bool AppTitleHasBeenSet() const { return m_appTitleHasBeenSet; }
    inline void SetAppTitle(const Aws::String& value) { m_appTitleHasBeenSet = true; m_appTitle = value; }
    inline void SetAppTitle(Aws::String&& value) { m_appTitleHasBeenSet = true; m_appTitle = std::move(value); }
    inline void SetAppTitle(const char* value) { m_appTitleHasBeenSet = true; m_appTitle.assign(value); }
    inline Event& WithAppTitle(const Aws::String& value) { SetAppTitle(value); return *this;}
    inline Event& WithAppTitle(Aws::String&& value) { SetAppTitle(std::move(value)); return *this;}
    inline Event& WithAppTitle(const char* value) { SetAppTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the app that's recording the event.</p>
     */
    inline const Aws::String& GetAppVersionCode() const{ return m_appVersionCode; }
    inline bool AppVersionCodeHasBeenSet() const { return m_appVersionCodeHasBeenSet; }
    inline void SetAppVersionCode(const Aws::String& value) { m_appVersionCodeHasBeenSet = true; m_appVersionCode = value; }
    inline void SetAppVersionCode(Aws::String&& value) { m_appVersionCodeHasBeenSet = true; m_appVersionCode = std::move(value); }
    inline void SetAppVersionCode(const char* value) { m_appVersionCodeHasBeenSet = true; m_appVersionCode.assign(value); }
    inline Event& WithAppVersionCode(const Aws::String& value) { SetAppVersionCode(value); return *this;}
    inline Event& WithAppVersionCode(Aws::String&& value) { SetAppVersionCode(std::move(value)); return *this;}
    inline Event& WithAppVersionCode(const char* value) { SetAppVersionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom attributes that are associated with the event.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Event& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline Event& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Event& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline Event& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Event& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline Event& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Event& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline Event& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Event& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the SDK that's running on the client device.</p>
     */
    inline const Aws::String& GetClientSdkVersion() const{ return m_clientSdkVersion; }
    inline bool ClientSdkVersionHasBeenSet() const { return m_clientSdkVersionHasBeenSet; }
    inline void SetClientSdkVersion(const Aws::String& value) { m_clientSdkVersionHasBeenSet = true; m_clientSdkVersion = value; }
    inline void SetClientSdkVersion(Aws::String&& value) { m_clientSdkVersionHasBeenSet = true; m_clientSdkVersion = std::move(value); }
    inline void SetClientSdkVersion(const char* value) { m_clientSdkVersionHasBeenSet = true; m_clientSdkVersion.assign(value); }
    inline Event& WithClientSdkVersion(const Aws::String& value) { SetClientSdkVersion(value); return *this;}
    inline Event& WithClientSdkVersion(Aws::String&& value) { SetClientSdkVersion(std::move(value)); return *this;}
    inline Event& WithClientSdkVersion(const char* value) { SetClientSdkVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline Event& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline Event& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline Event& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom metrics that are associated with the event.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline Event& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}
    inline Event& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}
    inline Event& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    inline Event& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }
    inline Event& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the SDK that's being used to record the event.</p>
     */
    inline const Aws::String& GetSdkName() const{ return m_sdkName; }
    inline bool SdkNameHasBeenSet() const { return m_sdkNameHasBeenSet; }
    inline void SetSdkName(const Aws::String& value) { m_sdkNameHasBeenSet = true; m_sdkName = value; }
    inline void SetSdkName(Aws::String&& value) { m_sdkNameHasBeenSet = true; m_sdkName = std::move(value); }
    inline void SetSdkName(const char* value) { m_sdkNameHasBeenSet = true; m_sdkName.assign(value); }
    inline Event& WithSdkName(const Aws::String& value) { SetSdkName(value); return *this;}
    inline Event& WithSdkName(Aws::String&& value) { SetSdkName(std::move(value)); return *this;}
    inline Event& WithSdkName(const char* value) { SetSdkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the session in which the event occurred.</p>
     */
    inline const Session& GetSession() const{ return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    inline void SetSession(const Session& value) { m_sessionHasBeenSet = true; m_session = value; }
    inline void SetSession(Session&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }
    inline Event& WithSession(const Session& value) { SetSession(value); return *this;}
    inline Event& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the event occurred.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }
    inline Event& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}
    inline Event& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}
    inline Event& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}
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
