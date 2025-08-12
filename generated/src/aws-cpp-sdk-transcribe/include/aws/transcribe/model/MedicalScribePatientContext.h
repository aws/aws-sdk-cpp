/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/Pronouns.h>
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
   * <p>Contains patient-specific information used to customize the clinical note
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribePatientContext">AWS
   * API Reference</a></p>
   */
  class MedicalScribePatientContext
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalScribePatientContext() = default;
    AWS_TRANSCRIBESERVICE_API MedicalScribePatientContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribePatientContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The patient's preferred pronouns that the user wants to provide as a context
     * for clinical note generation.</p>
     */
    inline Pronouns GetPronouns() const { return m_pronouns; }
    inline bool PronounsHasBeenSet() const { return m_pronounsHasBeenSet; }
    inline void SetPronouns(Pronouns value) { m_pronounsHasBeenSet = true; m_pronouns = value; }
    inline MedicalScribePatientContext& WithPronouns(Pronouns value) { SetPronouns(value); return *this;}
    ///@}
  private:

    Pronouns m_pronouns{Pronouns::NOT_SET};
    bool m_pronounsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
