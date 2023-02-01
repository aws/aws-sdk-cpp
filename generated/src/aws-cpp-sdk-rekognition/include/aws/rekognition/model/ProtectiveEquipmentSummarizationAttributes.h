/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/ProtectiveEquipmentType.h>
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
   * <p>Specifies summary attributes to return from a call to
   * <a>DetectProtectiveEquipment</a>. You can specify which types of PPE to
   * summarize. You can also specify a minimum confidence value for detections.
   * Summary information is returned in the <code>Summary</code>
   * (<a>ProtectiveEquipmentSummary</a>) field of the response from
   * <code>DetectProtectiveEquipment</code>. The summary includes which persons in an
   * image were detected wearing the requested types of person protective equipment
   * (PPE), which persons were detected as not wearing PPE, and the persons in which
   * a determination could not be made. For more information, see
   * <a>ProtectiveEquipmentSummary</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProtectiveEquipmentSummarizationAttributes">AWS
   * API Reference</a></p>
   */
  class ProtectiveEquipmentSummarizationAttributes
  {
  public:
    AWS_REKOGNITION_API ProtectiveEquipmentSummarizationAttributes();
    AWS_REKOGNITION_API ProtectiveEquipmentSummarizationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProtectiveEquipmentSummarizationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum confidence level for which you want summary information. The
     * confidence level applies to person detection, body part detection, equipment
     * detection, and body part coverage. Amazon Rekognition doesn't return summary
     * information with a confidence than this specified value. There isn't a default
     * value.</p> <p>Specify a <code>MinConfidence</code> value that is between 50-100%
     * as <code>DetectProtectiveEquipment</code> returns predictions only where the
     * detection confidence is between 50% - 100%. If you specify a value that is less
     * than 50%, the results are the same specifying a value of 50%.</p> <p> </p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>The minimum confidence level for which you want summary information. The
     * confidence level applies to person detection, body part detection, equipment
     * detection, and body part coverage. Amazon Rekognition doesn't return summary
     * information with a confidence than this specified value. There isn't a default
     * value.</p> <p>Specify a <code>MinConfidence</code> value that is between 50-100%
     * as <code>DetectProtectiveEquipment</code> returns predictions only where the
     * detection confidence is between 50% - 100%. If you specify a value that is less
     * than 50%, the results are the same specifying a value of 50%.</p> <p> </p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p>The minimum confidence level for which you want summary information. The
     * confidence level applies to person detection, body part detection, equipment
     * detection, and body part coverage. Amazon Rekognition doesn't return summary
     * information with a confidence than this specified value. There isn't a default
     * value.</p> <p>Specify a <code>MinConfidence</code> value that is between 50-100%
     * as <code>DetectProtectiveEquipment</code> returns predictions only where the
     * detection confidence is between 50% - 100%. If you specify a value that is less
     * than 50%, the results are the same specifying a value of 50%.</p> <p> </p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>The minimum confidence level for which you want summary information. The
     * confidence level applies to person detection, body part detection, equipment
     * detection, and body part coverage. Amazon Rekognition doesn't return summary
     * information with a confidence than this specified value. There isn't a default
     * value.</p> <p>Specify a <code>MinConfidence</code> value that is between 50-100%
     * as <code>DetectProtectiveEquipment</code> returns predictions only where the
     * detection confidence is between 50% - 100%. If you specify a value that is less
     * than 50%, the results are the same specifying a value of 50%.</p> <p> </p>
     */
    inline ProtectiveEquipmentSummarizationAttributes& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}


    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline const Aws::Vector<ProtectiveEquipmentType>& GetRequiredEquipmentTypes() const{ return m_requiredEquipmentTypes; }

    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline bool RequiredEquipmentTypesHasBeenSet() const { return m_requiredEquipmentTypesHasBeenSet; }

    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline void SetRequiredEquipmentTypes(const Aws::Vector<ProtectiveEquipmentType>& value) { m_requiredEquipmentTypesHasBeenSet = true; m_requiredEquipmentTypes = value; }

    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline void SetRequiredEquipmentTypes(Aws::Vector<ProtectiveEquipmentType>&& value) { m_requiredEquipmentTypesHasBeenSet = true; m_requiredEquipmentTypes = std::move(value); }

    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline ProtectiveEquipmentSummarizationAttributes& WithRequiredEquipmentTypes(const Aws::Vector<ProtectiveEquipmentType>& value) { SetRequiredEquipmentTypes(value); return *this;}

    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline ProtectiveEquipmentSummarizationAttributes& WithRequiredEquipmentTypes(Aws::Vector<ProtectiveEquipmentType>&& value) { SetRequiredEquipmentTypes(std::move(value)); return *this;}

    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline ProtectiveEquipmentSummarizationAttributes& AddRequiredEquipmentTypes(const ProtectiveEquipmentType& value) { m_requiredEquipmentTypesHasBeenSet = true; m_requiredEquipmentTypes.push_back(value); return *this; }

    /**
     * <p>An array of personal protective equipment types for which you want summary
     * information. If a person is detected wearing a required requipment type, the
     * person's ID is added to the <code>PersonsWithRequiredEquipment</code> array
     * field returned in <a>ProtectiveEquipmentSummary</a> by
     * <code>DetectProtectiveEquipment</code>. </p>
     */
    inline ProtectiveEquipmentSummarizationAttributes& AddRequiredEquipmentTypes(ProtectiveEquipmentType&& value) { m_requiredEquipmentTypesHasBeenSet = true; m_requiredEquipmentTypes.push_back(std::move(value)); return *this; }

  private:

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet = false;

    Aws::Vector<ProtectiveEquipmentType> m_requiredEquipmentTypes;
    bool m_requiredEquipmentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
