/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Container for the metadata for a Quality check step. For more information,
   * see the topic on <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/build-and-manage-steps.html#step-type-quality-check">QualityCheck
   * step</a> in the <i>Amazon SageMaker Developer Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/QualityCheckStepMetadata">AWS
   * API Reference</a></p>
   */
  class QualityCheckStepMetadata
  {
  public:
    AWS_SAGEMAKER_API QualityCheckStepMetadata() = default;
    AWS_SAGEMAKER_API QualityCheckStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API QualityCheckStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the Quality check step.</p>
     */
    inline const Aws::String& GetCheckType() const { return m_checkType; }
    inline bool CheckTypeHasBeenSet() const { return m_checkTypeHasBeenSet; }
    template<typename CheckTypeT = Aws::String>
    void SetCheckType(CheckTypeT&& value) { m_checkTypeHasBeenSet = true; m_checkType = std::forward<CheckTypeT>(value); }
    template<typename CheckTypeT = Aws::String>
    QualityCheckStepMetadata& WithCheckType(CheckTypeT&& value) { SetCheckType(std::forward<CheckTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline const Aws::String& GetBaselineUsedForDriftCheckStatistics() const { return m_baselineUsedForDriftCheckStatistics; }
    inline bool BaselineUsedForDriftCheckStatisticsHasBeenSet() const { return m_baselineUsedForDriftCheckStatisticsHasBeenSet; }
    template<typename BaselineUsedForDriftCheckStatisticsT = Aws::String>
    void SetBaselineUsedForDriftCheckStatistics(BaselineUsedForDriftCheckStatisticsT&& value) { m_baselineUsedForDriftCheckStatisticsHasBeenSet = true; m_baselineUsedForDriftCheckStatistics = std::forward<BaselineUsedForDriftCheckStatisticsT>(value); }
    template<typename BaselineUsedForDriftCheckStatisticsT = Aws::String>
    QualityCheckStepMetadata& WithBaselineUsedForDriftCheckStatistics(BaselineUsedForDriftCheckStatisticsT&& value) { SetBaselineUsedForDriftCheckStatistics(std::forward<BaselineUsedForDriftCheckStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline const Aws::String& GetBaselineUsedForDriftCheckConstraints() const { return m_baselineUsedForDriftCheckConstraints; }
    inline bool BaselineUsedForDriftCheckConstraintsHasBeenSet() const { return m_baselineUsedForDriftCheckConstraintsHasBeenSet; }
    template<typename BaselineUsedForDriftCheckConstraintsT = Aws::String>
    void SetBaselineUsedForDriftCheckConstraints(BaselineUsedForDriftCheckConstraintsT&& value) { m_baselineUsedForDriftCheckConstraintsHasBeenSet = true; m_baselineUsedForDriftCheckConstraints = std::forward<BaselineUsedForDriftCheckConstraintsT>(value); }
    template<typename BaselineUsedForDriftCheckConstraintsT = Aws::String>
    QualityCheckStepMetadata& WithBaselineUsedForDriftCheckConstraints(BaselineUsedForDriftCheckConstraintsT&& value) { SetBaselineUsedForDriftCheckConstraints(std::forward<BaselineUsedForDriftCheckConstraintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline const Aws::String& GetCalculatedBaselineStatistics() const { return m_calculatedBaselineStatistics; }
    inline bool CalculatedBaselineStatisticsHasBeenSet() const { return m_calculatedBaselineStatisticsHasBeenSet; }
    template<typename CalculatedBaselineStatisticsT = Aws::String>
    void SetCalculatedBaselineStatistics(CalculatedBaselineStatisticsT&& value) { m_calculatedBaselineStatisticsHasBeenSet = true; m_calculatedBaselineStatistics = std::forward<CalculatedBaselineStatisticsT>(value); }
    template<typename CalculatedBaselineStatisticsT = Aws::String>
    QualityCheckStepMetadata& WithCalculatedBaselineStatistics(CalculatedBaselineStatisticsT&& value) { SetCalculatedBaselineStatistics(std::forward<CalculatedBaselineStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline const Aws::String& GetCalculatedBaselineConstraints() const { return m_calculatedBaselineConstraints; }
    inline bool CalculatedBaselineConstraintsHasBeenSet() const { return m_calculatedBaselineConstraintsHasBeenSet; }
    template<typename CalculatedBaselineConstraintsT = Aws::String>
    void SetCalculatedBaselineConstraints(CalculatedBaselineConstraintsT&& value) { m_calculatedBaselineConstraintsHasBeenSet = true; m_calculatedBaselineConstraints = std::forward<CalculatedBaselineConstraintsT>(value); }
    template<typename CalculatedBaselineConstraintsT = Aws::String>
    QualityCheckStepMetadata& WithCalculatedBaselineConstraints(CalculatedBaselineConstraintsT&& value) { SetCalculatedBaselineConstraints(std::forward<CalculatedBaselineConstraintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model package group name.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    QualityCheckStepMetadata& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline const Aws::String& GetViolationReport() const { return m_violationReport; }
    inline bool ViolationReportHasBeenSet() const { return m_violationReportHasBeenSet; }
    template<typename ViolationReportT = Aws::String>
    void SetViolationReport(ViolationReportT&& value) { m_violationReportHasBeenSet = true; m_violationReport = std::forward<ViolationReportT>(value); }
    template<typename ViolationReportT = Aws::String>
    QualityCheckStepMetadata& WithViolationReport(ViolationReportT&& value) { SetViolationReport(std::forward<ViolationReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline const Aws::String& GetCheckJobArn() const { return m_checkJobArn; }
    inline bool CheckJobArnHasBeenSet() const { return m_checkJobArnHasBeenSet; }
    template<typename CheckJobArnT = Aws::String>
    void SetCheckJobArn(CheckJobArnT&& value) { m_checkJobArnHasBeenSet = true; m_checkJobArn = std::forward<CheckJobArnT>(value); }
    template<typename CheckJobArnT = Aws::String>
    QualityCheckStepMetadata& WithCheckJobArn(CheckJobArnT&& value) { SetCheckJobArn(std::forward<CheckJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag indicates if the drift check against the previous baseline will be
     * skipped or not. If it is set to <code>False</code>, the previous baseline of the
     * configured check type must be available.</p>
     */
    inline bool GetSkipCheck() const { return m_skipCheck; }
    inline bool SkipCheckHasBeenSet() const { return m_skipCheckHasBeenSet; }
    inline void SetSkipCheck(bool value) { m_skipCheckHasBeenSet = true; m_skipCheck = value; }
    inline QualityCheckStepMetadata& WithSkipCheck(bool value) { SetSkipCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag indicates if a newly calculated baseline can be accessed through
     * step properties <code>BaselineUsedForDriftCheckConstraints</code> and
     * <code>BaselineUsedForDriftCheckStatistics</code>. If it is set to
     * <code>False</code>, the previous baseline of the configured check type must also
     * be available. These can be accessed through the
     * <code>BaselineUsedForDriftCheckConstraints</code> and <code>
     * BaselineUsedForDriftCheckStatistics</code> properties. </p>
     */
    inline bool GetRegisterNewBaseline() const { return m_registerNewBaseline; }
    inline bool RegisterNewBaselineHasBeenSet() const { return m_registerNewBaselineHasBeenSet; }
    inline void SetRegisterNewBaseline(bool value) { m_registerNewBaselineHasBeenSet = true; m_registerNewBaseline = value; }
    inline QualityCheckStepMetadata& WithRegisterNewBaseline(bool value) { SetRegisterNewBaseline(value); return *this;}
    ///@}
  private:

    Aws::String m_checkType;
    bool m_checkTypeHasBeenSet = false;

    Aws::String m_baselineUsedForDriftCheckStatistics;
    bool m_baselineUsedForDriftCheckStatisticsHasBeenSet = false;

    Aws::String m_baselineUsedForDriftCheckConstraints;
    bool m_baselineUsedForDriftCheckConstraintsHasBeenSet = false;

    Aws::String m_calculatedBaselineStatistics;
    bool m_calculatedBaselineStatisticsHasBeenSet = false;

    Aws::String m_calculatedBaselineConstraints;
    bool m_calculatedBaselineConstraintsHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_violationReport;
    bool m_violationReportHasBeenSet = false;

    Aws::String m_checkJobArn;
    bool m_checkJobArnHasBeenSet = false;

    bool m_skipCheck{false};
    bool m_skipCheckHasBeenSet = false;

    bool m_registerNewBaseline{false};
    bool m_registerNewBaselineHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
