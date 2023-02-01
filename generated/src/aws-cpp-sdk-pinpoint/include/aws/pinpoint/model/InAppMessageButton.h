/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/OverrideButtonConfiguration.h>
#include <aws/pinpoint/model/DefaultButtonConfiguration.h>
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
   * <p>Button Config for an in-app message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessageButton">AWS
   * API Reference</a></p>
   */
  class InAppMessageButton
  {
  public:
    AWS_PINPOINT_API InAppMessageButton();
    AWS_PINPOINT_API InAppMessageButton(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageButton& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Default button content.</p>
     */
    inline const OverrideButtonConfiguration& GetAndroid() const{ return m_android; }

    /**
     * <p>Default button content.</p>
     */
    inline bool AndroidHasBeenSet() const { return m_androidHasBeenSet; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetAndroid(const OverrideButtonConfiguration& value) { m_androidHasBeenSet = true; m_android = value; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetAndroid(OverrideButtonConfiguration&& value) { m_androidHasBeenSet = true; m_android = std::move(value); }

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithAndroid(const OverrideButtonConfiguration& value) { SetAndroid(value); return *this;}

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithAndroid(OverrideButtonConfiguration&& value) { SetAndroid(std::move(value)); return *this;}


    /**
     * <p>Default button content.</p>
     */
    inline const DefaultButtonConfiguration& GetDefaultConfig() const{ return m_defaultConfig; }

    /**
     * <p>Default button content.</p>
     */
    inline bool DefaultConfigHasBeenSet() const { return m_defaultConfigHasBeenSet; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetDefaultConfig(const DefaultButtonConfiguration& value) { m_defaultConfigHasBeenSet = true; m_defaultConfig = value; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetDefaultConfig(DefaultButtonConfiguration&& value) { m_defaultConfigHasBeenSet = true; m_defaultConfig = std::move(value); }

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithDefaultConfig(const DefaultButtonConfiguration& value) { SetDefaultConfig(value); return *this;}

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithDefaultConfig(DefaultButtonConfiguration&& value) { SetDefaultConfig(std::move(value)); return *this;}


    /**
     * <p>Default button content.</p>
     */
    inline const OverrideButtonConfiguration& GetIOS() const{ return m_iOS; }

    /**
     * <p>Default button content.</p>
     */
    inline bool IOSHasBeenSet() const { return m_iOSHasBeenSet; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetIOS(const OverrideButtonConfiguration& value) { m_iOSHasBeenSet = true; m_iOS = value; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetIOS(OverrideButtonConfiguration&& value) { m_iOSHasBeenSet = true; m_iOS = std::move(value); }

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithIOS(const OverrideButtonConfiguration& value) { SetIOS(value); return *this;}

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithIOS(OverrideButtonConfiguration&& value) { SetIOS(std::move(value)); return *this;}


    /**
     * <p>Default button content.</p>
     */
    inline const OverrideButtonConfiguration& GetWeb() const{ return m_web; }

    /**
     * <p>Default button content.</p>
     */
    inline bool WebHasBeenSet() const { return m_webHasBeenSet; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetWeb(const OverrideButtonConfiguration& value) { m_webHasBeenSet = true; m_web = value; }

    /**
     * <p>Default button content.</p>
     */
    inline void SetWeb(OverrideButtonConfiguration&& value) { m_webHasBeenSet = true; m_web = std::move(value); }

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithWeb(const OverrideButtonConfiguration& value) { SetWeb(value); return *this;}

    /**
     * <p>Default button content.</p>
     */
    inline InAppMessageButton& WithWeb(OverrideButtonConfiguration&& value) { SetWeb(std::move(value)); return *this;}

  private:

    OverrideButtonConfiguration m_android;
    bool m_androidHasBeenSet = false;

    DefaultButtonConfiguration m_defaultConfig;
    bool m_defaultConfigHasBeenSet = false;

    OverrideButtonConfiguration m_iOS;
    bool m_iOSHasBeenSet = false;

    OverrideButtonConfiguration m_web;
    bool m_webHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
