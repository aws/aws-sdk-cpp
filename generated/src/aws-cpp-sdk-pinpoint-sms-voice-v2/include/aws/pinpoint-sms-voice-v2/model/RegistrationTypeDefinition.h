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
    AWS_PINPOINTSMSVOICEV2_API RegistrationTypeDefinition();
    AWS_PINPOINTSMSVOICEV2_API RegistrationTypeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationTypeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const{ return m_registrationType; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const Aws::String& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(Aws::String&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const char* value) { m_registrationTypeHasBeenSet = true; m_registrationType.assign(value); }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline RegistrationTypeDefinition& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline RegistrationTypeDefinition& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline RegistrationTypeDefinition& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline const Aws::Vector<SupportedAssociation>& GetSupportedAssociations() const{ return m_supportedAssociations; }

    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline bool SupportedAssociationsHasBeenSet() const { return m_supportedAssociationsHasBeenSet; }

    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline void SetSupportedAssociations(const Aws::Vector<SupportedAssociation>& value) { m_supportedAssociationsHasBeenSet = true; m_supportedAssociations = value; }

    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline void SetSupportedAssociations(Aws::Vector<SupportedAssociation>&& value) { m_supportedAssociationsHasBeenSet = true; m_supportedAssociations = std::move(value); }

    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline RegistrationTypeDefinition& WithSupportedAssociations(const Aws::Vector<SupportedAssociation>& value) { SetSupportedAssociations(value); return *this;}

    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline RegistrationTypeDefinition& WithSupportedAssociations(Aws::Vector<SupportedAssociation>&& value) { SetSupportedAssociations(std::move(value)); return *this;}

    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline RegistrationTypeDefinition& AddSupportedAssociations(const SupportedAssociation& value) { m_supportedAssociationsHasBeenSet = true; m_supportedAssociations.push_back(value); return *this; }

    /**
     * <p>The supported association behavior for the registration type.</p>
     */
    inline RegistrationTypeDefinition& AddSupportedAssociations(SupportedAssociation&& value) { m_supportedAssociationsHasBeenSet = true; m_supportedAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides help information on the registration.</p>
     */
    inline const RegistrationTypeDisplayHints& GetDisplayHints() const{ return m_displayHints; }

    /**
     * <p>Provides help information on the registration.</p>
     */
    inline bool DisplayHintsHasBeenSet() const { return m_displayHintsHasBeenSet; }

    /**
     * <p>Provides help information on the registration.</p>
     */
    inline void SetDisplayHints(const RegistrationTypeDisplayHints& value) { m_displayHintsHasBeenSet = true; m_displayHints = value; }

    /**
     * <p>Provides help information on the registration.</p>
     */
    inline void SetDisplayHints(RegistrationTypeDisplayHints&& value) { m_displayHintsHasBeenSet = true; m_displayHints = std::move(value); }

    /**
     * <p>Provides help information on the registration.</p>
     */
    inline RegistrationTypeDefinition& WithDisplayHints(const RegistrationTypeDisplayHints& value) { SetDisplayHints(value); return *this;}

    /**
     * <p>Provides help information on the registration.</p>
     */
    inline RegistrationTypeDefinition& WithDisplayHints(RegistrationTypeDisplayHints&& value) { SetDisplayHints(std::move(value)); return *this;}

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
