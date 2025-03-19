/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Summary information for required items of personal protective equipment (PPE)
   * detected on persons by a call to <a>DetectProtectiveEquipment</a>. You specify
   * the required type of PPE in the <code>SummarizationAttributes</code>
   * (<a>ProtectiveEquipmentSummarizationAttributes</a>) input parameter. The summary
   * includes which persons were detected wearing the required personal protective
   * equipment (<code>PersonsWithRequiredEquipment</code>), which persons were
   * detected as not wearing the required PPE
   * (<code>PersonsWithoutRequiredEquipment</code>), and the persons in which a
   * determination could not be made (<code>PersonsIndeterminate</code>).</p> <p>To
   * get a total for each category, use the size of the field array. For example, to
   * find out how many people were detected as wearing the specified PPE, use the
   * size of the <code>PersonsWithRequiredEquipment</code> array. If you want to find
   * out more about a person, such as the location (<a>BoundingBox</a>) of the person
   * on the image, use the person ID in each array element. Each person ID matches
   * the ID field of a <a>ProtectiveEquipmentPerson</a> object returned in the
   * <code>Persons</code> array by
   * <code>DetectProtectiveEquipment</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProtectiveEquipmentSummary">AWS
   * API Reference</a></p>
   */
  class ProtectiveEquipmentSummary
  {
  public:
    AWS_REKOGNITION_API ProtectiveEquipmentSummary() = default;
    AWS_REKOGNITION_API ProtectiveEquipmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProtectiveEquipmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of IDs for persons who are wearing detected personal protective
     * equipment. </p>
     */
    inline const Aws::Vector<int>& GetPersonsWithRequiredEquipment() const { return m_personsWithRequiredEquipment; }
    inline bool PersonsWithRequiredEquipmentHasBeenSet() const { return m_personsWithRequiredEquipmentHasBeenSet; }
    template<typename PersonsWithRequiredEquipmentT = Aws::Vector<int>>
    void SetPersonsWithRequiredEquipment(PersonsWithRequiredEquipmentT&& value) { m_personsWithRequiredEquipmentHasBeenSet = true; m_personsWithRequiredEquipment = std::forward<PersonsWithRequiredEquipmentT>(value); }
    template<typename PersonsWithRequiredEquipmentT = Aws::Vector<int>>
    ProtectiveEquipmentSummary& WithPersonsWithRequiredEquipment(PersonsWithRequiredEquipmentT&& value) { SetPersonsWithRequiredEquipment(std::forward<PersonsWithRequiredEquipmentT>(value)); return *this;}
    inline ProtectiveEquipmentSummary& AddPersonsWithRequiredEquipment(int value) { m_personsWithRequiredEquipmentHasBeenSet = true; m_personsWithRequiredEquipment.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of IDs for persons who are not wearing all of the types of PPE
     * specified in the <code>RequiredEquipmentTypes</code> field of the detected
     * personal protective equipment. </p>
     */
    inline const Aws::Vector<int>& GetPersonsWithoutRequiredEquipment() const { return m_personsWithoutRequiredEquipment; }
    inline bool PersonsWithoutRequiredEquipmentHasBeenSet() const { return m_personsWithoutRequiredEquipmentHasBeenSet; }
    template<typename PersonsWithoutRequiredEquipmentT = Aws::Vector<int>>
    void SetPersonsWithoutRequiredEquipment(PersonsWithoutRequiredEquipmentT&& value) { m_personsWithoutRequiredEquipmentHasBeenSet = true; m_personsWithoutRequiredEquipment = std::forward<PersonsWithoutRequiredEquipmentT>(value); }
    template<typename PersonsWithoutRequiredEquipmentT = Aws::Vector<int>>
    ProtectiveEquipmentSummary& WithPersonsWithoutRequiredEquipment(PersonsWithoutRequiredEquipmentT&& value) { SetPersonsWithoutRequiredEquipment(std::forward<PersonsWithoutRequiredEquipmentT>(value)); return *this;}
    inline ProtectiveEquipmentSummary& AddPersonsWithoutRequiredEquipment(int value) { m_personsWithoutRequiredEquipmentHasBeenSet = true; m_personsWithoutRequiredEquipment.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of IDs for persons where it was not possible to determine if they
     * are wearing personal protective equipment. </p>
     */
    inline const Aws::Vector<int>& GetPersonsIndeterminate() const { return m_personsIndeterminate; }
    inline bool PersonsIndeterminateHasBeenSet() const { return m_personsIndeterminateHasBeenSet; }
    template<typename PersonsIndeterminateT = Aws::Vector<int>>
    void SetPersonsIndeterminate(PersonsIndeterminateT&& value) { m_personsIndeterminateHasBeenSet = true; m_personsIndeterminate = std::forward<PersonsIndeterminateT>(value); }
    template<typename PersonsIndeterminateT = Aws::Vector<int>>
    ProtectiveEquipmentSummary& WithPersonsIndeterminate(PersonsIndeterminateT&& value) { SetPersonsIndeterminate(std::forward<PersonsIndeterminateT>(value)); return *this;}
    inline ProtectiveEquipmentSummary& AddPersonsIndeterminate(int value) { m_personsIndeterminateHasBeenSet = true; m_personsIndeterminate.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<int> m_personsWithRequiredEquipment;
    bool m_personsWithRequiredEquipmentHasBeenSet = false;

    Aws::Vector<int> m_personsWithoutRequiredEquipment;
    bool m_personsWithoutRequiredEquipmentHasBeenSet = false;

    Aws::Vector<int> m_personsIndeterminate;
    bool m_personsIndeterminateHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
