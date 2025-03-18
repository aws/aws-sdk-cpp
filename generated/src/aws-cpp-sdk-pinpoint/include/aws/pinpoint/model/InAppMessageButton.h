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
    AWS_PINPOINT_API InAppMessageButton() = default;
    AWS_PINPOINT_API InAppMessageButton(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageButton& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Default button content.</p>
     */
    inline const OverrideButtonConfiguration& GetAndroid() const { return m_android; }
    inline bool AndroidHasBeenSet() const { return m_androidHasBeenSet; }
    template<typename AndroidT = OverrideButtonConfiguration>
    void SetAndroid(AndroidT&& value) { m_androidHasBeenSet = true; m_android = std::forward<AndroidT>(value); }
    template<typename AndroidT = OverrideButtonConfiguration>
    InAppMessageButton& WithAndroid(AndroidT&& value) { SetAndroid(std::forward<AndroidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default button content.</p>
     */
    inline const DefaultButtonConfiguration& GetDefaultConfig() const { return m_defaultConfig; }
    inline bool DefaultConfigHasBeenSet() const { return m_defaultConfigHasBeenSet; }
    template<typename DefaultConfigT = DefaultButtonConfiguration>
    void SetDefaultConfig(DefaultConfigT&& value) { m_defaultConfigHasBeenSet = true; m_defaultConfig = std::forward<DefaultConfigT>(value); }
    template<typename DefaultConfigT = DefaultButtonConfiguration>
    InAppMessageButton& WithDefaultConfig(DefaultConfigT&& value) { SetDefaultConfig(std::forward<DefaultConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default button content.</p>
     */
    inline const OverrideButtonConfiguration& GetIOS() const { return m_iOS; }
    inline bool IOSHasBeenSet() const { return m_iOSHasBeenSet; }
    template<typename IOST = OverrideButtonConfiguration>
    void SetIOS(IOST&& value) { m_iOSHasBeenSet = true; m_iOS = std::forward<IOST>(value); }
    template<typename IOST = OverrideButtonConfiguration>
    InAppMessageButton& WithIOS(IOST&& value) { SetIOS(std::forward<IOST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default button content.</p>
     */
    inline const OverrideButtonConfiguration& GetWeb() const { return m_web; }
    inline bool WebHasBeenSet() const { return m_webHasBeenSet; }
    template<typename WebT = OverrideButtonConfiguration>
    void SetWeb(WebT&& value) { m_webHasBeenSet = true; m_web = std::forward<WebT>(value); }
    template<typename WebT = OverrideButtonConfiguration>
    InAppMessageButton& WithWeb(WebT&& value) { SetWeb(std::forward<WebT>(value)); return *this;}
    ///@}
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
