/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ComparisonMethodType.h>
#include <aws/quicksight/model/TopicTimeGranularity.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition of a <code>TopicIRComparisonMethod</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicIRComparisonMethod">AWS
   * API Reference</a></p>
   */
  class TopicIRComparisonMethod
  {
  public:
    AWS_QUICKSIGHT_API TopicIRComparisonMethod() = default;
    AWS_QUICKSIGHT_API TopicIRComparisonMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRComparisonMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type for the <code>TopicIRComparisonMethod</code>.</p>
     */
    inline ComparisonMethodType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ComparisonMethodType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TopicIRComparisonMethod& WithType(ComparisonMethodType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period for the <code>TopicIRComparisonMethod</code>.</p>
     */
    inline TopicTimeGranularity GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(TopicTimeGranularity value) { m_periodHasBeenSet = true; m_period = value; }
    inline TopicIRComparisonMethod& WithPeriod(TopicTimeGranularity value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The window size for the <code>TopicIRComparisonMethod</code>.</p>
     */
    inline int GetWindowSize() const { return m_windowSize; }
    inline bool WindowSizeHasBeenSet() const { return m_windowSizeHasBeenSet; }
    inline void SetWindowSize(int value) { m_windowSizeHasBeenSet = true; m_windowSize = value; }
    inline TopicIRComparisonMethod& WithWindowSize(int value) { SetWindowSize(value); return *this;}
    ///@}
  private:

    ComparisonMethodType m_type{ComparisonMethodType::NOT_SET};
    bool m_typeHasBeenSet = false;

    TopicTimeGranularity m_period{TopicTimeGranularity::NOT_SET};
    bool m_periodHasBeenSet = false;

    int m_windowSize{0};
    bool m_windowSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
