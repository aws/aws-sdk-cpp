/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/rekognition/model/ProtectiveEquipmentBodyPart.h>
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
   * <p>A person detected by a call to <a>DetectProtectiveEquipment</a>. The API
   * returns all persons detected in the input image in an array of
   * <code>ProtectiveEquipmentPerson</code> objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProtectiveEquipmentPerson">AWS
   * API Reference</a></p>
   */
  class ProtectiveEquipmentPerson
  {
  public:
    AWS_REKOGNITION_API ProtectiveEquipmentPerson() = default;
    AWS_REKOGNITION_API ProtectiveEquipmentPerson(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProtectiveEquipmentPerson& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of body parts detected on a person's body (including body parts
     * without PPE). </p>
     */
    inline const Aws::Vector<ProtectiveEquipmentBodyPart>& GetBodyParts() const { return m_bodyParts; }
    inline bool BodyPartsHasBeenSet() const { return m_bodyPartsHasBeenSet; }
    template<typename BodyPartsT = Aws::Vector<ProtectiveEquipmentBodyPart>>
    void SetBodyParts(BodyPartsT&& value) { m_bodyPartsHasBeenSet = true; m_bodyParts = std::forward<BodyPartsT>(value); }
    template<typename BodyPartsT = Aws::Vector<ProtectiveEquipmentBodyPart>>
    ProtectiveEquipmentPerson& WithBodyParts(BodyPartsT&& value) { SetBodyParts(std::forward<BodyPartsT>(value)); return *this;}
    template<typename BodyPartsT = ProtectiveEquipmentBodyPart>
    ProtectiveEquipmentPerson& AddBodyParts(BodyPartsT&& value) { m_bodyPartsHasBeenSet = true; m_bodyParts.emplace_back(std::forward<BodyPartsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A bounding box around the detected person.</p>
     */
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    ProtectiveEquipmentPerson& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Rekognition has that the bounding box contains a
     * person.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline ProtectiveEquipmentPerson& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the detected person. The identifier is only unique for a
     * single call to <code>DetectProtectiveEquipment</code>.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline ProtectiveEquipmentPerson& WithId(int value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProtectiveEquipmentBodyPart> m_bodyParts;
    bool m_bodyPartsHasBeenSet = false;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
