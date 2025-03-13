/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Provides counts for human-labeled tasks in the labeling job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelCountersForWorkteam">AWS
   * API Reference</a></p>
   */
  class LabelCountersForWorkteam
  {
  public:
    AWS_SAGEMAKER_API LabelCountersForWorkteam() = default;
    AWS_SAGEMAKER_API LabelCountersForWorkteam(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelCountersForWorkteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of data objects labeled by a human worker.</p>
     */
    inline int GetHumanLabeled() const { return m_humanLabeled; }
    inline bool HumanLabeledHasBeenSet() const { return m_humanLabeledHasBeenSet; }
    inline void SetHumanLabeled(int value) { m_humanLabeledHasBeenSet = true; m_humanLabeled = value; }
    inline LabelCountersForWorkteam& WithHumanLabeled(int value) { SetHumanLabeled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of data objects that need to be labeled by a human
     * worker.</p>
     */
    inline int GetPendingHuman() const { return m_pendingHuman; }
    inline bool PendingHumanHasBeenSet() const { return m_pendingHumanHasBeenSet; }
    inline void SetPendingHuman(int value) { m_pendingHumanHasBeenSet = true; m_pendingHuman = value; }
    inline LabelCountersForWorkteam& WithPendingHuman(int value) { SetPendingHuman(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of tasks in the labeling job.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline LabelCountersForWorkteam& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}
  private:

    int m_humanLabeled{0};
    bool m_humanLabeledHasBeenSet = false;

    int m_pendingHuman{0};
    bool m_pendingHumanHasBeenSet = false;

    int m_total{0};
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
