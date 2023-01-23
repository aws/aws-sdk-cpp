/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about a specific version of a message
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplateVersionResponse">AWS
   * API Reference</a></p>
   */
  class TemplateVersionResponse
  {
  public:
    AWS_PINPOINT_API TemplateVersionResponse();
    AWS_PINPOINT_API TemplateVersionResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TemplateVersionResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline TemplateVersionResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline TemplateVersionResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * created.</p>
     */
    inline TemplateVersionResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const{ return m_defaultSubstitutions; }

    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }

    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(const Aws::String& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = value; }

    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(Aws::String&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::move(value); }

    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(const char* value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions.assign(value); }

    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline TemplateVersionResponse& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}

    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline TemplateVersionResponse& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}

    /**
     * <p>A JSON object that specifies the default values that are used for message
     * variables in the version of the message template. This object is a set of
     * key-value pairs. Each key defines a message variable in the template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline TemplateVersionResponse& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline TemplateVersionResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline TemplateVersionResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the version of the message template was
     * last modified.</p>
     */
    inline TemplateVersionResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }

    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }

    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline TemplateVersionResponse& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline TemplateVersionResponse& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the version of the message template.</p>
     */
    inline TemplateVersionResponse& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}


    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the message template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the message template.</p>
     */
    inline TemplateVersionResponse& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template.</p>
     */
    inline TemplateVersionResponse& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template.</p>
     */
    inline TemplateVersionResponse& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline const Aws::String& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(const Aws::String& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(Aws::String&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(const char* value) { m_templateTypeHasBeenSet = true; m_templateType.assign(value); }

    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline TemplateVersionResponse& WithTemplateType(const Aws::String& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline TemplateVersionResponse& WithTemplateType(Aws::String&& value) { SetTemplateType(std::move(value)); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. Possible
     * values are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline TemplateVersionResponse& WithTemplateType(const char* value) { SetTemplateType(value); return *this;}


    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline TemplateVersionResponse& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline TemplateVersionResponse& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the version of the message template. This value is
     * an integer that Amazon Pinpoint automatically increments and assigns to each new
     * version of a template.</p>
     */
    inline TemplateVersionResponse& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
