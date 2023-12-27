/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ScteHls.h>
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
    AWS_MEDIAPACKAGEV2_API CreateHlsManifestConfiguration();
    AWS_MEDIAPACKAGEV2_API CreateHlsManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API CreateHlsManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline CreateHlsManifestConfiguration& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline CreateHlsManifestConfiguration& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline CreateHlsManifestConfiguration& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline const Aws::String& GetChildManifestName() const{ return m_childManifestName; }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline bool ChildManifestNameHasBeenSet() const { return m_childManifestNameHasBeenSet; }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline void SetChildManifestName(const Aws::String& value) { m_childManifestNameHasBeenSet = true; m_childManifestName = value; }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline void SetChildManifestName(Aws::String&& value) { m_childManifestNameHasBeenSet = true; m_childManifestName = std::move(value); }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline void SetChildManifestName(const char* value) { m_childManifestNameHasBeenSet = true; m_childManifestName.assign(value); }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline CreateHlsManifestConfiguration& WithChildManifestName(const Aws::String& value) { SetChildManifestName(value); return *this;}

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline CreateHlsManifestConfiguration& WithChildManifestName(Aws::String&& value) { SetChildManifestName(std::move(value)); return *this;}

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index, with an added suffix to distinguish it
     * from the manifest name. The manifestName on the HLSManifest object overrides the
     * manifestName you provided on the originEndpoint object.</p>
     */
    inline CreateHlsManifestConfiguration& WithChildManifestName(const char* value) { SetChildManifestName(value); return *this;}


    
    inline const ScteHls& GetScteHls() const{ return m_scteHls; }

    
    inline bool ScteHlsHasBeenSet() const { return m_scteHlsHasBeenSet; }

    
    inline void SetScteHls(const ScteHls& value) { m_scteHlsHasBeenSet = true; m_scteHls = value; }

    
    inline void SetScteHls(ScteHls&& value) { m_scteHlsHasBeenSet = true; m_scteHls = std::move(value); }

    
    inline CreateHlsManifestConfiguration& WithScteHls(const ScteHls& value) { SetScteHls(value); return *this;}

    
    inline CreateHlsManifestConfiguration& WithScteHls(ScteHls&& value) { SetScteHls(std::move(value)); return *this;}


    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline int GetManifestWindowSeconds() const{ return m_manifestWindowSeconds; }

    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }

    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }

    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline CreateHlsManifestConfiguration& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}


    /**
     * <p>Inserts EXT-X-PROGRAM-DATE-TIME tags in the output manifest at the interval
     * that you specify. If you don't enter an interval, EXT-X-PROGRAM-DATE-TIME tags
     * aren't included in the manifest. The tags sync the stream to the wall clock so
     * that viewers can seek to a specific time in the playback timeline on the player.
     * ID3Timed metadata messages generate every 5 seconds whenever the content is
     * ingested.</p> <p>Irrespective of this parameter, if any ID3Timed metadata is in
     * the HLS input, it is passed through to the HLS output.</p>
     */
    inline int GetProgramDateTimeIntervalSeconds() const{ return m_programDateTimeIntervalSeconds; }

    /**
     * <p>Inserts EXT-X-PROGRAM-DATE-TIME tags in the output manifest at the interval
     * that you specify. If you don't enter an interval, EXT-X-PROGRAM-DATE-TIME tags
     * aren't included in the manifest. The tags sync the stream to the wall clock so
     * that viewers can seek to a specific time in the playback timeline on the player.
     * ID3Timed metadata messages generate every 5 seconds whenever the content is
     * ingested.</p> <p>Irrespective of this parameter, if any ID3Timed metadata is in
     * the HLS input, it is passed through to the HLS output.</p>
     */
    inline bool ProgramDateTimeIntervalSecondsHasBeenSet() const { return m_programDateTimeIntervalSecondsHasBeenSet; }

    /**
     * <p>Inserts EXT-X-PROGRAM-DATE-TIME tags in the output manifest at the interval
     * that you specify. If you don't enter an interval, EXT-X-PROGRAM-DATE-TIME tags
     * aren't included in the manifest. The tags sync the stream to the wall clock so
     * that viewers can seek to a specific time in the playback timeline on the player.
     * ID3Timed metadata messages generate every 5 seconds whenever the content is
     * ingested.</p> <p>Irrespective of this parameter, if any ID3Timed metadata is in
     * the HLS input, it is passed through to the HLS output.</p>
     */
    inline void SetProgramDateTimeIntervalSeconds(int value) { m_programDateTimeIntervalSecondsHasBeenSet = true; m_programDateTimeIntervalSeconds = value; }

    /**
     * <p>Inserts EXT-X-PROGRAM-DATE-TIME tags in the output manifest at the interval
     * that you specify. If you don't enter an interval, EXT-X-PROGRAM-DATE-TIME tags
     * aren't included in the manifest. The tags sync the stream to the wall clock so
     * that viewers can seek to a specific time in the playback timeline on the player.
     * ID3Timed metadata messages generate every 5 seconds whenever the content is
     * ingested.</p> <p>Irrespective of this parameter, if any ID3Timed metadata is in
     * the HLS input, it is passed through to the HLS output.</p>
     */
    inline CreateHlsManifestConfiguration& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}


    
    inline const FilterConfiguration& GetFilterConfiguration() const{ return m_filterConfiguration; }

    
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }

    
    inline void SetFilterConfiguration(const FilterConfiguration& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = value; }

    
    inline void SetFilterConfiguration(FilterConfiguration&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::move(value); }

    
    inline CreateHlsManifestConfiguration& WithFilterConfiguration(const FilterConfiguration& value) { SetFilterConfiguration(value); return *this;}

    
    inline CreateHlsManifestConfiguration& WithFilterConfiguration(FilterConfiguration&& value) { SetFilterConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_childManifestName;
    bool m_childManifestNameHasBeenSet = false;

    ScteHls m_scteHls;
    bool m_scteHlsHasBeenSet = false;

    int m_manifestWindowSeconds;
    bool m_manifestWindowSecondsHasBeenSet = false;

    int m_programDateTimeIntervalSeconds;
    bool m_programDateTimeIntervalSecondsHasBeenSet = false;

    FilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
