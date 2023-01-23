/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/WatermarkingStrength.h>
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
   * For forensic video watermarking, MediaConvert supports Nagra NexGuard File
   * Marker watermarking. MediaConvert supports both PreRelease Content (NGPR/G2) and
   * OTT Streaming workflows.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NexGuardFileMarkerSettings">AWS
   * API Reference</a></p>
   */
  class NexGuardFileMarkerSettings
  {
  public:
    AWS_MEDIACONVERT_API NexGuardFileMarkerSettings();
    AWS_MEDIACONVERT_API NexGuardFileMarkerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NexGuardFileMarkerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline const Aws::String& GetLicense() const{ return m_license; }

    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline bool LicenseHasBeenSet() const { return m_licenseHasBeenSet; }

    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline void SetLicense(const Aws::String& value) { m_licenseHasBeenSet = true; m_license = value; }

    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline void SetLicense(Aws::String&& value) { m_licenseHasBeenSet = true; m_license = std::move(value); }

    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline void SetLicense(const char* value) { m_licenseHasBeenSet = true; m_license.assign(value); }

    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline NexGuardFileMarkerSettings& WithLicense(const Aws::String& value) { SetLicense(value); return *this;}

    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline NexGuardFileMarkerSettings& WithLicense(Aws::String&& value) { SetLicense(std::move(value)); return *this;}

    /**
     * Use the base64 license string that Nagra provides you. Enter it directly in your
     * JSON job specification or in the console. Required when you include Nagra
     * NexGuard File Marker watermarking (NexGuardWatermarkingSettings) in your job.
     */
    inline NexGuardFileMarkerSettings& WithLicense(const char* value) { SetLicense(value); return *this;}


    /**
     * Specify the payload ID that you want associated with this output. Valid values
     * vary depending on your Nagra NexGuard forensic watermarking workflow. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job. For PreRelease Content (NGPR/G2),
     * specify an integer from 1 through 4,194,303. You must generate a unique ID for
     * each asset you watermark, and keep a record of which ID you have assigned to
     * each asset. Neither Nagra nor MediaConvert keep track of the relationship
     * between output files and your IDs. For OTT Streaming, create two adaptive
     * bitrate (ABR) stacks for each asset. Do this by setting up two output groups.
     * For one output group, set the value of Payload ID (payload) to 0 in every
     * output. For the other output group, set Payload ID (payload) to 1 in every
     * output.
     */
    inline int GetPayload() const{ return m_payload; }

    /**
     * Specify the payload ID that you want associated with this output. Valid values
     * vary depending on your Nagra NexGuard forensic watermarking workflow. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job. For PreRelease Content (NGPR/G2),
     * specify an integer from 1 through 4,194,303. You must generate a unique ID for
     * each asset you watermark, and keep a record of which ID you have assigned to
     * each asset. Neither Nagra nor MediaConvert keep track of the relationship
     * between output files and your IDs. For OTT Streaming, create two adaptive
     * bitrate (ABR) stacks for each asset. Do this by setting up two output groups.
     * For one output group, set the value of Payload ID (payload) to 0 in every
     * output. For the other output group, set Payload ID (payload) to 1 in every
     * output.
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * Specify the payload ID that you want associated with this output. Valid values
     * vary depending on your Nagra NexGuard forensic watermarking workflow. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job. For PreRelease Content (NGPR/G2),
     * specify an integer from 1 through 4,194,303. You must generate a unique ID for
     * each asset you watermark, and keep a record of which ID you have assigned to
     * each asset. Neither Nagra nor MediaConvert keep track of the relationship
     * between output files and your IDs. For OTT Streaming, create two adaptive
     * bitrate (ABR) stacks for each asset. Do this by setting up two output groups.
     * For one output group, set the value of Payload ID (payload) to 0 in every
     * output. For the other output group, set Payload ID (payload) to 1 in every
     * output.
     */
    inline void SetPayload(int value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * Specify the payload ID that you want associated with this output. Valid values
     * vary depending on your Nagra NexGuard forensic watermarking workflow. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job. For PreRelease Content (NGPR/G2),
     * specify an integer from 1 through 4,194,303. You must generate a unique ID for
     * each asset you watermark, and keep a record of which ID you have assigned to
     * each asset. Neither Nagra nor MediaConvert keep track of the relationship
     * between output files and your IDs. For OTT Streaming, create two adaptive
     * bitrate (ABR) stacks for each asset. Do this by setting up two output groups.
     * For one output group, set the value of Payload ID (payload) to 0 in every
     * output. For the other output group, set Payload ID (payload) to 1 in every
     * output.
     */
    inline NexGuardFileMarkerSettings& WithPayload(int value) { SetPayload(value); return *this;}


    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline const Aws::String& GetPreset() const{ return m_preset; }

    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline bool PresetHasBeenSet() const { return m_presetHasBeenSet; }

    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline void SetPreset(const Aws::String& value) { m_presetHasBeenSet = true; m_preset = value; }

    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline void SetPreset(Aws::String&& value) { m_presetHasBeenSet = true; m_preset = std::move(value); }

    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline void SetPreset(const char* value) { m_presetHasBeenSet = true; m_preset.assign(value); }

    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline NexGuardFileMarkerSettings& WithPreset(const Aws::String& value) { SetPreset(value); return *this;}

    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline NexGuardFileMarkerSettings& WithPreset(Aws::String&& value) { SetPreset(std::move(value)); return *this;}

    /**
     * Enter one of the watermarking preset strings that Nagra provides you. Required
     * when you include Nagra NexGuard File Marker watermarking
     * (NexGuardWatermarkingSettings) in your job.
     */
    inline NexGuardFileMarkerSettings& WithPreset(const char* value) { SetPreset(value); return *this;}


    /**
     * Optional. Ignore this setting unless Nagra support directs you to specify a
     * value. When you don't specify a value here, the Nagra NexGuard library uses its
     * default value.
     */
    inline const WatermarkingStrength& GetStrength() const{ return m_strength; }

    /**
     * Optional. Ignore this setting unless Nagra support directs you to specify a
     * value. When you don't specify a value here, the Nagra NexGuard library uses its
     * default value.
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Optional. Ignore this setting unless Nagra support directs you to specify a
     * value. When you don't specify a value here, the Nagra NexGuard library uses its
     * default value.
     */
    inline void SetStrength(const WatermarkingStrength& value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Optional. Ignore this setting unless Nagra support directs you to specify a
     * value. When you don't specify a value here, the Nagra NexGuard library uses its
     * default value.
     */
    inline void SetStrength(WatermarkingStrength&& value) { m_strengthHasBeenSet = true; m_strength = std::move(value); }

    /**
     * Optional. Ignore this setting unless Nagra support directs you to specify a
     * value. When you don't specify a value here, the Nagra NexGuard library uses its
     * default value.
     */
    inline NexGuardFileMarkerSettings& WithStrength(const WatermarkingStrength& value) { SetStrength(value); return *this;}

    /**
     * Optional. Ignore this setting unless Nagra support directs you to specify a
     * value. When you don't specify a value here, the Nagra NexGuard library uses its
     * default value.
     */
    inline NexGuardFileMarkerSettings& WithStrength(WatermarkingStrength&& value) { SetStrength(std::move(value)); return *this;}

  private:

    Aws::String m_license;
    bool m_licenseHasBeenSet = false;

    int m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_preset;
    bool m_presetHasBeenSet = false;

    WatermarkingStrength m_strength;
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
