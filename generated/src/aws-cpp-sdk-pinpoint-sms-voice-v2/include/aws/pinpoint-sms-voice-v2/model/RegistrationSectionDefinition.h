/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationSectionDisplayHints.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides information on the specified section definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationSectionDefinition">AWS
   * API Reference</a></p>
   */
  class RegistrationSectionDefinition
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDefinition() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the section of the registration.</p>
     */
    inline const Aws::String& GetSectionPath() const { return m_sectionPath; }
    inline bool SectionPathHasBeenSet() const { return m_sectionPathHasBeenSet; }
    template<typename SectionPathT = Aws::String>
    void SetSectionPath(SectionPathT&& value) { m_sectionPathHasBeenSet = true; m_sectionPath = std::forward<SectionPathT>(value); }
    template<typename SectionPathT = Aws::String>
    RegistrationSectionDefinition& WithSectionPath(SectionPathT&& value) { SetSectionPath(std::forward<SectionPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the section of the registration.</p>
     */
    inline const RegistrationSectionDisplayHints& GetDisplayHints() const { return m_displayHints; }
    inline bool DisplayHintsHasBeenSet() const { return m_displayHintsHasBeenSet; }
    template<typename DisplayHintsT = RegistrationSectionDisplayHints>
    void SetDisplayHints(DisplayHintsT&& value) { m_displayHintsHasBeenSet = true; m_displayHints = std::forward<DisplayHintsT>(value); }
    template<typename DisplayHintsT = RegistrationSectionDisplayHints>
    RegistrationSectionDefinition& WithDisplayHints(DisplayHintsT&& value) { SetDisplayHints(std::forward<DisplayHintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sectionPath;
    bool m_sectionPathHasBeenSet = false;

    RegistrationSectionDisplayHints m_displayHints;
    bool m_displayHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
