/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/GeneralLabelsSettings.h>
#include <aws/rekognition/model/DetectLabelsImagePropertiesSettings.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Settings for the DetectLabels request. Settings can include filters for both
   * GENERAL_LABELS and IMAGE_PROPERTIES. GENERAL_LABELS filters can be inclusive or
   * exclusive and applied to individual labels or label categories. IMAGE_PROPERTIES
   * filters allow specification of a maximum number of dominant
   * colors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabelsSettings">AWS
   * API Reference</a></p>
   */
  class DetectLabelsSettings
  {
  public:
    AWS_REKOGNITION_API DetectLabelsSettings();
    AWS_REKOGNITION_API DetectLabelsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the specified filters for GENERAL_LABELS.</p>
     */
    inline const GeneralLabelsSettings& GetGeneralLabels() const{ return m_generalLabels; }

    /**
     * <p>Contains the specified filters for GENERAL_LABELS.</p>
     */
    inline bool GeneralLabelsHasBeenSet() const { return m_generalLabelsHasBeenSet; }

    /**
     * <p>Contains the specified filters for GENERAL_LABELS.</p>
     */
    inline void SetGeneralLabels(const GeneralLabelsSettings& value) { m_generalLabelsHasBeenSet = true; m_generalLabels = value; }

    /**
     * <p>Contains the specified filters for GENERAL_LABELS.</p>
     */
    inline void SetGeneralLabels(GeneralLabelsSettings&& value) { m_generalLabelsHasBeenSet = true; m_generalLabels = std::move(value); }

    /**
     * <p>Contains the specified filters for GENERAL_LABELS.</p>
     */
    inline DetectLabelsSettings& WithGeneralLabels(const GeneralLabelsSettings& value) { SetGeneralLabels(value); return *this;}

    /**
     * <p>Contains the specified filters for GENERAL_LABELS.</p>
     */
    inline DetectLabelsSettings& WithGeneralLabels(GeneralLabelsSettings&& value) { SetGeneralLabels(std::move(value)); return *this;}


    /**
     * <p>Contains the chosen number of maximum dominant colors in an image.</p>
     */
    inline const DetectLabelsImagePropertiesSettings& GetImageProperties() const{ return m_imageProperties; }

    /**
     * <p>Contains the chosen number of maximum dominant colors in an image.</p>
     */
    inline bool ImagePropertiesHasBeenSet() const { return m_imagePropertiesHasBeenSet; }

    /**
     * <p>Contains the chosen number of maximum dominant colors in an image.</p>
     */
    inline void SetImageProperties(const DetectLabelsImagePropertiesSettings& value) { m_imagePropertiesHasBeenSet = true; m_imageProperties = value; }

    /**
     * <p>Contains the chosen number of maximum dominant colors in an image.</p>
     */
    inline void SetImageProperties(DetectLabelsImagePropertiesSettings&& value) { m_imagePropertiesHasBeenSet = true; m_imageProperties = std::move(value); }

    /**
     * <p>Contains the chosen number of maximum dominant colors in an image.</p>
     */
    inline DetectLabelsSettings& WithImageProperties(const DetectLabelsImagePropertiesSettings& value) { SetImageProperties(value); return *this;}

    /**
     * <p>Contains the chosen number of maximum dominant colors in an image.</p>
     */
    inline DetectLabelsSettings& WithImageProperties(DetectLabelsImagePropertiesSettings&& value) { SetImageProperties(std::move(value)); return *this;}

  private:

    GeneralLabelsSettings m_generalLabels;
    bool m_generalLabelsHasBeenSet = false;

    DetectLabelsImagePropertiesSettings m_imageProperties;
    bool m_imagePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
