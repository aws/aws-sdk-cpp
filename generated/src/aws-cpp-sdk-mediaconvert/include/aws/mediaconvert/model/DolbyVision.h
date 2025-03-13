/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DolbyVisionLevel6Metadata.h>
#include <aws/mediaconvert/model/DolbyVisionLevel6Mode.h>
#include <aws/mediaconvert/model/DolbyVisionMapping.h>
#include <aws/mediaconvert/model/DolbyVisionProfile.h>
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
   * Create Dolby Vision Profile 5 or Profile 8.1 compatible video output.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DolbyVision">AWS
   * API Reference</a></p>
   */
  class DolbyVision
  {
  public:
    AWS_MEDIACONVERT_API DolbyVision() = default;
    AWS_MEDIACONVERT_API DolbyVision(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DolbyVision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
     * MaxCLL and MaxFALL values in your input with new values.
     */
    inline const DolbyVisionLevel6Metadata& GetL6Metadata() const { return m_l6Metadata; }
    inline bool L6MetadataHasBeenSet() const { return m_l6MetadataHasBeenSet; }
    template<typename L6MetadataT = DolbyVisionLevel6Metadata>
    void SetL6Metadata(L6MetadataT&& value) { m_l6MetadataHasBeenSet = true; m_l6Metadata = std::forward<L6MetadataT>(value); }
    template<typename L6MetadataT = DolbyVisionLevel6Metadata>
    DolbyVision& WithL6Metadata(L6MetadataT&& value) { SetL6Metadata(std::forward<L6MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Dolby Vision Mode to choose how the service will handle Dolby Vision MaxCLL
     * and MaxFALL properies.
     */
    inline DolbyVisionLevel6Mode GetL6Mode() const { return m_l6Mode; }
    inline bool L6ModeHasBeenSet() const { return m_l6ModeHasBeenSet; }
    inline void SetL6Mode(DolbyVisionLevel6Mode value) { m_l6ModeHasBeenSet = true; m_l6Mode = value; }
    inline DolbyVision& WithL6Mode(DolbyVisionLevel6Mode value) { SetL6Mode(value); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Dolby Vision Profile to Profile 8.1. When you set Content
     * mapping to None, content mapping is not applied to the HDR10-compatible signal.
     * Depending on the source peak nit level, clipping might occur on HDR devices
     * without Dolby Vision. When you set Content mapping to HDR10 1000, the transcoder
     * creates a 1,000 nits peak HDR10-compatible signal by applying static content
     * mapping to the source. This mode is speed-optimized for PQ10 sources with
     * metadata that is created from analysis. For graded Dolby Vision content, be
     * aware that creative intent might not be guaranteed with extreme 1,000 nits
     * trims.
     */
    inline DolbyVisionMapping GetMapping() const { return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    inline void SetMapping(DolbyVisionMapping value) { m_mappingHasBeenSet = true; m_mapping = value; }
    inline DolbyVision& WithMapping(DolbyVisionMapping value) { SetMapping(value); return *this;}
    ///@}

    ///@{
    /**
     * Required when you enable Dolby Vision. Use Profile 5 to include
     * frame-interleaved Dolby Vision metadata in your output. Your input must include
     * Dolby Vision metadata or an HDR10 YUV color space. Use Profile 8.1 to include
     * frame-interleaved Dolby Vision metadata and HDR10 metadata in your output. Your
     * input must include Dolby Vision metadata.
     */
    inline DolbyVisionProfile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(DolbyVisionProfile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline DolbyVision& WithProfile(DolbyVisionProfile value) { SetProfile(value); return *this;}
    ///@}
  private:

    DolbyVisionLevel6Metadata m_l6Metadata;
    bool m_l6MetadataHasBeenSet = false;

    DolbyVisionLevel6Mode m_l6Mode{DolbyVisionLevel6Mode::NOT_SET};
    bool m_l6ModeHasBeenSet = false;

    DolbyVisionMapping m_mapping{DolbyVisionMapping::NOT_SET};
    bool m_mappingHasBeenSet = false;

    DolbyVisionProfile m_profile{DolbyVisionProfile::NOT_SET};
    bool m_profileHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
