/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MxfXavcDurationMode.h>
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
   * Specify the XAVC profile settings for MXF outputs when you set your MXF profile
   * to XAVC.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MxfXavcProfileSettings">AWS
   * API Reference</a></p>
   */
  class MxfXavcProfileSettings
  {
  public:
    AWS_MEDIACONVERT_API MxfXavcProfileSettings();
    AWS_MEDIACONVERT_API MxfXavcProfileSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MxfXavcProfileSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * To create an output that complies with the XAVC file format guidelines for
     * interoperability, keep the default value, Drop frames for compliance
     * (DROP_FRAMES_FOR_COMPLIANCE). To include all frames from your input in this
     * output, keep the default setting, Allow any duration (ALLOW_ANY_DURATION). The
     * number of frames that MediaConvert excludes when you set this to Drop frames for
     * compliance depends on the output frame rate and duration.
     */
    inline const MxfXavcDurationMode& GetDurationMode() const{ return m_durationMode; }

    /**
     * To create an output that complies with the XAVC file format guidelines for
     * interoperability, keep the default value, Drop frames for compliance
     * (DROP_FRAMES_FOR_COMPLIANCE). To include all frames from your input in this
     * output, keep the default setting, Allow any duration (ALLOW_ANY_DURATION). The
     * number of frames that MediaConvert excludes when you set this to Drop frames for
     * compliance depends on the output frame rate and duration.
     */
    inline bool DurationModeHasBeenSet() const { return m_durationModeHasBeenSet; }

    /**
     * To create an output that complies with the XAVC file format guidelines for
     * interoperability, keep the default value, Drop frames for compliance
     * (DROP_FRAMES_FOR_COMPLIANCE). To include all frames from your input in this
     * output, keep the default setting, Allow any duration (ALLOW_ANY_DURATION). The
     * number of frames that MediaConvert excludes when you set this to Drop frames for
     * compliance depends on the output frame rate and duration.
     */
    inline void SetDurationMode(const MxfXavcDurationMode& value) { m_durationModeHasBeenSet = true; m_durationMode = value; }

    /**
     * To create an output that complies with the XAVC file format guidelines for
     * interoperability, keep the default value, Drop frames for compliance
     * (DROP_FRAMES_FOR_COMPLIANCE). To include all frames from your input in this
     * output, keep the default setting, Allow any duration (ALLOW_ANY_DURATION). The
     * number of frames that MediaConvert excludes when you set this to Drop frames for
     * compliance depends on the output frame rate and duration.
     */
    inline void SetDurationMode(MxfXavcDurationMode&& value) { m_durationModeHasBeenSet = true; m_durationMode = std::move(value); }

    /**
     * To create an output that complies with the XAVC file format guidelines for
     * interoperability, keep the default value, Drop frames for compliance
     * (DROP_FRAMES_FOR_COMPLIANCE). To include all frames from your input in this
     * output, keep the default setting, Allow any duration (ALLOW_ANY_DURATION). The
     * number of frames that MediaConvert excludes when you set this to Drop frames for
     * compliance depends on the output frame rate and duration.
     */
    inline MxfXavcProfileSettings& WithDurationMode(const MxfXavcDurationMode& value) { SetDurationMode(value); return *this;}

    /**
     * To create an output that complies with the XAVC file format guidelines for
     * interoperability, keep the default value, Drop frames for compliance
     * (DROP_FRAMES_FOR_COMPLIANCE). To include all frames from your input in this
     * output, keep the default setting, Allow any duration (ALLOW_ANY_DURATION). The
     * number of frames that MediaConvert excludes when you set this to Drop frames for
     * compliance depends on the output frame rate and duration.
     */
    inline MxfXavcProfileSettings& WithDurationMode(MxfXavcDurationMode&& value) { SetDurationMode(std::move(value)); return *this;}


    /**
     * Specify a value for this setting only for outputs that you set up with one of
     * these two XAVC profiles: XAVC HD Intra CBG (XAVC_HD_INTRA_CBG) or XAVC 4K Intra
     * CBG (XAVC_4K_INTRA_CBG). Specify the amount of space in each frame that the
     * service reserves for ancillary data, such as teletext captions. The default
     * value for this setting is 1492 bytes per frame. This should be sufficient to
     * prevent overflow unless you have multiple pages of teletext captions data. If
     * you have a large amount of teletext data, specify a larger number.
     */
    inline int GetMaxAncDataSize() const{ return m_maxAncDataSize; }

    /**
     * Specify a value for this setting only for outputs that you set up with one of
     * these two XAVC profiles: XAVC HD Intra CBG (XAVC_HD_INTRA_CBG) or XAVC 4K Intra
     * CBG (XAVC_4K_INTRA_CBG). Specify the amount of space in each frame that the
     * service reserves for ancillary data, such as teletext captions. The default
     * value for this setting is 1492 bytes per frame. This should be sufficient to
     * prevent overflow unless you have multiple pages of teletext captions data. If
     * you have a large amount of teletext data, specify a larger number.
     */
    inline bool MaxAncDataSizeHasBeenSet() const { return m_maxAncDataSizeHasBeenSet; }

    /**
     * Specify a value for this setting only for outputs that you set up with one of
     * these two XAVC profiles: XAVC HD Intra CBG (XAVC_HD_INTRA_CBG) or XAVC 4K Intra
     * CBG (XAVC_4K_INTRA_CBG). Specify the amount of space in each frame that the
     * service reserves for ancillary data, such as teletext captions. The default
     * value for this setting is 1492 bytes per frame. This should be sufficient to
     * prevent overflow unless you have multiple pages of teletext captions data. If
     * you have a large amount of teletext data, specify a larger number.
     */
    inline void SetMaxAncDataSize(int value) { m_maxAncDataSizeHasBeenSet = true; m_maxAncDataSize = value; }

    /**
     * Specify a value for this setting only for outputs that you set up with one of
     * these two XAVC profiles: XAVC HD Intra CBG (XAVC_HD_INTRA_CBG) or XAVC 4K Intra
     * CBG (XAVC_4K_INTRA_CBG). Specify the amount of space in each frame that the
     * service reserves for ancillary data, such as teletext captions. The default
     * value for this setting is 1492 bytes per frame. This should be sufficient to
     * prevent overflow unless you have multiple pages of teletext captions data. If
     * you have a large amount of teletext data, specify a larger number.
     */
    inline MxfXavcProfileSettings& WithMaxAncDataSize(int value) { SetMaxAncDataSize(value); return *this;}

  private:

    MxfXavcDurationMode m_durationMode;
    bool m_durationModeHasBeenSet = false;

    int m_maxAncDataSize;
    bool m_maxAncDataSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
