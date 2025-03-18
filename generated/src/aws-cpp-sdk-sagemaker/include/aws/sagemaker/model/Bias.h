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
    AWS_SAGEMAKER_API Bias() = default;
    AWS_SAGEMAKER_API Bias(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Bias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bias report for a model</p>
     */
    inline const MetricsSource& GetReport() const { return m_report; }
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
    template<typename ReportT = MetricsSource>
    void SetReport(ReportT&& value) { m_reportHasBeenSet = true; m_report = std::forward<ReportT>(value); }
    template<typename ReportT = MetricsSource>
    Bias& WithReport(ReportT&& value) { SetReport(std::forward<ReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-training bias report for a model.</p>
     */
    inline const MetricsSource& GetPreTrainingReport() const { return m_preTrainingReport; }
    inline bool PreTrainingReportHasBeenSet() const { return m_preTrainingReportHasBeenSet; }
    template<typename PreTrainingReportT = MetricsSource>
    void SetPreTrainingReport(PreTrainingReportT&& value) { m_preTrainingReportHasBeenSet = true; m_preTrainingReport = std::forward<PreTrainingReportT>(value); }
    template<typename PreTrainingReportT = MetricsSource>
    Bias& WithPreTrainingReport(PreTrainingReportT&& value) { SetPreTrainingReport(std::forward<PreTrainingReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The post-training bias report for a model.</p>
     */
    inline const MetricsSource& GetPostTrainingReport() const { return m_postTrainingReport; }
    inline bool PostTrainingReportHasBeenSet() const { return m_postTrainingReportHasBeenSet; }
    template<typename PostTrainingReportT = MetricsSource>
    void SetPostTrainingReport(PostTrainingReportT&& value) { m_postTrainingReportHasBeenSet = true; m_postTrainingReport = std::forward<PostTrainingReportT>(value); }
    template<typename PostTrainingReportT = MetricsSource>
    Bias& WithPostTrainingReport(PostTrainingReportT&& value) { SetPostTrainingReport(std::forward<PostTrainingReportT>(value)); return *this;}
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
