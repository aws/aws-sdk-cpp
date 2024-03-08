/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides the values of the specified field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationFieldValueInformation">AWS
   * API Reference</a></p>
   */
  class RegistrationFieldValueInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldValueInformation();
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldValueInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldValueInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline const Aws::String& GetFieldPath() const{ return m_fieldPath; }

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline bool FieldPathHasBeenSet() const { return m_fieldPathHasBeenSet; }

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline void SetFieldPath(const Aws::String& value) { m_fieldPathHasBeenSet = true; m_fieldPath = value; }

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline void SetFieldPath(Aws::String&& value) { m_fieldPathHasBeenSet = true; m_fieldPath = std::move(value); }

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline void SetFieldPath(const char* value) { m_fieldPathHasBeenSet = true; m_fieldPath.assign(value); }

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline RegistrationFieldValueInformation& WithFieldPath(const Aws::String& value) { SetFieldPath(value); return *this;}

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline RegistrationFieldValueInformation& WithFieldPath(Aws::String&& value) { SetFieldPath(std::move(value)); return *this;}

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline RegistrationFieldValueInformation& WithFieldPath(const char* value) { SetFieldPath(value); return *this;}


    /**
     * <p>An array of values for the form field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectChoices() const{ return m_selectChoices; }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline bool SelectChoicesHasBeenSet() const { return m_selectChoicesHasBeenSet; }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline void SetSelectChoices(const Aws::Vector<Aws::String>& value) { m_selectChoicesHasBeenSet = true; m_selectChoices = value; }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline void SetSelectChoices(Aws::Vector<Aws::String>&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices = std::move(value); }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline RegistrationFieldValueInformation& WithSelectChoices(const Aws::Vector<Aws::String>& value) { SetSelectChoices(value); return *this;}

    /**
     * <p>An array of values for the form field.</p>
     */
    inline RegistrationFieldValueInformation& WithSelectChoices(Aws::Vector<Aws::String>&& value) { SetSelectChoices(std::move(value)); return *this;}

    /**
     * <p>An array of values for the form field.</p>
     */
    inline RegistrationFieldValueInformation& AddSelectChoices(const Aws::String& value) { m_selectChoicesHasBeenSet = true; m_selectChoices.push_back(value); return *this; }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline RegistrationFieldValueInformation& AddSelectChoices(Aws::String&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline RegistrationFieldValueInformation& AddSelectChoices(const char* value) { m_selectChoicesHasBeenSet = true; m_selectChoices.push_back(value); return *this; }


    /**
     * <p>The text data for a free form field.</p>
     */
    inline const Aws::String& GetTextValue() const{ return m_textValue; }

    /**
     * <p>The text data for a free form field.</p>
     */
    inline bool TextValueHasBeenSet() const { return m_textValueHasBeenSet; }

    /**
     * <p>The text data for a free form field.</p>
     */
    inline void SetTextValue(const Aws::String& value) { m_textValueHasBeenSet = true; m_textValue = value; }

    /**
     * <p>The text data for a free form field.</p>
     */
    inline void SetTextValue(Aws::String&& value) { m_textValueHasBeenSet = true; m_textValue = std::move(value); }

    /**
     * <p>The text data for a free form field.</p>
     */
    inline void SetTextValue(const char* value) { m_textValueHasBeenSet = true; m_textValue.assign(value); }

    /**
     * <p>The text data for a free form field.</p>
     */
    inline RegistrationFieldValueInformation& WithTextValue(const Aws::String& value) { SetTextValue(value); return *this;}

    /**
     * <p>The text data for a free form field.</p>
     */
    inline RegistrationFieldValueInformation& WithTextValue(Aws::String&& value) { SetTextValue(std::move(value)); return *this;}

    /**
     * <p>The text data for a free form field.</p>
     */
    inline RegistrationFieldValueInformation& WithTextValue(const char* value) { SetTextValue(value); return *this;}


    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const{ return m_registrationAttachmentId; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline bool RegistrationAttachmentIdHasBeenSet() const { return m_registrationAttachmentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(const Aws::String& value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId = value; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(Aws::String&& value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId = std::move(value); }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(const char* value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId.assign(value); }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline RegistrationFieldValueInformation& WithRegistrationAttachmentId(const Aws::String& value) { SetRegistrationAttachmentId(value); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline RegistrationFieldValueInformation& WithRegistrationAttachmentId(Aws::String&& value) { SetRegistrationAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline RegistrationFieldValueInformation& WithRegistrationAttachmentId(const char* value) { SetRegistrationAttachmentId(value); return *this;}


    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline const Aws::String& GetDeniedReason() const{ return m_deniedReason; }

    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline bool DeniedReasonHasBeenSet() const { return m_deniedReasonHasBeenSet; }

    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline void SetDeniedReason(const Aws::String& value) { m_deniedReasonHasBeenSet = true; m_deniedReason = value; }

    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline void SetDeniedReason(Aws::String&& value) { m_deniedReasonHasBeenSet = true; m_deniedReason = std::move(value); }

    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline void SetDeniedReason(const char* value) { m_deniedReasonHasBeenSet = true; m_deniedReason.assign(value); }

    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline RegistrationFieldValueInformation& WithDeniedReason(const Aws::String& value) { SetDeniedReason(value); return *this;}

    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline RegistrationFieldValueInformation& WithDeniedReason(Aws::String&& value) { SetDeniedReason(std::move(value)); return *this;}

    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline RegistrationFieldValueInformation& WithDeniedReason(const char* value) { SetDeniedReason(value); return *this;}

  private:

    Aws::String m_fieldPath;
    bool m_fieldPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectChoices;
    bool m_selectChoicesHasBeenSet = false;

    Aws::String m_textValue;
    bool m_textValueHasBeenSet = false;

    Aws::String m_registrationAttachmentId;
    bool m_registrationAttachmentIdHasBeenSet = false;

    Aws::String m_deniedReason;
    bool m_deniedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
