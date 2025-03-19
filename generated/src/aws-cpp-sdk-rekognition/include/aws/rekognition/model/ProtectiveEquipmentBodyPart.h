/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BodyPart.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/EquipmentDetection.h>
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
   * <p>Information about a body part detected by <a>DetectProtectiveEquipment</a>
   * that contains PPE. An array of <code>ProtectiveEquipmentBodyPart</code> objects
   * is returned for each person detected by <code>DetectProtectiveEquipment</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProtectiveEquipmentBodyPart">AWS
   * API Reference</a></p>
   */
  class ProtectiveEquipmentBodyPart
  {
  public:
    AWS_REKOGNITION_API ProtectiveEquipmentBodyPart() = default;
    AWS_REKOGNITION_API ProtectiveEquipmentBodyPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProtectiveEquipmentBodyPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The detected body part.</p>
     */
    inline BodyPart GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(BodyPart value) { m_nameHasBeenSet = true; m_name = value; }
    inline ProtectiveEquipmentBodyPart& WithName(BodyPart value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Rekognition has in the detection accuracy of the
     * detected body part. </p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline ProtectiveEquipmentBodyPart& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline const Aws::Vector<EquipmentDetection>& GetEquipmentDetections() const { return m_equipmentDetections; }
    inline bool EquipmentDetectionsHasBeenSet() const { return m_equipmentDetectionsHasBeenSet; }
    template<typename EquipmentDetectionsT = Aws::Vector<EquipmentDetection>>
    void SetEquipmentDetections(EquipmentDetectionsT&& value) { m_equipmentDetectionsHasBeenSet = true; m_equipmentDetections = std::forward<EquipmentDetectionsT>(value); }
    template<typename EquipmentDetectionsT = Aws::Vector<EquipmentDetection>>
    ProtectiveEquipmentBodyPart& WithEquipmentDetections(EquipmentDetectionsT&& value) { SetEquipmentDetections(std::forward<EquipmentDetectionsT>(value)); return *this;}
    template<typename EquipmentDetectionsT = EquipmentDetection>
    ProtectiveEquipmentBodyPart& AddEquipmentDetections(EquipmentDetectionsT&& value) { m_equipmentDetectionsHasBeenSet = true; m_equipmentDetections.emplace_back(std::forward<EquipmentDetectionsT>(value)); return *this; }
    ///@}
  private:

    BodyPart m_name{BodyPart::NOT_SET};
    bool m_nameHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<EquipmentDetection> m_equipmentDetections;
    bool m_equipmentDetectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
