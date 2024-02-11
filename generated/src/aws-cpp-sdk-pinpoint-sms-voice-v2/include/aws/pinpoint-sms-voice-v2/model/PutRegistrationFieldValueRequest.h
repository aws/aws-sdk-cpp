/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class PutRegistrationFieldValueRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutRegistrationFieldValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRegistrationFieldValue"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline PutRegistrationFieldValueRequest& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline PutRegistrationFieldValueRequest& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline PutRegistrationFieldValueRequest& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


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
    inline PutRegistrationFieldValueRequest& WithFieldPath(const Aws::String& value) { SetFieldPath(value); return *this;}

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline PutRegistrationFieldValueRequest& WithFieldPath(Aws::String&& value) { SetFieldPath(std::move(value)); return *this;}

    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline PutRegistrationFieldValueRequest& WithFieldPath(const char* value) { SetFieldPath(value); return *this;}


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
    inline PutRegistrationFieldValueRequest& WithSelectChoices(const Aws::Vector<Aws::String>& value) { SetSelectChoices(value); return *this;}

    /**
     * <p>An array of values for the form field.</p>
     */
    inline PutRegistrationFieldValueRequest& WithSelectChoices(Aws::Vector<Aws::String>&& value) { SetSelectChoices(std::move(value)); return *this;}

    /**
     * <p>An array of values for the form field.</p>
     */
    inline PutRegistrationFieldValueRequest& AddSelectChoices(const Aws::String& value) { m_selectChoicesHasBeenSet = true; m_selectChoices.push_back(value); return *this; }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline PutRegistrationFieldValueRequest& AddSelectChoices(Aws::String&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of values for the form field.</p>
     */
    inline PutRegistrationFieldValueRequest& AddSelectChoices(const char* value) { m_selectChoicesHasBeenSet = true; m_selectChoices.push_back(value); return *this; }


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
    inline PutRegistrationFieldValueRequest& WithTextValue(const Aws::String& value) { SetTextValue(value); return *this;}

    /**
     * <p>The text data for a free form field.</p>
     */
    inline PutRegistrationFieldValueRequest& WithTextValue(Aws::String&& value) { SetTextValue(std::move(value)); return *this;}

    /**
     * <p>The text data for a free form field.</p>
     */
    inline PutRegistrationFieldValueRequest& WithTextValue(const char* value) { SetTextValue(value); return *this;}


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
    inline PutRegistrationFieldValueRequest& WithRegistrationAttachmentId(const Aws::String& value) { SetRegistrationAttachmentId(value); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline PutRegistrationFieldValueRequest& WithRegistrationAttachmentId(Aws::String&& value) { SetRegistrationAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline PutRegistrationFieldValueRequest& WithRegistrationAttachmentId(const char* value) { SetRegistrationAttachmentId(value); return *this;}

  private:

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    Aws::String m_fieldPath;
    bool m_fieldPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectChoices;
    bool m_selectChoicesHasBeenSet = false;

    Aws::String m_textValue;
    bool m_textValueHasBeenSet = false;

    Aws::String m_registrationAttachmentId;
    bool m_registrationAttachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
