/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AssessmentStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>
#include <aws/resiliencehub/model/Cost.h>
#include <aws/resiliencehub/model/DriftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/AssessmentInvoker.h>
#include <aws/resiliencehub/model/ResiliencyPolicy.h>
#include <aws/resiliencehub/model/ResiliencyScore.h>
#include <aws/resiliencehub/model/ResourceErrorsDetails.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/DisruptionCompliance.h>
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
   * <p>Defines an application assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppAssessment">AWS
   * API Reference</a></p>
   */
  class AppAssessment
  {
  public:
    AWS_RESILIENCEHUB_API AppAssessment();
    AWS_RESILIENCEHUB_API AppAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppAssessment& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppAssessment& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppAssessment& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>Version of an application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>Version of an application.</p>
     */
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }

    /**
     * <p>Version of an application.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }

    /**
     * <p>Version of an application.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }

    /**
     * <p>Version of an application.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }

    /**
     * <p>Version of an application.</p>
     */
    inline AppAssessment& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>Version of an application.</p>
     */
    inline AppAssessment& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>Version of an application.</p>
     */
    inline AppAssessment& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppAssessment& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppAssessment& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppAssessment& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}


    /**
     * <p>Name of the assessment.</p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p>Name of the assessment.</p>
     */
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }

    /**
     * <p>Name of the assessment.</p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>Name of the assessment.</p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }

    /**
     * <p>Name of the assessment.</p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p>Name of the assessment.</p>
     */
    inline AppAssessment& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>Name of the assessment.</p>
     */
    inline AppAssessment& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}

    /**
     * <p>Name of the assessment.</p>
     */
    inline AppAssessment& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}


    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline const AssessmentStatus& GetAssessmentStatus() const{ return m_assessmentStatus; }

    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }

    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline void SetAssessmentStatus(const AssessmentStatus& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = value; }

    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline void SetAssessmentStatus(AssessmentStatus&& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = std::move(value); }

    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline AppAssessment& WithAssessmentStatus(const AssessmentStatus& value) { SetAssessmentStatus(value); return *this;}

    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline AppAssessment& WithAssessmentStatus(AssessmentStatus&& value) { SetAssessmentStatus(std::move(value)); return *this;}


    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetCompliance() const{ return m_compliance; }

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline void SetCompliance(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline void SetCompliance(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline AppAssessment& WithCompliance(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { SetCompliance(value); return *this;}

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline AppAssessment& WithCompliance(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { SetCompliance(std::move(value)); return *this;}

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline AppAssessment& AddCompliance(const DisruptionType& key, const DisruptionCompliance& value) { m_complianceHasBeenSet = true; m_compliance.emplace(key, value); return *this; }

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline AppAssessment& AddCompliance(DisruptionType&& key, const DisruptionCompliance& value) { m_complianceHasBeenSet = true; m_compliance.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline AppAssessment& AddCompliance(const DisruptionType& key, DisruptionCompliance&& value) { m_complianceHasBeenSet = true; m_compliance.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline AppAssessment& AddCompliance(DisruptionType&& key, DisruptionCompliance&& value) { m_complianceHasBeenSet = true; m_compliance.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Current status of the compliance for the resiliency policy.</p>
     */
    inline const ComplianceStatus& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>Current status of the compliance for the resiliency policy.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>Current status of the compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(const ComplianceStatus& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>Current status of the compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(ComplianceStatus&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p>Current status of the compliance for the resiliency policy.</p>
     */
    inline AppAssessment& WithComplianceStatus(const ComplianceStatus& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>Current status of the compliance for the resiliency policy.</p>
     */
    inline AppAssessment& WithComplianceStatus(ComplianceStatus&& value) { SetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>Cost for the application.</p>
     */
    inline const Cost& GetCost() const{ return m_cost; }

    /**
     * <p>Cost for the application.</p>
     */
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }

    /**
     * <p>Cost for the application.</p>
     */
    inline void SetCost(const Cost& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>Cost for the application.</p>
     */
    inline void SetCost(Cost&& value) { m_costHasBeenSet = true; m_cost = std::move(value); }

    /**
     * <p>Cost for the application.</p>
     */
    inline AppAssessment& WithCost(const Cost& value) { SetCost(value); return *this;}

    /**
     * <p>Cost for the application.</p>
     */
    inline AppAssessment& WithCost(Cost&& value) { SetCost(std::move(value)); return *this;}


    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline const DriftStatus& GetDriftStatus() const{ return m_driftStatus; }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline void SetDriftStatus(const DriftStatus& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline void SetDriftStatus(DriftStatus&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline AppAssessment& WithDriftStatus(const DriftStatus& value) { SetDriftStatus(value); return *this;}

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline AppAssessment& WithDriftStatus(DriftStatus&& value) { SetDriftStatus(std::move(value)); return *this;}


    /**
     * <p>End time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>End time for the action.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>End time for the action.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>End time for the action.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>End time for the action.</p>
     */
    inline AppAssessment& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>End time for the action.</p>
     */
    inline AppAssessment& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The entity that invoked the assessment.</p>
     */
    inline const AssessmentInvoker& GetInvoker() const{ return m_invoker; }

    /**
     * <p>The entity that invoked the assessment.</p>
     */
    inline bool InvokerHasBeenSet() const { return m_invokerHasBeenSet; }

    /**
     * <p>The entity that invoked the assessment.</p>
     */
    inline void SetInvoker(const AssessmentInvoker& value) { m_invokerHasBeenSet = true; m_invoker = value; }

    /**
     * <p>The entity that invoked the assessment.</p>
     */
    inline void SetInvoker(AssessmentInvoker&& value) { m_invokerHasBeenSet = true; m_invoker = std::move(value); }

    /**
     * <p>The entity that invoked the assessment.</p>
     */
    inline AppAssessment& WithInvoker(const AssessmentInvoker& value) { SetInvoker(value); return *this;}

    /**
     * <p>The entity that invoked the assessment.</p>
     */
    inline AppAssessment& WithInvoker(AssessmentInvoker&& value) { SetInvoker(std::move(value)); return *this;}


    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline AppAssessment& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline AppAssessment& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline AppAssessment& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Resiliency policy of an application.</p>
     */
    inline const ResiliencyPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>Resiliency policy of an application.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>Resiliency policy of an application.</p>
     */
    inline void SetPolicy(const ResiliencyPolicy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Resiliency policy of an application.</p>
     */
    inline void SetPolicy(ResiliencyPolicy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>Resiliency policy of an application.</p>
     */
    inline AppAssessment& WithPolicy(const ResiliencyPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Resiliency policy of an application.</p>
     */
    inline AppAssessment& WithPolicy(ResiliencyPolicy&& value) { SetPolicy(std::move(value)); return *this;}


    /**
     * <p>Current resiliency score for an application.</p>
     */
    inline const ResiliencyScore& GetResiliencyScore() const{ return m_resiliencyScore; }

    /**
     * <p>Current resiliency score for an application.</p>
     */
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }

    /**
     * <p>Current resiliency score for an application.</p>
     */
    inline void SetResiliencyScore(const ResiliencyScore& value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }

    /**
     * <p>Current resiliency score for an application.</p>
     */
    inline void SetResiliencyScore(ResiliencyScore&& value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = std::move(value); }

    /**
     * <p>Current resiliency score for an application.</p>
     */
    inline AppAssessment& WithResiliencyScore(const ResiliencyScore& value) { SetResiliencyScore(value); return *this;}

    /**
     * <p>Current resiliency score for an application.</p>
     */
    inline AppAssessment& WithResiliencyScore(ResiliencyScore&& value) { SetResiliencyScore(std::move(value)); return *this;}


    /**
     * <p> A resource error object containing a list of errors retrieving an
     * application's resources. </p>
     */
    inline const ResourceErrorsDetails& GetResourceErrorsDetails() const{ return m_resourceErrorsDetails; }

    /**
     * <p> A resource error object containing a list of errors retrieving an
     * application's resources. </p>
     */
    inline bool ResourceErrorsDetailsHasBeenSet() const { return m_resourceErrorsDetailsHasBeenSet; }

    /**
     * <p> A resource error object containing a list of errors retrieving an
     * application's resources. </p>
     */
    inline void SetResourceErrorsDetails(const ResourceErrorsDetails& value) { m_resourceErrorsDetailsHasBeenSet = true; m_resourceErrorsDetails = value; }

    /**
     * <p> A resource error object containing a list of errors retrieving an
     * application's resources. </p>
     */
    inline void SetResourceErrorsDetails(ResourceErrorsDetails&& value) { m_resourceErrorsDetailsHasBeenSet = true; m_resourceErrorsDetails = std::move(value); }

    /**
     * <p> A resource error object containing a list of errors retrieving an
     * application's resources. </p>
     */
    inline AppAssessment& WithResourceErrorsDetails(const ResourceErrorsDetails& value) { SetResourceErrorsDetails(value); return *this;}

    /**
     * <p> A resource error object containing a list of errors retrieving an
     * application's resources. </p>
     */
    inline AppAssessment& WithResourceErrorsDetails(ResourceErrorsDetails&& value) { SetResourceErrorsDetails(std::move(value)); return *this;}


    /**
     * <p>Starting time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Starting time for the action.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Starting time for the action.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Starting time for the action.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Starting time for the action.</p>
     */
    inline AppAssessment& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Starting time for the action.</p>
     */
    inline AppAssessment& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline AppAssessment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Version name of the published application.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>Version name of the published application.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>Version name of the published application.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>Version name of the published application.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>Version name of the published application.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>Version name of the published application.</p>
     */
    inline AppAssessment& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>Version name of the published application.</p>
     */
    inline AppAssessment& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>Version name of the published application.</p>
     */
    inline AppAssessment& WithVersionName(const char* value) { SetVersionName(value); return *this;}

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    AssessmentStatus m_assessmentStatus;
    bool m_assessmentStatusHasBeenSet = false;

    Aws::Map<DisruptionType, DisruptionCompliance> m_compliance;
    bool m_complianceHasBeenSet = false;

    ComplianceStatus m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    Cost m_cost;
    bool m_costHasBeenSet = false;

    DriftStatus m_driftStatus;
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    AssessmentInvoker m_invoker;
    bool m_invokerHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResiliencyPolicy m_policy;
    bool m_policyHasBeenSet = false;

    ResiliencyScore m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    ResourceErrorsDetails m_resourceErrorsDetails;
    bool m_resourceErrorsDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
