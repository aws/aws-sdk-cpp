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
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecommendationTemplate"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline CreateRecommendationTemplateRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline CreateRecommendationTemplateRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline CreateRecommendationTemplateRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that will contain the recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline CreateRecommendationTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline CreateRecommendationTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline CreateRecommendationTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The format for the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline const TemplateFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format for the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format for the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline void SetFormat(const TemplateFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format for the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline void SetFormat(TemplateFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format for the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline CreateRecommendationTemplateRequest& WithFormat(const TemplateFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format for the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline CreateRecommendationTemplateRequest& WithFormat(TemplateFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The name for the recommendation template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifiers for the recommendations used to create a recommendation
     * template.</p>
     */
    inline CreateRecommendationTemplateRequest& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }


    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline const Aws::Vector<RenderRecommendationType>& GetRecommendationTypes() const{ return m_recommendationTypes; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline bool RecommendationTypesHasBeenSet() const { return m_recommendationTypesHasBeenSet; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline void SetRecommendationTypes(const Aws::Vector<RenderRecommendationType>& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes = value; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline void SetRecommendationTypes(Aws::Vector<RenderRecommendationType>&& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes = std::move(value); }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline CreateRecommendationTemplateRequest& WithRecommendationTypes(const Aws::Vector<RenderRecommendationType>& value) { SetRecommendationTypes(value); return *this;}

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline CreateRecommendationTemplateRequest& WithRecommendationTypes(Aws::Vector<RenderRecommendationType>&& value) { SetRecommendationTypes(std::move(value)); return *this;}

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline CreateRecommendationTemplateRequest& AddRecommendationTypes(const RenderRecommendationType& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(value); return *this; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline CreateRecommendationTemplateRequest& AddRecommendationTypes(RenderRecommendationType&& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateRecommendationTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    TemplateFormat m_format;
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
