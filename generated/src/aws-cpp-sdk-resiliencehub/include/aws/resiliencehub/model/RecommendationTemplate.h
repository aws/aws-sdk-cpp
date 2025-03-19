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
    AWS_RESILIENCEHUB_API RecommendationTemplate() = default;
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
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    RecommendationTemplate& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
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
    inline const Aws::String& GetAssessmentArn() const { return m_assessmentArn; }
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
    template<typename AssessmentArnT = Aws::String>
    void SetAssessmentArn(AssessmentArnT&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::forward<AssessmentArnT>(value); }
    template<typename AssessmentArnT = Aws::String>
    RecommendationTemplate& WithAssessmentArn(AssessmentArnT&& value) { SetAssessmentArn(std::forward<AssessmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    RecommendationTemplate& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd> <p>The
     * template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The template
     * is CloudFormation YAML.</p> </dd> </dl>
     */
    inline TemplateFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(TemplateFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline RecommendationTemplate& WithFormat(TemplateFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message for the recommendation template.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RecommendationTemplate& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the recommendation template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RecommendationTemplate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if replacements are needed.</p>
     */
    inline bool GetNeedsReplacements() const { return m_needsReplacements; }
    inline bool NeedsReplacementsHasBeenSet() const { return m_needsReplacementsHasBeenSet; }
    inline void SetNeedsReplacements(bool value) { m_needsReplacementsHasBeenSet = true; m_needsReplacements = value; }
    inline RecommendationTemplate& WithNeedsReplacements(bool value) { SetNeedsReplacements(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const { return m_recommendationIds; }
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    void SetRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::forward<RecommendationIdsT>(value); }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    RecommendationTemplate& WithRecommendationIds(RecommendationIdsT&& value) { SetRecommendationIds(std::forward<RecommendationIdsT>(value)); return *this;}
    template<typename RecommendationIdsT = Aws::String>
    RecommendationTemplate& AddRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.emplace_back(std::forward<RecommendationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const { return m_recommendationTemplateArn; }
    inline bool RecommendationTemplateArnHasBeenSet() const { return m_recommendationTemplateArnHasBeenSet; }
    template<typename RecommendationTemplateArnT = Aws::String>
    void SetRecommendationTemplateArn(RecommendationTemplateArnT&& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = std::forward<RecommendationTemplateArnT>(value); }
    template<typename RecommendationTemplateArnT = Aws::String>
    RecommendationTemplate& WithRecommendationTemplateArn(RecommendationTemplateArnT&& value) { SetRecommendationTemplateArn(std::forward<RecommendationTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline const Aws::Vector<RenderRecommendationType>& GetRecommendationTypes() const { return m_recommendationTypes; }
    inline bool RecommendationTypesHasBeenSet() const { return m_recommendationTypesHasBeenSet; }
    template<typename RecommendationTypesT = Aws::Vector<RenderRecommendationType>>
    void SetRecommendationTypes(RecommendationTypesT&& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes = std::forward<RecommendationTypesT>(value); }
    template<typename RecommendationTypesT = Aws::Vector<RenderRecommendationType>>
    RecommendationTemplate& WithRecommendationTypes(RecommendationTypesT&& value) { SetRecommendationTypes(std::forward<RecommendationTypesT>(value)); return *this;}
    inline RecommendationTemplate& AddRecommendationTypes(RenderRecommendationType value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    RecommendationTemplate& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline RecommendationTemplateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecommendationTemplateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecommendationTemplate& WithStatus(RecommendationTemplateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RecommendationTemplate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RecommendationTemplate& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The file location of the template.</p>
     */
    inline const S3Location& GetTemplatesLocation() const { return m_templatesLocation; }
    inline bool TemplatesLocationHasBeenSet() const { return m_templatesLocationHasBeenSet; }
    template<typename TemplatesLocationT = S3Location>
    void SetTemplatesLocation(TemplatesLocationT&& value) { m_templatesLocationHasBeenSet = true; m_templatesLocation = std::forward<TemplatesLocationT>(value); }
    template<typename TemplatesLocationT = S3Location>
    RecommendationTemplate& WithTemplatesLocation(TemplatesLocationT&& value) { SetTemplatesLocation(std::forward<TemplatesLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    TemplateFormat m_format{TemplateFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_needsReplacements{false};
    bool m_needsReplacementsHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    Aws::String m_recommendationTemplateArn;
    bool m_recommendationTemplateArnHasBeenSet = false;

    Aws::Vector<RenderRecommendationType> m_recommendationTypes;
    bool m_recommendationTypesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    RecommendationTemplateStatus m_status{RecommendationTemplateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    S3Location m_templatesLocation;
    bool m_templatesLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
