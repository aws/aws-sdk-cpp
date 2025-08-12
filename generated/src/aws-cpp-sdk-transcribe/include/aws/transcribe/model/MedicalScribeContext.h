/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalScribePatientContext.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>The <code>MedicalScribeContext</code> object that contains contextual
   * information used to generate customized clinical notes.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribeContext">AWS
   * API Reference</a></p>
   */
  class MedicalScribeContext
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalScribeContext() = default;
    AWS_TRANSCRIBESERVICE_API MedicalScribeContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains patient-specific information.</p>
     */
    inline const MedicalScribePatientContext& GetPatientContext() const { return m_patientContext; }
    inline bool PatientContextHasBeenSet() const { return m_patientContextHasBeenSet; }
    template<typename PatientContextT = MedicalScribePatientContext>
    void SetPatientContext(PatientContextT&& value) { m_patientContextHasBeenSet = true; m_patientContext = std::forward<PatientContextT>(value); }
    template<typename PatientContextT = MedicalScribePatientContext>
    MedicalScribeContext& WithPatientContext(PatientContextT&& value) { SetPatientContext(std::forward<PatientContextT>(value)); return *this;}
    ///@}
  private:

    MedicalScribePatientContext m_patientContext;
    bool m_patientContextHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
