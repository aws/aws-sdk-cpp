/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Geometry.h>
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
   * <p>A custom label detected in an image by a call to
   * <a>DetectCustomLabels</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CustomLabel">AWS
   * API Reference</a></p>
   */
  class CustomLabel
  {
  public:
    AWS_REKOGNITION_API CustomLabel();
    AWS_REKOGNITION_API CustomLabel(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CustomLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom label.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom label.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom label.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom label.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom label.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom label.</p>
     */
    inline CustomLabel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom label.</p>
     */
    inline CustomLabel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom label.</p>
     */
    inline CustomLabel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The confidence that the model has in the detection of the custom label. The
     * range is 0-100. A higher value indicates a higher confidence.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that the model has in the detection of the custom label. The
     * range is 0-100. A higher value indicates a higher confidence.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that the model has in the detection of the custom label. The
     * range is 0-100. A higher value indicates a higher confidence.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that the model has in the detection of the custom label. The
     * range is 0-100. A higher value indicates a higher confidence.</p>
     */
    inline CustomLabel& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>The location of the detected object on the image that corresponds to the
     * custom label. Includes an axis aligned coarse bounding box surrounding the
     * object and a finer grain polygon for more accurate spatial information.</p>
     */
    inline const Geometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>The location of the detected object on the image that corresponds to the
     * custom label. Includes an axis aligned coarse bounding box surrounding the
     * object and a finer grain polygon for more accurate spatial information.</p>
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p>The location of the detected object on the image that corresponds to the
     * custom label. Includes an axis aligned coarse bounding box surrounding the
     * object and a finer grain polygon for more accurate spatial information.</p>
     */
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p>The location of the detected object on the image that corresponds to the
     * custom label. Includes an axis aligned coarse bounding box surrounding the
     * object and a finer grain polygon for more accurate spatial information.</p>
     */
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p>The location of the detected object on the image that corresponds to the
     * custom label. Includes an axis aligned coarse bounding box surrounding the
     * object and a finer grain polygon for more accurate spatial information.</p>
     */
    inline CustomLabel& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>The location of the detected object on the image that corresponds to the
     * custom label. Includes an axis aligned coarse bounding box surrounding the
     * object and a finer grain polygon for more accurate spatial information.</p>
     */
    inline CustomLabel& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
