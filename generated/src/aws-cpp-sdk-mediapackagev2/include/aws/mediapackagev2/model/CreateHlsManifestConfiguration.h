/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ScteHls.h>
#include <aws/mediapackagev2/model/StartTag.h>
#include <aws/mediapackagev2/model/FilterConfiguration.h>
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
   * <p>Create an HTTP live streaming (HLS) manifest configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateHlsManifestConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateHlsManifestConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateHlsManifestConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API CreateHlsManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API CreateHlsManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    CreateHlsManifestConfiguration& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline const Aws::String& GetChildManifestName() const { return m_childManifestName; }
    inline bool ChildManifestNameHasBeenSet() const { return m_childManifestNameHasBeenSet; }
    template<typename ChildManifestNameT = Aws::String>
    void SetChildManifestName(ChildManifestNameT&& value) { m_childManifestNameHasBeenSet = true; m_childManifestName = std::forward<ChildManifestNameT>(value); }
    template<typename ChildManifestNameT = Aws::String>
    CreateHlsManifestConfiguration& WithChildManifestName(ChildManifestNameT&& value) { SetChildManifestName(std::forward<ChildManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScteHls& GetScteHls() const { return m_scteHls; }
    inline bool ScteHlsHasBeenSet() const { return m_scteHlsHasBeenSet; }
    template<typename ScteHlsT = ScteHls>
    void SetScteHls(ScteHlsT&& value) { m_scteHlsHasBeenSet = true; m_scteHls = std::forward<ScteHlsT>(value); }
    template<typename ScteHlsT = ScteHls>
    CreateHlsManifestConfiguration& WithScteHls(ScteHlsT&& value) { SetScteHls(std::forward<ScteHlsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StartTag& GetStartTag() const { return m_startTag; }
    inline bool StartTagHasBeenSet() const { return m_startTagHasBeenSet; }
    template<typename StartTagT = StartTag>
    void SetStartTag(StartTagT&& value) { m_startTagHasBeenSet = true; m_startTag = std::forward<StartTagT>(value); }
    template<typename StartTagT = StartTag>
    CreateHlsManifestConfiguration& WithStartTag(StartTagT&& value) { SetStartTag(std::forward<StartTagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline int GetManifestWindowSeconds() const { return m_manifestWindowSeconds; }
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }
    inline CreateHlsManifestConfiguration& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inserts EXT-X-PROGRAM-DATE-TIME tags in the output manifest at the interval
     * that you specify. If you don't enter an interval, EXT-X-PROGRAM-DATE-TIME tags
     * aren't included in the manifest. The tags sync the stream to the wall clock so
     * that viewers can seek to a specific time in the playback timeline on the
     * player.</p> <p>Irrespective of this parameter, if any ID3Timed metadata is in
     * the HLS input, it is passed through to the HLS output.</p>
     */
    inline int GetProgramDateTimeIntervalSeconds() const { return m_programDateTimeIntervalSeconds; }
    inline bool ProgramDateTimeIntervalSecondsHasBeenSet() const { return m_programDateTimeIntervalSecondsHasBeenSet; }
    inline void SetProgramDateTimeIntervalSeconds(int value) { m_programDateTimeIntervalSecondsHasBeenSet = true; m_programDateTimeIntervalSeconds = value; }
    inline CreateHlsManifestConfiguration& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const FilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    template<typename FilterConfigurationT = FilterConfiguration>
    void SetFilterConfiguration(FilterConfigurationT&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::forward<FilterConfigurationT>(value); }
    template<typename FilterConfigurationT = FilterConfiguration>
    CreateHlsManifestConfiguration& WithFilterConfiguration(FilterConfigurationT&& value) { SetFilterConfiguration(std::forward<FilterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When enabled, MediaPackage URL-encodes the query string for API requests for
     * HLS child manifests to comply with Amazon Web Services Signature Version 4
     * (SigV4) signature signing protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_sigv.html">Amazon
     * Web Services Signature Version 4 for API requests</a> in <i>Identity and Access
     * Management User Guide</i>.</p>
     */
    inline bool GetUrlEncodeChildManifest() const { return m_urlEncodeChildManifest; }
    inline bool UrlEncodeChildManifestHasBeenSet() const { return m_urlEncodeChildManifestHasBeenSet; }
    inline void SetUrlEncodeChildManifest(bool value) { m_urlEncodeChildManifestHasBeenSet = true; m_urlEncodeChildManifest = value; }
    inline CreateHlsManifestConfiguration& WithUrlEncodeChildManifest(bool value) { SetUrlEncodeChildManifest(value); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_childManifestName;
    bool m_childManifestNameHasBeenSet = false;

    ScteHls m_scteHls;
    bool m_scteHlsHasBeenSet = false;

    StartTag m_startTag;
    bool m_startTagHasBeenSet = false;

    int m_manifestWindowSeconds{0};
    bool m_manifestWindowSecondsHasBeenSet = false;

    int m_programDateTimeIntervalSeconds{0};
    bool m_programDateTimeIntervalSecondsHasBeenSet = false;

    FilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;

    bool m_urlEncodeChildManifest{false};
    bool m_urlEncodeChildManifestHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
