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
    AWS_REKOGNITION_API ProtectiveEquipmentBodyPart();
    AWS_REKOGNITION_API ProtectiveEquipmentBodyPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProtectiveEquipmentBodyPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The detected body part.</p>
     */
    inline const BodyPart& GetName() const{ return m_name; }

    /**
     * <p>The detected body part.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The detected body part.</p>
     */
    inline void SetName(const BodyPart& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The detected body part.</p>
     */
    inline void SetName(BodyPart&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The detected body part.</p>
     */
    inline ProtectiveEquipmentBodyPart& WithName(const BodyPart& value) { SetName(value); return *this;}

    /**
     * <p>The detected body part.</p>
     */
    inline ProtectiveEquipmentBodyPart& WithName(BodyPart&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The confidence that Amazon Rekognition has in the detection accuracy of the
     * detected body part. </p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that Amazon Rekognition has in the detection accuracy of the
     * detected body part. </p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that Amazon Rekognition has in the detection accuracy of the
     * detected body part. </p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that Amazon Rekognition has in the detection accuracy of the
     * detected body part. </p>
     */
    inline ProtectiveEquipmentBodyPart& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline const Aws::Vector<EquipmentDetection>& GetEquipmentDetections() const{ return m_equipmentDetections; }

    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline bool EquipmentDetectionsHasBeenSet() const { return m_equipmentDetectionsHasBeenSet; }

    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline void SetEquipmentDetections(const Aws::Vector<EquipmentDetection>& value) { m_equipmentDetectionsHasBeenSet = true; m_equipmentDetections = value; }

    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline void SetEquipmentDetections(Aws::Vector<EquipmentDetection>&& value) { m_equipmentDetectionsHasBeenSet = true; m_equipmentDetections = std::move(value); }

    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline ProtectiveEquipmentBodyPart& WithEquipmentDetections(const Aws::Vector<EquipmentDetection>& value) { SetEquipmentDetections(value); return *this;}

    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline ProtectiveEquipmentBodyPart& WithEquipmentDetections(Aws::Vector<EquipmentDetection>&& value) { SetEquipmentDetections(std::move(value)); return *this;}

    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline ProtectiveEquipmentBodyPart& AddEquipmentDetections(const EquipmentDetection& value) { m_equipmentDetectionsHasBeenSet = true; m_equipmentDetections.push_back(value); return *this; }

    /**
     * <p>An array of Personal Protective Equipment items detected around a body
     * part.</p>
     */
    inline ProtectiveEquipmentBodyPart& AddEquipmentDetections(EquipmentDetection&& value) { m_equipmentDetectionsHasBeenSet = true; m_equipmentDetections.push_back(std::move(value)); return *this; }

  private:

    BodyPart m_name;
    bool m_nameHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<EquipmentDetection> m_equipmentDetections;
    bool m_equipmentDetectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
