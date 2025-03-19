/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionUpdateConfig.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class UpdateSolutionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API UpdateSolutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSolution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution to update.</p>
     */
    inline const Aws::String& GetSolutionArn() const { return m_solutionArn; }
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }
    template<typename SolutionArnT = Aws::String>
    void SetSolutionArn(SolutionArnT&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::forward<SolutionArnT>(value); }
    template<typename SolutionArnT = Aws::String>
    UpdateSolutionRequest& WithSolutionArn(SolutionArnT&& value) { SetSolutionArn(std::forward<SolutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the solution uses automatic training to create new solution versions
     * (trained models). You can change the training frequency by specifying a
     * <code>schedulingExpression</code> in the <code>AutoTrainingConfig</code> as part
     * of solution configuration. </p> <p> If you turn on automatic training, the first
     * automatic training starts within one hour after the solution update completes.
     * If you manually create a solution version within the hour, the solution skips
     * the first automatic training. For more information about automatic training, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/solution-config-auto-training.html">Configuring
     * automatic training</a>. </p> <p> After training starts, you can get the solution
     * version's Amazon Resource Name (ARN) with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListSolutionVersions.html">ListSolutionVersions</a>
     * API operation. To get its status, use the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolutionVersion.html">DescribeSolutionVersion</a>.
     * </p>
     */
    inline bool GetPerformAutoTraining() const { return m_performAutoTraining; }
    inline bool PerformAutoTrainingHasBeenSet() const { return m_performAutoTrainingHasBeenSet; }
    inline void SetPerformAutoTraining(bool value) { m_performAutoTrainingHasBeenSet = true; m_performAutoTraining = value; }
    inline UpdateSolutionRequest& WithPerformAutoTraining(bool value) { SetPerformAutoTraining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new configuration details of the solution.</p>
     */
    inline const SolutionUpdateConfig& GetSolutionUpdateConfig() const { return m_solutionUpdateConfig; }
    inline bool SolutionUpdateConfigHasBeenSet() const { return m_solutionUpdateConfigHasBeenSet; }
    template<typename SolutionUpdateConfigT = SolutionUpdateConfig>
    void SetSolutionUpdateConfig(SolutionUpdateConfigT&& value) { m_solutionUpdateConfigHasBeenSet = true; m_solutionUpdateConfig = std::forward<SolutionUpdateConfigT>(value); }
    template<typename SolutionUpdateConfigT = SolutionUpdateConfig>
    UpdateSolutionRequest& WithSolutionUpdateConfig(SolutionUpdateConfigT&& value) { SetSolutionUpdateConfig(std::forward<SolutionUpdateConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;

    bool m_performAutoTraining{false};
    bool m_performAutoTrainingHasBeenSet = false;

    SolutionUpdateConfig m_solutionUpdateConfig;
    bool m_solutionUpdateConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
