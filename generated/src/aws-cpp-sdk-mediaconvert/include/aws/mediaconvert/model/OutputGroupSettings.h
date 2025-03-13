/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CmafGroupSettings.h>
#include <aws/mediaconvert/model/DashIsoGroupSettings.h>
#include <aws/mediaconvert/model/FileGroupSettings.h>
#include <aws/mediaconvert/model/HlsGroupSettings.h>
#include <aws/mediaconvert/model/MsSmoothGroupSettings.h>
#include <aws/mediaconvert/model/OutputGroupType.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Output Group settings, including type<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputGroupSettings">AWS
   * API Reference</a></p>
   */
  class OutputGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API OutputGroupSettings() = default;
    AWS_MEDIACONVERT_API OutputGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Settings related to your CMAF output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.
     */
    inline const CmafGroupSettings& GetCmafGroupSettings() const { return m_cmafGroupSettings; }
    inline bool CmafGroupSettingsHasBeenSet() const { return m_cmafGroupSettingsHasBeenSet; }
    template<typename CmafGroupSettingsT = CmafGroupSettings>
    void SetCmafGroupSettings(CmafGroupSettingsT&& value) { m_cmafGroupSettingsHasBeenSet = true; m_cmafGroupSettings = std::forward<CmafGroupSettingsT>(value); }
    template<typename CmafGroupSettingsT = CmafGroupSettings>
    OutputGroupSettings& WithCmafGroupSettings(CmafGroupSettingsT&& value) { SetCmafGroupSettings(std::forward<CmafGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to your DASH output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.
     */
    inline const DashIsoGroupSettings& GetDashIsoGroupSettings() const { return m_dashIsoGroupSettings; }
    inline bool DashIsoGroupSettingsHasBeenSet() const { return m_dashIsoGroupSettingsHasBeenSet; }
    template<typename DashIsoGroupSettingsT = DashIsoGroupSettings>
    void SetDashIsoGroupSettings(DashIsoGroupSettingsT&& value) { m_dashIsoGroupSettingsHasBeenSet = true; m_dashIsoGroupSettings = std::forward<DashIsoGroupSettingsT>(value); }
    template<typename DashIsoGroupSettingsT = DashIsoGroupSettings>
    OutputGroupSettings& WithDashIsoGroupSettings(DashIsoGroupSettingsT&& value) { SetDashIsoGroupSettings(std::forward<DashIsoGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to your File output group. MediaConvert uses this group of
     * settings to generate a single standalone file, rather than a streaming package.
     */
    inline const FileGroupSettings& GetFileGroupSettings() const { return m_fileGroupSettings; }
    inline bool FileGroupSettingsHasBeenSet() const { return m_fileGroupSettingsHasBeenSet; }
    template<typename FileGroupSettingsT = FileGroupSettings>
    void SetFileGroupSettings(FileGroupSettingsT&& value) { m_fileGroupSettingsHasBeenSet = true; m_fileGroupSettings = std::forward<FileGroupSettingsT>(value); }
    template<typename FileGroupSettingsT = FileGroupSettings>
    OutputGroupSettings& WithFileGroupSettings(FileGroupSettingsT&& value) { SetFileGroupSettings(std::forward<FileGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to your HLS output package. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.
     */
    inline const HlsGroupSettings& GetHlsGroupSettings() const { return m_hlsGroupSettings; }
    inline bool HlsGroupSettingsHasBeenSet() const { return m_hlsGroupSettingsHasBeenSet; }
    template<typename HlsGroupSettingsT = HlsGroupSettings>
    void SetHlsGroupSettings(HlsGroupSettingsT&& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = std::forward<HlsGroupSettingsT>(value); }
    template<typename HlsGroupSettingsT = HlsGroupSettings>
    OutputGroupSettings& WithHlsGroupSettings(HlsGroupSettingsT&& value) { SetHlsGroupSettings(std::forward<HlsGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to your Microsoft Smooth Streaming output package. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.
     */
    inline const MsSmoothGroupSettings& GetMsSmoothGroupSettings() const { return m_msSmoothGroupSettings; }
    inline bool MsSmoothGroupSettingsHasBeenSet() const { return m_msSmoothGroupSettingsHasBeenSet; }
    template<typename MsSmoothGroupSettingsT = MsSmoothGroupSettings>
    void SetMsSmoothGroupSettings(MsSmoothGroupSettingsT&& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = std::forward<MsSmoothGroupSettingsT>(value); }
    template<typename MsSmoothGroupSettingsT = MsSmoothGroupSettings>
    OutputGroupSettings& WithMsSmoothGroupSettings(MsSmoothGroupSettingsT&& value) { SetMsSmoothGroupSettings(std::forward<MsSmoothGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Type of output group (File group, Apple HLS, DASH ISO, Microsoft Smooth
     * Streaming, CMAF)
     */
    inline OutputGroupType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OutputGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OutputGroupSettings& WithType(OutputGroupType value) { SetType(value); return *this;}
    ///@}
  private:

    CmafGroupSettings m_cmafGroupSettings;
    bool m_cmafGroupSettingsHasBeenSet = false;

    DashIsoGroupSettings m_dashIsoGroupSettings;
    bool m_dashIsoGroupSettingsHasBeenSet = false;

    FileGroupSettings m_fileGroupSettings;
    bool m_fileGroupSettingsHasBeenSet = false;

    HlsGroupSettings m_hlsGroupSettings;
    bool m_hlsGroupSettingsHasBeenSet = false;

    MsSmoothGroupSettings m_msSmoothGroupSettings;
    bool m_msSmoothGroupSettingsHasBeenSet = false;

    OutputGroupType m_type{OutputGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
