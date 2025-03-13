/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ColorCorrection.h>
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
   * Property of encoderSettings. Controls color conversion when you are using 3D LUT
   * files to perform color conversion on video.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ColorCorrectionSettings">AWS
   * API Reference</a></p>
   */
  class ColorCorrectionSettings
  {
  public:
    AWS_MEDIALIVE_API ColorCorrectionSettings() = default;
    AWS_MEDIALIVE_API ColorCorrectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ColorCorrectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline const Aws::Vector<ColorCorrection>& GetGlobalColorCorrections() const { return m_globalColorCorrections; }
    inline bool GlobalColorCorrectionsHasBeenSet() const { return m_globalColorCorrectionsHasBeenSet; }
    template<typename GlobalColorCorrectionsT = Aws::Vector<ColorCorrection>>
    void SetGlobalColorCorrections(GlobalColorCorrectionsT&& value) { m_globalColorCorrectionsHasBeenSet = true; m_globalColorCorrections = std::forward<GlobalColorCorrectionsT>(value); }
    template<typename GlobalColorCorrectionsT = Aws::Vector<ColorCorrection>>
    ColorCorrectionSettings& WithGlobalColorCorrections(GlobalColorCorrectionsT&& value) { SetGlobalColorCorrections(std::forward<GlobalColorCorrectionsT>(value)); return *this;}
    template<typename GlobalColorCorrectionsT = ColorCorrection>
    ColorCorrectionSettings& AddGlobalColorCorrections(GlobalColorCorrectionsT&& value) { m_globalColorCorrectionsHasBeenSet = true; m_globalColorCorrections.emplace_back(std::forward<GlobalColorCorrectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ColorCorrection> m_globalColorCorrections;
    bool m_globalColorCorrectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
