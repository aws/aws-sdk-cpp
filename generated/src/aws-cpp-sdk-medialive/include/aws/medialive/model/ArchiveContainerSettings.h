/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/M2tsSettings.h>
#include <aws/medialive/model/RawSettings.h>
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
   * Archive Container Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ArchiveContainerSettings">AWS
   * API Reference</a></p>
   */
  class ArchiveContainerSettings
  {
  public:
    AWS_MEDIALIVE_API ArchiveContainerSettings() = default;
    AWS_MEDIALIVE_API ArchiveContainerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ArchiveContainerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const M2tsSettings& GetM2tsSettings() const { return m_m2tsSettings; }
    inline bool M2tsSettingsHasBeenSet() const { return m_m2tsSettingsHasBeenSet; }
    template<typename M2tsSettingsT = M2tsSettings>
    void SetM2tsSettings(M2tsSettingsT&& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = std::forward<M2tsSettingsT>(value); }
    template<typename M2tsSettingsT = M2tsSettings>
    ArchiveContainerSettings& WithM2tsSettings(M2tsSettingsT&& value) { SetM2tsSettings(std::forward<M2tsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RawSettings& GetRawSettings() const { return m_rawSettings; }
    inline bool RawSettingsHasBeenSet() const { return m_rawSettingsHasBeenSet; }
    template<typename RawSettingsT = RawSettings>
    void SetRawSettings(RawSettingsT&& value) { m_rawSettingsHasBeenSet = true; m_rawSettings = std::forward<RawSettingsT>(value); }
    template<typename RawSettingsT = RawSettings>
    ArchiveContainerSettings& WithRawSettings(RawSettingsT&& value) { SetRawSettings(std::forward<RawSettingsT>(value)); return *this;}
    ///@}
  private:

    M2tsSettings m_m2tsSettings;
    bool m_m2tsSettingsHasBeenSet = false;

    RawSettings m_rawSettings;
    bool m_rawSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
