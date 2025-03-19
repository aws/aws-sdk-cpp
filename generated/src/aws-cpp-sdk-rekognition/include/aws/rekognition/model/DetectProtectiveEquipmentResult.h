/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/ProtectiveEquipmentSummary.h>
#include <aws/rekognition/model/ProtectiveEquipmentPerson.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class DetectProtectiveEquipmentResult
  {
  public:
    AWS_REKOGNITION_API DetectProtectiveEquipmentResult() = default;
    AWS_REKOGNITION_API DetectProtectiveEquipmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectProtectiveEquipmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline const Aws::String& GetProtectiveEquipmentModelVersion() const { return m_protectiveEquipmentModelVersion; }
    template<typename ProtectiveEquipmentModelVersionT = Aws::String>
    void SetProtectiveEquipmentModelVersion(ProtectiveEquipmentModelVersionT&& value) { m_protectiveEquipmentModelVersionHasBeenSet = true; m_protectiveEquipmentModelVersion = std::forward<ProtectiveEquipmentModelVersionT>(value); }
    template<typename ProtectiveEquipmentModelVersionT = Aws::String>
    DetectProtectiveEquipmentResult& WithProtectiveEquipmentModelVersion(ProtectiveEquipmentModelVersionT&& value) { SetProtectiveEquipmentModelVersion(std::forward<ProtectiveEquipmentModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline const Aws::Vector<ProtectiveEquipmentPerson>& GetPersons() const { return m_persons; }
    template<typename PersonsT = Aws::Vector<ProtectiveEquipmentPerson>>
    void SetPersons(PersonsT&& value) { m_personsHasBeenSet = true; m_persons = std::forward<PersonsT>(value); }
    template<typename PersonsT = Aws::Vector<ProtectiveEquipmentPerson>>
    DetectProtectiveEquipmentResult& WithPersons(PersonsT&& value) { SetPersons(std::forward<PersonsT>(value)); return *this;}
    template<typename PersonsT = ProtectiveEquipmentPerson>
    DetectProtectiveEquipmentResult& AddPersons(PersonsT&& value) { m_personsHasBeenSet = true; m_persons.emplace_back(std::forward<PersonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summary information for the types of PPE specified in the
     * <code>SummarizationAttributes</code> input parameter.</p>
     */
    inline const ProtectiveEquipmentSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = ProtectiveEquipmentSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = ProtectiveEquipmentSummary>
    DetectProtectiveEquipmentResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectProtectiveEquipmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectiveEquipmentModelVersion;
    bool m_protectiveEquipmentModelVersionHasBeenSet = false;

    Aws::Vector<ProtectiveEquipmentPerson> m_persons;
    bool m_personsHasBeenSet = false;

    ProtectiveEquipmentSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
