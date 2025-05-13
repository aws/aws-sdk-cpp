/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/TemplateFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/RenderRecommendationType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class CreateRecommendationTemplateRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecommendationTemplate"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


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
    CreateRecommendationTemplateRequest& WithAssessmentArn(AssessmentArnT&& value) { SetAssessmentArn(std::forward<AssessmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    CreateRecommendationTemplateRequest& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateRecommendationTemplateRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline TemplateFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(TemplateFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline CreateRecommendationTemplateRequest& WithFormat(TemplateFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the recommendation template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRecommendationTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const { return m_recommendationIds; }
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    void SetRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::forward<RecommendationIdsT>(value); }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    CreateRecommendationTemplateRequest& WithRecommendationIds(RecommendationIdsT&& value) { SetRecommendationIds(std::forward<RecommendationIdsT>(value)); return *this;}
    template<typename RecommendationIdsT = Aws::String>
    CreateRecommendationTemplateRequest& AddRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.emplace_back(std::forward<RecommendationIdsT>(value)); return *this; }
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
    CreateRecommendationTemplateRequest& WithRecommendationTypes(RecommendationTypesT&& value) { SetRecommendationTypes(std::forward<RecommendationTypesT>(value)); return *this;}
    inline CreateRecommendationTemplateRequest& AddRecommendationTypes(RenderRecommendationType value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(value); return *this; }
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
    CreateRecommendationTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRecommendationTemplateRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    TemplateFormat m_format{TemplateFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    Aws::Vector<RenderRecommendationType> m_recommendationTypes;
    bool m_recommendationTypesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
