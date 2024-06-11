/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MetricsSource.h>
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
   * <p>Contains bias metrics for a model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Bias">AWS API
   * Reference</a></p>
   */
  class Bias
  {
  public:
    AWS_SAGEMAKER_API Bias();
    AWS_SAGEMAKER_API Bias(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Bias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bias report for a model</p>
     */
    inline const MetricsSource& GetReport() const{ return m_report; }
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
    inline void SetReport(const MetricsSource& value) { m_reportHasBeenSet = true; m_report = value; }
    inline void SetReport(MetricsSource&& value) { m_reportHasBeenSet = true; m_report = std::move(value); }
    inline Bias& WithReport(const MetricsSource& value) { SetReport(value); return *this;}
    inline Bias& WithReport(MetricsSource&& value) { SetReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-training bias report for a model.</p>
     */
    inline const MetricsSource& GetPreTrainingReport() const{ return m_preTrainingReport; }
    inline bool PreTrainingReportHasBeenSet() const { return m_preTrainingReportHasBeenSet; }
    inline void SetPreTrainingReport(const MetricsSource& value) { m_preTrainingReportHasBeenSet = true; m_preTrainingReport = value; }
    inline void SetPreTrainingReport(MetricsSource&& value) { m_preTrainingReportHasBeenSet = true; m_preTrainingReport = std::move(value); }
    inline Bias& WithPreTrainingReport(const MetricsSource& value) { SetPreTrainingReport(value); return *this;}
    inline Bias& WithPreTrainingReport(MetricsSource&& value) { SetPreTrainingReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The post-training bias report for a model.</p>
     */
    inline const MetricsSource& GetPostTrainingReport() const{ return m_postTrainingReport; }
    inline bool PostTrainingReportHasBeenSet() const { return m_postTrainingReportHasBeenSet; }
    inline void SetPostTrainingReport(const MetricsSource& value) { m_postTrainingReportHasBeenSet = true; m_postTrainingReport = value; }
    inline void SetPostTrainingReport(MetricsSource&& value) { m_postTrainingReportHasBeenSet = true; m_postTrainingReport = std::move(value); }
    inline Bias& WithPostTrainingReport(const MetricsSource& value) { SetPostTrainingReport(value); return *this;}
    inline Bias& WithPostTrainingReport(MetricsSource&& value) { SetPostTrainingReport(std::move(value)); return *this;}
    ///@}
  private:

    MetricsSource m_report;
    bool m_reportHasBeenSet = false;

    MetricsSource m_preTrainingReport;
    bool m_preTrainingReportHasBeenSet = false;

    MetricsSource m_postTrainingReport;
    bool m_postTrainingReportHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
