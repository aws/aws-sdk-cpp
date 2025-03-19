/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ImpactType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/TargetPreview.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the results of the execution preview.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecutionPreview">AWS
   * API Reference</a></p>
   */
  class AutomationExecutionPreview
  {
  public:
    AWS_SSM_API AutomationExecutionPreview() = default;
    AWS_SSM_API AutomationExecutionPreview(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AutomationExecutionPreview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the type of impact a runbook step would have on a
     * resource.</p> <ul> <li> <p> <code>Mutating</code>: The runbook step would make
     * changes to the targets through actions that create, modify, or delete
     * resources.</p> </li> <li> <p> <code>Non_Mutating</code>: The runbook step would
     * retrieve data about resources but not make changes to them. This category
     * generally includes <code>Describe*</code>, <code>List*</code>,
     * <code>Get*</code>, and similar read-only API actions.</p> </li> <li> <p>
     * <code>Undetermined</code>: An undetermined step invokes executions performed by
     * another orchestration service like Lambda, Step Functions, or Amazon Web
     * Services Systems Manager Run Command. An undetermined step might also call a
     * third-party API. Systems Manager Automation doesn't know the outcome of the
     * orchestration processes or third-party API executions, so the results of the
     * steps are undetermined.</p> </li> </ul>
     */
    inline const Aws::Map<ImpactType, int>& GetStepPreviews() const { return m_stepPreviews; }
    inline bool StepPreviewsHasBeenSet() const { return m_stepPreviewsHasBeenSet; }
    template<typename StepPreviewsT = Aws::Map<ImpactType, int>>
    void SetStepPreviews(StepPreviewsT&& value) { m_stepPreviewsHasBeenSet = true; m_stepPreviews = std::forward<StepPreviewsT>(value); }
    template<typename StepPreviewsT = Aws::Map<ImpactType, int>>
    AutomationExecutionPreview& WithStepPreviews(StepPreviewsT&& value) { SetStepPreviews(std::forward<StepPreviewsT>(value)); return *this;}
    inline AutomationExecutionPreview& AddStepPreviews(ImpactType key, int value) {
      m_stepPreviewsHasBeenSet = true; m_stepPreviews.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon Web Services Regions targeted by the execution
     * preview.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    AutomationExecutionPreview& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    AutomationExecutionPreview& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information that provides a preview of what the impact of running the
     * specified Automation runbook would be.</p>
     */
    inline const Aws::Vector<TargetPreview>& GetTargetPreviews() const { return m_targetPreviews; }
    inline bool TargetPreviewsHasBeenSet() const { return m_targetPreviewsHasBeenSet; }
    template<typename TargetPreviewsT = Aws::Vector<TargetPreview>>
    void SetTargetPreviews(TargetPreviewsT&& value) { m_targetPreviewsHasBeenSet = true; m_targetPreviews = std::forward<TargetPreviewsT>(value); }
    template<typename TargetPreviewsT = Aws::Vector<TargetPreview>>
    AutomationExecutionPreview& WithTargetPreviews(TargetPreviewsT&& value) { SetTargetPreviews(std::forward<TargetPreviewsT>(value)); return *this;}
    template<typename TargetPreviewsT = TargetPreview>
    AutomationExecutionPreview& AddTargetPreviews(TargetPreviewsT&& value) { m_targetPreviewsHasBeenSet = true; m_targetPreviews.emplace_back(std::forward<TargetPreviewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon Web Services accounts that were included in the
     * execution preview.</p>
     */
    inline int GetTotalAccounts() const { return m_totalAccounts; }
    inline bool TotalAccountsHasBeenSet() const { return m_totalAccountsHasBeenSet; }
    inline void SetTotalAccounts(int value) { m_totalAccountsHasBeenSet = true; m_totalAccounts = value; }
    inline AutomationExecutionPreview& WithTotalAccounts(int value) { SetTotalAccounts(value); return *this;}
    ///@}
  private:

    Aws::Map<ImpactType, int> m_stepPreviews;
    bool m_stepPreviewsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Vector<TargetPreview> m_targetPreviews;
    bool m_targetPreviewsHasBeenSet = false;

    int m_totalAccounts{0};
    bool m_totalAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
