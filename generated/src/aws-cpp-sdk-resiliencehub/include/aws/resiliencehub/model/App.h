/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppAssessmentScheduleType.h>
#include <aws/resiliencehub/model/AppComplianceStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/AppStatusType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Defines a Resilience Hub application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/App">AWS
   * API Reference</a></p>
   */
  class App
  {
  public:
    AWS_RESILIENCEHUB_API App();
    AWS_RESILIENCEHUB_API App(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API App& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline App& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline App& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline App& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline const AppAssessmentScheduleType& GetAssessmentSchedule() const{ return m_assessmentSchedule; }

    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }

    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline void SetAssessmentSchedule(const AppAssessmentScheduleType& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }

    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline void SetAssessmentSchedule(AppAssessmentScheduleType&& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = std::move(value); }

    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline App& WithAssessmentSchedule(const AppAssessmentScheduleType& value) { SetAssessmentSchedule(value); return *this;}

    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline App& WithAssessmentSchedule(AppAssessmentScheduleType&& value) { SetAssessmentSchedule(std::move(value)); return *this;}


    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline const AppComplianceStatusType& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(const AppComplianceStatusType& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(AppComplianceStatusType&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline App& WithComplianceStatus(const AppComplianceStatusType& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline App& WithComplianceStatus(AppComplianceStatusType&& value) { SetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the app was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp for when the app was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the app was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp for when the app was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp for when the app was created.</p>
     */
    inline App& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp for when the app was created.</p>
     */
    inline App& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The optional description for an app.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for an app.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The optional description for an app.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description for an app.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The optional description for an app.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The optional description for an app.</p>
     */
    inline App& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for an app.</p>
     */
    inline App& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for an app.</p>
     */
    inline App& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp for the most recent compliance evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAppComplianceEvaluationTime() const{ return m_lastAppComplianceEvaluationTime; }

    /**
     * <p>The timestamp for the most recent compliance evaluation.</p>
     */
    inline bool LastAppComplianceEvaluationTimeHasBeenSet() const { return m_lastAppComplianceEvaluationTimeHasBeenSet; }

    /**
     * <p>The timestamp for the most recent compliance evaluation.</p>
     */
    inline void SetLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = value; }

    /**
     * <p>The timestamp for the most recent compliance evaluation.</p>
     */
    inline void SetLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = std::move(value); }

    /**
     * <p>The timestamp for the most recent compliance evaluation.</p>
     */
    inline App& WithLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { SetLastAppComplianceEvaluationTime(value); return *this;}

    /**
     * <p>The timestamp for the most recent compliance evaluation.</p>
     */
    inline App& WithLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { SetLastAppComplianceEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp for the most recent resiliency score evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResiliencyScoreEvaluationTime() const{ return m_lastResiliencyScoreEvaluationTime; }

    /**
     * <p>The timestamp for the most recent resiliency score evaluation.</p>
     */
    inline bool LastResiliencyScoreEvaluationTimeHasBeenSet() const { return m_lastResiliencyScoreEvaluationTimeHasBeenSet; }

    /**
     * <p>The timestamp for the most recent resiliency score evaluation.</p>
     */
    inline void SetLastResiliencyScoreEvaluationTime(const Aws::Utils::DateTime& value) { m_lastResiliencyScoreEvaluationTimeHasBeenSet = true; m_lastResiliencyScoreEvaluationTime = value; }

    /**
     * <p>The timestamp for the most recent resiliency score evaluation.</p>
     */
    inline void SetLastResiliencyScoreEvaluationTime(Aws::Utils::DateTime&& value) { m_lastResiliencyScoreEvaluationTimeHasBeenSet = true; m_lastResiliencyScoreEvaluationTime = std::move(value); }

    /**
     * <p>The timestamp for the most recent resiliency score evaluation.</p>
     */
    inline App& WithLastResiliencyScoreEvaluationTime(const Aws::Utils::DateTime& value) { SetLastResiliencyScoreEvaluationTime(value); return *this;}

    /**
     * <p>The timestamp for the most recent resiliency score evaluation.</p>
     */
    inline App& WithLastResiliencyScoreEvaluationTime(Aws::Utils::DateTime&& value) { SetLastResiliencyScoreEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>The name for the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the application.</p>
     */
    inline App& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the application.</p>
     */
    inline App& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the application.</p>
     */
    inline App& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline App& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline App& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline App& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const{ return m_resiliencyScore; }

    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }

    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }

    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline App& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}


    /**
     * <p>The status of the application.</p>
     */
    inline const AppStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(const AppStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(AppStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the application.</p>
     */
    inline App& WithStatus(const AppStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the application.</p>
     */
    inline App& WithStatus(AppStatusType&& value) { SetStatus(std::move(value)); return *this;}


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
    inline App& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    AppAssessmentScheduleType m_assessmentSchedule;
    bool m_assessmentScheduleHasBeenSet = false;

    AppComplianceStatusType m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastAppComplianceEvaluationTime;
    bool m_lastAppComplianceEvaluationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastResiliencyScoreEvaluationTime;
    bool m_lastResiliencyScoreEvaluationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    double m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    AppStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
