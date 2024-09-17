/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/TemplateFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/RecommendationTemplateStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/S3Location.h>
#include <aws/resiliencehub/model/RenderRecommendationType.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a recommendation template created with the
   * <a>CreateRecommendationTemplate</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RecommendationTemplate">AWS
   * API Reference</a></p>
   */
  class RecommendationTemplate
  {
  public:
    AWS_RESILIENCEHUB_API RecommendationTemplate();
    AWS_RESILIENCEHUB_API RecommendationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API RecommendationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline RecommendationTemplate& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline RecommendationTemplate& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline RecommendationTemplate& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }
    inline RecommendationTemplate& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}
    inline RecommendationTemplate& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}
    inline RecommendationTemplate& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline RecommendationTemplate& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline RecommendationTemplate& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd> <p>The
     * template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The template
     * is CloudFormation YAML.</p> </dd> </dl>
     */
    inline const TemplateFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const TemplateFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(TemplateFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline RecommendationTemplate& WithFormat(const TemplateFormat& value) { SetFormat(value); return *this;}
    inline RecommendationTemplate& WithFormat(TemplateFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message for the recommendation template.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline RecommendationTemplate& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline RecommendationTemplate& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline RecommendationTemplate& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the recommendation template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RecommendationTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecommendationTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecommendationTemplate& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if replacements are needed.</p>
     */
    inline bool GetNeedsReplacements() const{ return m_needsReplacements; }
    inline bool NeedsReplacementsHasBeenSet() const { return m_needsReplacementsHasBeenSet; }
    inline void SetNeedsReplacements(bool value) { m_needsReplacementsHasBeenSet = true; m_needsReplacements = value; }
    inline RecommendationTemplate& WithNeedsReplacements(bool value) { SetNeedsReplacements(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }
    inline RecommendationTemplate& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}
    inline RecommendationTemplate& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}
    inline RecommendationTemplate& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }
    inline RecommendationTemplate& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }
    inline RecommendationTemplate& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const{ return m_recommendationTemplateArn; }
    inline bool RecommendationTemplateArnHasBeenSet() const { return m_recommendationTemplateArnHasBeenSet; }
    inline void SetRecommendationTemplateArn(const Aws::String& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = value; }
    inline void SetRecommendationTemplateArn(Aws::String&& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = std::move(value); }
    inline void SetRecommendationTemplateArn(const char* value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn.assign(value); }
    inline RecommendationTemplate& WithRecommendationTemplateArn(const Aws::String& value) { SetRecommendationTemplateArn(value); return *this;}
    inline RecommendationTemplate& WithRecommendationTemplateArn(Aws::String&& value) { SetRecommendationTemplateArn(std::move(value)); return *this;}
    inline RecommendationTemplate& WithRecommendationTemplateArn(const char* value) { SetRecommendationTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline const Aws::Vector<RenderRecommendationType>& GetRecommendationTypes() const{ return m_recommendationTypes; }
    inline bool RecommendationTypesHasBeenSet() const { return m_recommendationTypesHasBeenSet; }
    inline void SetRecommendationTypes(const Aws::Vector<RenderRecommendationType>& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes = value; }
    inline void SetRecommendationTypes(Aws::Vector<RenderRecommendationType>&& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes = std::move(value); }
    inline RecommendationTemplate& WithRecommendationTypes(const Aws::Vector<RenderRecommendationType>& value) { SetRecommendationTypes(value); return *this;}
    inline RecommendationTemplate& WithRecommendationTypes(Aws::Vector<RenderRecommendationType>&& value) { SetRecommendationTypes(std::move(value)); return *this;}
    inline RecommendationTemplate& AddRecommendationTypes(const RenderRecommendationType& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(value); return *this; }
    inline RecommendationTemplate& AddRecommendationTypes(RenderRecommendationType&& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline RecommendationTemplate& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline RecommendationTemplate& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline const RecommendationTemplateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RecommendationTemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RecommendationTemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RecommendationTemplate& WithStatus(const RecommendationTemplateStatus& value) { SetStatus(value); return *this;}
    inline RecommendationTemplate& WithStatus(RecommendationTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RecommendationTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RecommendationTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RecommendationTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RecommendationTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RecommendationTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RecommendationTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RecommendationTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RecommendationTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RecommendationTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file location of the template.</p>
     */
    inline const S3Location& GetTemplatesLocation() const{ return m_templatesLocation; }
    inline bool TemplatesLocationHasBeenSet() const { return m_templatesLocationHasBeenSet; }
    inline void SetTemplatesLocation(const S3Location& value) { m_templatesLocationHasBeenSet = true; m_templatesLocation = value; }
    inline void SetTemplatesLocation(S3Location&& value) { m_templatesLocationHasBeenSet = true; m_templatesLocation = std::move(value); }
    inline RecommendationTemplate& WithTemplatesLocation(const S3Location& value) { SetTemplatesLocation(value); return *this;}
    inline RecommendationTemplate& WithTemplatesLocation(S3Location&& value) { SetTemplatesLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    TemplateFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_needsReplacements;
    bool m_needsReplacementsHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    Aws::String m_recommendationTemplateArn;
    bool m_recommendationTemplateArnHasBeenSet = false;

    Aws::Vector<RenderRecommendationType> m_recommendationTypes;
    bool m_recommendationTypesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    RecommendationTemplateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    S3Location m_templatesLocation;
    bool m_templatesLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
