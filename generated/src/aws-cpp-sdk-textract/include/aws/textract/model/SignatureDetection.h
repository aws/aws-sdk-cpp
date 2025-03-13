/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/Geometry.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Information regarding a detected signature on a page.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/SignatureDetection">AWS
   * API Reference</a></p>
   */
  class SignatureDetection
  {
  public:
    AWS_TEXTRACT_API SignatureDetection() = default;
    AWS_TEXTRACT_API SignatureDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API SignatureDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The confidence, from 0 to 100, in the predicted values for a detected
     * signature.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline SignatureDetection& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    
    inline const Geometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = Geometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = Geometry>
    SignatureDetection& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}
  private:

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
