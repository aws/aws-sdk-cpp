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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/OutputGroupType.h>
#include <aws/mediaconvert/model/FrameMetricType.h>
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
     * Optionally choose one or more per frame metric reports to generate along with
     * your output. You can use these metrics to analyze your video output according to
     * one or more commonly used image quality metrics. You can specify per frame
     * metrics for output groups or for individual outputs. When you do, MediaConvert
     * writes a CSV (Comma-Separated Values) file to your S3 output destination, named
     * after the output name and metric type. For example: videofile_PSNR.csv Jobs that
     * generate per frame metrics will take longer to complete, depending on the
     * resolution and complexity of your output. For example, some 4K jobs might take
     * up to twice as long to complete. Note that when analyzing the video quality of
     * your output, or when comparing the video quality of multiple different outputs,
     * we generally also recommend a detailed visual review in a controlled
     * environment. You can choose from the following per frame metrics: * PSNR: Peak
     * Signal-to-Noise Ratio * SSIM: Structural Similarity Index Measure * MS_SSIM:
     * Multi-Scale Similarity Index Measure * PSNR_HVS: Peak Signal-to-Noise Ratio,
     * Human Visual System * VMAF: Video Multi-Method Assessment Fusion * QVBR:
     * Quality-Defined Variable Bitrate. This option is only available when your output
     * uses the QVBR rate control mode.
     */
    inline const Aws::Vector<FrameMetricType>& GetPerFrameMetrics() const { return m_perFrameMetrics; }
    inline bool PerFrameMetricsHasBeenSet() const { return m_perFrameMetricsHasBeenSet; }
    template<typename PerFrameMetricsT = Aws::Vector<FrameMetricType>>
    void SetPerFrameMetrics(PerFrameMetricsT&& value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics = std::forward<PerFrameMetricsT>(value); }
    template<typename PerFrameMetricsT = Aws::Vector<FrameMetricType>>
    OutputGroupSettings& WithPerFrameMetrics(PerFrameMetricsT&& value) { SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value)); return *this;}
    inline OutputGroupSettings& AddPerFrameMetrics(FrameMetricType value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics.push_back(value); return *this; }
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

    Aws::Vector<FrameMetricType> m_perFrameMetrics;
    bool m_perFrameMetricsHasBeenSet = false;

    OutputGroupType m_type{OutputGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
