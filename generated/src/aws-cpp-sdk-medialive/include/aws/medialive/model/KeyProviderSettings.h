﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/StaticKeySettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Key Provider Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/KeyProviderSettings">AWS
   * API Reference</a></p>
   */
  class KeyProviderSettings
  {
  public:
    AWS_MEDIALIVE_API KeyProviderSettings() = default;
    AWS_MEDIALIVE_API KeyProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API KeyProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const StaticKeySettings& GetStaticKeySettings() const { return m_staticKeySettings; }
    inline bool StaticKeySettingsHasBeenSet() const { return m_staticKeySettingsHasBeenSet; }
    template<typename StaticKeySettingsT = StaticKeySettings>
    void SetStaticKeySettings(StaticKeySettingsT&& value) { m_staticKeySettingsHasBeenSet = true; m_staticKeySettings = std::forward<StaticKeySettingsT>(value); }
    template<typename StaticKeySettingsT = StaticKeySettings>
    KeyProviderSettings& WithStaticKeySettings(StaticKeySettingsT&& value) { SetStaticKeySettings(std::forward<StaticKeySettingsT>(value)); return *this;}
    ///@}
  private:

    StaticKeySettings m_staticKeySettings;
    bool m_staticKeySettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
