﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/M2tsSettings.h>
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
   * Udp Container Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UdpContainerSettings">AWS
   * API Reference</a></p>
   */
  class UdpContainerSettings
  {
  public:
    AWS_MEDIALIVE_API UdpContainerSettings() = default;
    AWS_MEDIALIVE_API UdpContainerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API UdpContainerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const M2tsSettings& GetM2tsSettings() const { return m_m2tsSettings; }
    inline bool M2tsSettingsHasBeenSet() const { return m_m2tsSettingsHasBeenSet; }
    template<typename M2tsSettingsT = M2tsSettings>
    void SetM2tsSettings(M2tsSettingsT&& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = std::forward<M2tsSettingsT>(value); }
    template<typename M2tsSettingsT = M2tsSettings>
    UdpContainerSettings& WithM2tsSettings(M2tsSettingsT&& value) { SetM2tsSettings(std::forward<M2tsSettingsT>(value)); return *this;}
    ///@}
  private:

    M2tsSettings m_m2tsSettings;
    bool m_m2tsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
