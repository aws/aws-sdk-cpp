﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TemplateType.h>
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
   * <p>Provides information about the content and settings for a message template
   * that can be used in text messages that are sent through the SMS
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SMSTemplateResponse">AWS
   * API Reference</a></p>
   */
  class SMSTemplateResponse
  {
  public:
    AWS_PINPOINT_API SMSTemplateResponse() = default;
    AWS_PINPOINT_API SMSTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SMSTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SMSTemplateResponse& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message body that's used in text messages that are based on the message
     * template.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    SMSTemplateResponse& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    SMSTemplateResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const { return m_defaultSubstitutions; }
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }
    template<typename DefaultSubstitutionsT = Aws::String>
    void SetDefaultSubstitutions(DefaultSubstitutionsT&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::forward<DefaultSubstitutionsT>(value); }
    template<typename DefaultSubstitutionsT = Aws::String>
    SMSTemplateResponse& WithDefaultSubstitutions(DefaultSubstitutionsT&& value) { SetDefaultSubstitutions(std::forward<DefaultSubstitutionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    SMSTemplateResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline const Aws::String& GetRecommenderId() const { return m_recommenderId; }
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }
    template<typename RecommenderIdT = Aws::String>
    void SetRecommenderId(RecommenderIdT&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::forward<RecommenderIdT>(value); }
    template<typename RecommenderIdT = Aws::String>
    SMSTemplateResponse& WithRecommenderId(RecommenderIdT&& value) { SetRecommenderId(std::forward<RecommenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SMSTemplateResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SMSTemplateResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const { return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    template<typename TemplateDescriptionT = Aws::String>
    void SetTemplateDescription(TemplateDescriptionT&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::forward<TemplateDescriptionT>(value); }
    template<typename TemplateDescriptionT = Aws::String>
    SMSTemplateResponse& WithTemplateDescription(TemplateDescriptionT&& value) { SetTemplateDescription(std::forward<TemplateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    SMSTemplateResponse& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of channel that the message template is designed for. For an SMS
     * template, this value is SMS.</p>
     */
    inline TemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(TemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline SMSTemplateResponse& WithTemplateType(TemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    SMSTemplateResponse& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType{TemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
