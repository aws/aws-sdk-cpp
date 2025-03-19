/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationTypeDisplayHints.h>
#include <aws/pinpoint-sms-voice-v2/model/SupportedAssociation.h>
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
   * <p>Provides information on the supported registration type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationTypeDefinition">AWS
   * API Reference</a></p>
   */
  class RegistrationTypeDefinition
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationTypeDefinition() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationTypeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationTypeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const { return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    template<typename RegistrationTypeT = Aws::String>
    void SetRegistrationType(RegistrationTypeT&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::forward<RegistrationTypeT>(value); }
    template<typename RegistrationTypeT = Aws::String>
    RegistrationTypeDefinition& WithRegistrationType(RegistrationTypeT&& value) { SetRegistrationType(std::forward<RegistrationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline const Aws::Vector<SupportedAssociation>& GetSupportedAssociations() const { return m_supportedAssociations; }
    inline bool SupportedAssociationsHasBeenSet() const { return m_supportedAssociationsHasBeenSet; }
    template<typename SupportedAssociationsT = Aws::Vector<SupportedAssociation>>
    void SetSupportedAssociations(SupportedAssociationsT&& value) { m_supportedAssociationsHasBeenSet = true; m_supportedAssociations = std::forward<SupportedAssociationsT>(value); }
    template<typename SupportedAssociationsT = Aws::Vector<SupportedAssociation>>
    RegistrationTypeDefinition& WithSupportedAssociations(SupportedAssociationsT&& value) { SetSupportedAssociations(std::forward<SupportedAssociationsT>(value)); return *this;}
    template<typename SupportedAssociationsT = SupportedAssociation>
    RegistrationTypeDefinition& AddSupportedAssociations(SupportedAssociationsT&& value) { m_supportedAssociationsHasBeenSet = true; m_supportedAssociations.emplace_back(std::forward<SupportedAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides help information on the registration.</p>
     */
    inline const RegistrationTypeDisplayHints& GetDisplayHints() const { return m_displayHints; }
    inline bool DisplayHintsHasBeenSet() const { return m_displayHintsHasBeenSet; }
    template<typename DisplayHintsT = RegistrationTypeDisplayHints>
    void SetDisplayHints(DisplayHintsT&& value) { m_displayHintsHasBeenSet = true; m_displayHints = std::forward<DisplayHintsT>(value); }
    template<typename DisplayHintsT = RegistrationTypeDisplayHints>
    RegistrationTypeDefinition& WithDisplayHints(DisplayHintsT&& value) { SetDisplayHints(std::forward<DisplayHintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Aws::Vector<SupportedAssociation> m_supportedAssociations;
    bool m_supportedAssociationsHasBeenSet = false;

    RegistrationTypeDisplayHints m_displayHints;
    bool m_displayHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
