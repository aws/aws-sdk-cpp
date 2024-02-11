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
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDefinition();
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the section of the registration.</p>
     */
    inline const Aws::String& GetSectionPath() const{ return m_sectionPath; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline bool SectionPathHasBeenSet() const { return m_sectionPathHasBeenSet; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetSectionPath(const Aws::String& value) { m_sectionPathHasBeenSet = true; m_sectionPath = value; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetSectionPath(Aws::String&& value) { m_sectionPathHasBeenSet = true; m_sectionPath = std::move(value); }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetSectionPath(const char* value) { m_sectionPathHasBeenSet = true; m_sectionPath.assign(value); }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline RegistrationSectionDefinition& WithSectionPath(const Aws::String& value) { SetSectionPath(value); return *this;}

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline RegistrationSectionDefinition& WithSectionPath(Aws::String&& value) { SetSectionPath(std::move(value)); return *this;}

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline RegistrationSectionDefinition& WithSectionPath(const char* value) { SetSectionPath(value); return *this;}


    /**
     * <p>The path to the section of the registration.</p>
     */
    inline const RegistrationSectionDisplayHints& GetDisplayHints() const{ return m_displayHints; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline bool DisplayHintsHasBeenSet() const { return m_displayHintsHasBeenSet; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetDisplayHints(const RegistrationSectionDisplayHints& value) { m_displayHintsHasBeenSet = true; m_displayHints = value; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetDisplayHints(RegistrationSectionDisplayHints&& value) { m_displayHintsHasBeenSet = true; m_displayHints = std::move(value); }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline RegistrationSectionDefinition& WithDisplayHints(const RegistrationSectionDisplayHints& value) { SetDisplayHints(value); return *this;}

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline RegistrationSectionDefinition& WithDisplayHints(RegistrationSectionDisplayHints&& value) { SetDisplayHints(std::move(value)); return *this;}

  private:

    Aws::String m_sectionPath;
    bool m_sectionPathHasBeenSet = false;

    RegistrationSectionDisplayHints m_displayHints;
    bool m_displayHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
