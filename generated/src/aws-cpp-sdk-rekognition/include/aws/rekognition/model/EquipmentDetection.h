/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/rekognition/model/ProtectiveEquipmentType.h>
#include <aws/rekognition/model/CoversBodyPart.h>
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
   * <p>Information about an item of Personal Protective Equipment (PPE) detected by
   * <a>DetectProtectiveEquipment</a>. For more information, see
   * <a>DetectProtectiveEquipment</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/EquipmentDetection">AWS
   * API Reference</a></p>
   */
  class EquipmentDetection
  {
  public:
    AWS_REKOGNITION_API EquipmentDetection();
    AWS_REKOGNITION_API EquipmentDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API EquipmentDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A bounding box surrounding the item of detected PPE.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline EquipmentDetection& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}
    inline EquipmentDetection& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Rekognition has that the bounding box
     * (<code>BoundingBox</code>) contains an item of PPE.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline EquipmentDetection& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of detected PPE.</p>
     */
    inline const ProtectiveEquipmentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ProtectiveEquipmentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ProtectiveEquipmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EquipmentDetection& WithType(const ProtectiveEquipmentType& value) { SetType(value); return *this;}
    inline EquipmentDetection& WithType(ProtectiveEquipmentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the body part covered by the detected PPE.</p>
     */
    inline const CoversBodyPart& GetCoversBodyPart() const{ return m_coversBodyPart; }
    inline bool CoversBodyPartHasBeenSet() const { return m_coversBodyPartHasBeenSet; }
    inline void SetCoversBodyPart(const CoversBodyPart& value) { m_coversBodyPartHasBeenSet = true; m_coversBodyPart = value; }
    inline void SetCoversBodyPart(CoversBodyPart&& value) { m_coversBodyPartHasBeenSet = true; m_coversBodyPart = std::move(value); }
    inline EquipmentDetection& WithCoversBodyPart(const CoversBodyPart& value) { SetCoversBodyPart(value); return *this;}
    inline EquipmentDetection& WithCoversBodyPart(CoversBodyPart&& value) { SetCoversBodyPart(std::move(value)); return *this;}
    ///@}
  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    ProtectiveEquipmentType m_type;
    bool m_typeHasBeenSet = false;

    CoversBodyPart m_coversBodyPart;
    bool m_coversBodyPartHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
