/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/DashDvbFontDownload.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/DashDvbMetricsReporting.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>For endpoints that use the DVB-DASH profile only. The font download and error
   * reporting information that you want MediaPackage to pass through to the
   * manifest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashDvbSettings">AWS
   * API Reference</a></p>
   */
  class DashDvbSettings
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashDvbSettings() = default;
    AWS_MEDIAPACKAGEV2_API DashDvbSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashDvbSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Subtitle font settings.</p>
     */
    inline const DashDvbFontDownload& GetFontDownload() const { return m_fontDownload; }
    inline bool FontDownloadHasBeenSet() const { return m_fontDownloadHasBeenSet; }
    template<typename FontDownloadT = DashDvbFontDownload>
    void SetFontDownload(FontDownloadT&& value) { m_fontDownloadHasBeenSet = true; m_fontDownload = std::forward<FontDownloadT>(value); }
    template<typename FontDownloadT = DashDvbFontDownload>
    DashDvbSettings& WithFontDownload(FontDownloadT&& value) { SetFontDownload(std::forward<FontDownloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Playback device error reporting settings.</p>
     */
    inline const Aws::Vector<DashDvbMetricsReporting>& GetErrorMetrics() const { return m_errorMetrics; }
    inline bool ErrorMetricsHasBeenSet() const { return m_errorMetricsHasBeenSet; }
    template<typename ErrorMetricsT = Aws::Vector<DashDvbMetricsReporting>>
    void SetErrorMetrics(ErrorMetricsT&& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics = std::forward<ErrorMetricsT>(value); }
    template<typename ErrorMetricsT = Aws::Vector<DashDvbMetricsReporting>>
    DashDvbSettings& WithErrorMetrics(ErrorMetricsT&& value) { SetErrorMetrics(std::forward<ErrorMetricsT>(value)); return *this;}
    template<typename ErrorMetricsT = DashDvbMetricsReporting>
    DashDvbSettings& AddErrorMetrics(ErrorMetricsT&& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics.emplace_back(std::forward<ErrorMetricsT>(value)); return *this; }
    ///@}
  private:

    DashDvbFontDownload m_fontDownload;
    bool m_fontDownloadHasBeenSet = false;

    Aws::Vector<DashDvbMetricsReporting> m_errorMetrics;
    bool m_errorMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
