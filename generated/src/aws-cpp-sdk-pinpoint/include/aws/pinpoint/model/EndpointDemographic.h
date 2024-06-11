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
   * <p>Specifies demographic information about an endpoint, such as the applicable
   * time zone and platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointDemographic">AWS
   * API Reference</a></p>
   */
  class EndpointDemographic
  {
  public:
    AWS_PINPOINT_API EndpointDemographic();
    AWS_PINPOINT_API EndpointDemographic(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointDemographic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }
    inline EndpointDemographic& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline EndpointDemographic& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline EndpointDemographic& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline EndpointDemographic& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline EndpointDemographic& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline EndpointDemographic& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manufacturer of the endpoint device, such as apple or samsung.</p>
     */
    inline const Aws::String& GetMake() const{ return m_make; }
    inline bool MakeHasBeenSet() const { return m_makeHasBeenSet; }
    inline void SetMake(const Aws::String& value) { m_makeHasBeenSet = true; m_make = value; }
    inline void SetMake(Aws::String&& value) { m_makeHasBeenSet = true; m_make = std::move(value); }
    inline void SetMake(const char* value) { m_makeHasBeenSet = true; m_make.assign(value); }
    inline EndpointDemographic& WithMake(const Aws::String& value) { SetMake(value); return *this;}
    inline EndpointDemographic& WithMake(Aws::String&& value) { SetMake(std::move(value)); return *this;}
    inline EndpointDemographic& WithMake(const char* value) { SetMake(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model name or number of the endpoint device, such as iPhone or
     * SM-G900F.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline EndpointDemographic& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline EndpointDemographic& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline EndpointDemographic& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }
    inline EndpointDemographic& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline EndpointDemographic& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline EndpointDemographic& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the endpoint device, such as ios.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline EndpointDemographic& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline EndpointDemographic& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline EndpointDemographic& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline EndpointDemographic& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline EndpointDemographic& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline EndpointDemographic& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline EndpointDemographic& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline EndpointDemographic& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline EndpointDemographic& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}
  private:

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_make;
    bool m_makeHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
