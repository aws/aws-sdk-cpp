/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Use these settings to specify static color calibration metadata, as defined by
   * SMPTE ST 2086. These values don't affect the pixel values that are encoded in
   * the video stream. They are intended to help the downstream video player display
   * content in a way that reflects the intentions of the the content
   * creator.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Hdr10Metadata">AWS
   * API Reference</a></p>
   */
  class Hdr10Metadata
  {
  public:
    AWS_MEDIACONVERT_API Hdr10Metadata();
    AWS_MEDIACONVERT_API Hdr10Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Hdr10Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetBluePrimaryX() const{ return m_bluePrimaryX; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool BluePrimaryXHasBeenSet() const { return m_bluePrimaryXHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetBluePrimaryX(int value) { m_bluePrimaryXHasBeenSet = true; m_bluePrimaryX = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithBluePrimaryX(int value) { SetBluePrimaryX(value); return *this;}


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetBluePrimaryY() const{ return m_bluePrimaryY; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool BluePrimaryYHasBeenSet() const { return m_bluePrimaryYHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetBluePrimaryY(int value) { m_bluePrimaryYHasBeenSet = true; m_bluePrimaryY = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithBluePrimaryY(int value) { SetBluePrimaryY(value); return *this;}


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetGreenPrimaryX() const{ return m_greenPrimaryX; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool GreenPrimaryXHasBeenSet() const { return m_greenPrimaryXHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetGreenPrimaryX(int value) { m_greenPrimaryXHasBeenSet = true; m_greenPrimaryX = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithGreenPrimaryX(int value) { SetGreenPrimaryX(value); return *this;}


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetGreenPrimaryY() const{ return m_greenPrimaryY; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool GreenPrimaryYHasBeenSet() const { return m_greenPrimaryYHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetGreenPrimaryY(int value) { m_greenPrimaryYHasBeenSet = true; m_greenPrimaryY = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithGreenPrimaryY(int value) { SetGreenPrimaryY(value); return *this;}


    /**
     * Maximum light level among all samples in the coded video sequence, in units of
     * candelas per square meter.  This setting doesn't have a default value; you must
     * specify a value that is suitable for the content.
     */
    inline int GetMaxContentLightLevel() const{ return m_maxContentLightLevel; }

    /**
     * Maximum light level among all samples in the coded video sequence, in units of
     * candelas per square meter.  This setting doesn't have a default value; you must
     * specify a value that is suitable for the content.
     */
    inline bool MaxContentLightLevelHasBeenSet() const { return m_maxContentLightLevelHasBeenSet; }

    /**
     * Maximum light level among all samples in the coded video sequence, in units of
     * candelas per square meter.  This setting doesn't have a default value; you must
     * specify a value that is suitable for the content.
     */
    inline void SetMaxContentLightLevel(int value) { m_maxContentLightLevelHasBeenSet = true; m_maxContentLightLevel = value; }

    /**
     * Maximum light level among all samples in the coded video sequence, in units of
     * candelas per square meter.  This setting doesn't have a default value; you must
     * specify a value that is suitable for the content.
     */
    inline Hdr10Metadata& WithMaxContentLightLevel(int value) { SetMaxContentLightLevel(value); return *this;}


    /**
     * Maximum average light level of any frame in the coded video sequence, in units
     * of candelas per square meter. This setting doesn't have a default value; you
     * must specify a value that is suitable for the content.
     */
    inline int GetMaxFrameAverageLightLevel() const{ return m_maxFrameAverageLightLevel; }

    /**
     * Maximum average light level of any frame in the coded video sequence, in units
     * of candelas per square meter. This setting doesn't have a default value; you
     * must specify a value that is suitable for the content.
     */
    inline bool MaxFrameAverageLightLevelHasBeenSet() const { return m_maxFrameAverageLightLevelHasBeenSet; }

    /**
     * Maximum average light level of any frame in the coded video sequence, in units
     * of candelas per square meter. This setting doesn't have a default value; you
     * must specify a value that is suitable for the content.
     */
    inline void SetMaxFrameAverageLightLevel(int value) { m_maxFrameAverageLightLevelHasBeenSet = true; m_maxFrameAverageLightLevel = value; }

    /**
     * Maximum average light level of any frame in the coded video sequence, in units
     * of candelas per square meter. This setting doesn't have a default value; you
     * must specify a value that is suitable for the content.
     */
    inline Hdr10Metadata& WithMaxFrameAverageLightLevel(int value) { SetMaxFrameAverageLightLevel(value); return *this;}


    /**
     * Nominal maximum mastering display luminance in units of of 0.0001 candelas per
     * square meter.
     */
    inline int GetMaxLuminance() const{ return m_maxLuminance; }

    /**
     * Nominal maximum mastering display luminance in units of of 0.0001 candelas per
     * square meter.
     */
    inline bool MaxLuminanceHasBeenSet() const { return m_maxLuminanceHasBeenSet; }

    /**
     * Nominal maximum mastering display luminance in units of of 0.0001 candelas per
     * square meter.
     */
    inline void SetMaxLuminance(int value) { m_maxLuminanceHasBeenSet = true; m_maxLuminance = value; }

    /**
     * Nominal maximum mastering display luminance in units of of 0.0001 candelas per
     * square meter.
     */
    inline Hdr10Metadata& WithMaxLuminance(int value) { SetMaxLuminance(value); return *this;}


    /**
     * Nominal minimum mastering display luminance in units of of 0.0001 candelas per
     * square meter
     */
    inline int GetMinLuminance() const{ return m_minLuminance; }

    /**
     * Nominal minimum mastering display luminance in units of of 0.0001 candelas per
     * square meter
     */
    inline bool MinLuminanceHasBeenSet() const { return m_minLuminanceHasBeenSet; }

    /**
     * Nominal minimum mastering display luminance in units of of 0.0001 candelas per
     * square meter
     */
    inline void SetMinLuminance(int value) { m_minLuminanceHasBeenSet = true; m_minLuminance = value; }

    /**
     * Nominal minimum mastering display luminance in units of of 0.0001 candelas per
     * square meter
     */
    inline Hdr10Metadata& WithMinLuminance(int value) { SetMinLuminance(value); return *this;}


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetRedPrimaryX() const{ return m_redPrimaryX; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool RedPrimaryXHasBeenSet() const { return m_redPrimaryXHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetRedPrimaryX(int value) { m_redPrimaryXHasBeenSet = true; m_redPrimaryX = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithRedPrimaryX(int value) { SetRedPrimaryX(value); return *this;}


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetRedPrimaryY() const{ return m_redPrimaryY; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool RedPrimaryYHasBeenSet() const { return m_redPrimaryYHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetRedPrimaryY(int value) { m_redPrimaryYHasBeenSet = true; m_redPrimaryY = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithRedPrimaryY(int value) { SetRedPrimaryY(value); return *this;}


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetWhitePointX() const{ return m_whitePointX; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool WhitePointXHasBeenSet() const { return m_whitePointXHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetWhitePointX(int value) { m_whitePointXHasBeenSet = true; m_whitePointX = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithWhitePointX(int value) { SetWhitePointX(value); return *this;}


    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline int GetWhitePointY() const{ return m_whitePointY; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline bool WhitePointYHasBeenSet() const { return m_whitePointYHasBeenSet; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline void SetWhitePointY(int value) { m_whitePointYHasBeenSet = true; m_whitePointY = value; }

    /**
     * HDR Master Display Information must be provided by a color grader, using color
     * grading tools. Range is 0 to 50,000, each increment represents 0.00002 in
     * CIE1931 color coordinate. Note that this setting is not for color correction.
     */
    inline Hdr10Metadata& WithWhitePointY(int value) { SetWhitePointY(value); return *this;}

  private:

    int m_bluePrimaryX;
    bool m_bluePrimaryXHasBeenSet = false;

    int m_bluePrimaryY;
    bool m_bluePrimaryYHasBeenSet = false;

    int m_greenPrimaryX;
    bool m_greenPrimaryXHasBeenSet = false;

    int m_greenPrimaryY;
    bool m_greenPrimaryYHasBeenSet = false;

    int m_maxContentLightLevel;
    bool m_maxContentLightLevelHasBeenSet = false;

    int m_maxFrameAverageLightLevel;
    bool m_maxFrameAverageLightLevelHasBeenSet = false;

    int m_maxLuminance;
    bool m_maxLuminanceHasBeenSet = false;

    int m_minLuminance;
    bool m_minLuminanceHasBeenSet = false;

    int m_redPrimaryX;
    bool m_redPrimaryXHasBeenSet = false;

    int m_redPrimaryY;
    bool m_redPrimaryYHasBeenSet = false;

    int m_whitePointX;
    bool m_whitePointXHasBeenSet = false;

    int m_whitePointY;
    bool m_whitePointYHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
