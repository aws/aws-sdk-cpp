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
   * <p>Defines an application summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppSummary">AWS
   * API Reference</a></p>
   */
  class AppSummary
  {
  public:
    AWS_RESILIENCEHUB_API AppSummary();
    AWS_RESILIENCEHUB_API AppSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AppSummary& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AppSummary& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AppSummary& WithAppArn(const char* value) { SetAppArn(value); return *this;}


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
    inline AppSummary& WithAssessmentSchedule(const AppAssessmentScheduleType& value) { SetAssessmentSchedule(value); return *this;}

    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline AppSummary& WithAssessmentSchedule(AppAssessmentScheduleType&& value) { SetAssessmentSchedule(std::move(value)); return *this;}


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
    inline AppSummary& WithComplianceStatus(const AppComplianceStatusType& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline AppSummary& WithComplianceStatus(AppComplianceStatusType&& value) { SetComplianceStatus(std::move(value)); return *this;}


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
    inline AppSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp for when the app was created.</p>
     */
    inline AppSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline AppSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for an app.</p>
     */
    inline AppSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for an app.</p>
     */
    inline AppSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline AppSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline AppSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline AppSummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline AppSummary& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}


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
    inline AppSummary& WithStatus(const AppStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the application.</p>
     */
    inline AppSummary& WithStatus(AppStatusType&& value) { SetStatus(std::move(value)); return *this;}

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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    AppStatusType m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
