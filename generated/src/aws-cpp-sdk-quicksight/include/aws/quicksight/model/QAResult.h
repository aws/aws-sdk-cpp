/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QAResultType.h>
#include <aws/quicksight/model/DashboardVisualResult.h>
#include <aws/quicksight/model/GeneratedAnswerResult.h>
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
   * <p>The QA result that is made from the <code>DashboardVisual</code> or
   * <code>GeneratedAnswer</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QAResult">AWS
   * API Reference</a></p>
   */
  class QAResult
  {
  public:
    AWS_QUICKSIGHT_API QAResult() = default;
    AWS_QUICKSIGHT_API QAResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API QAResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of QA result.</p>
     */
    inline QAResultType GetResultType() const { return m_resultType; }
    inline bool ResultTypeHasBeenSet() const { return m_resultTypeHasBeenSet; }
    inline void SetResultType(QAResultType value) { m_resultTypeHasBeenSet = true; m_resultType = value; }
    inline QAResult& WithResultType(QAResultType value) { SetResultType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The representation of a dashboard visual result.</p>
     */
    inline const DashboardVisualResult& GetDashboardVisual() const { return m_dashboardVisual; }
    inline bool DashboardVisualHasBeenSet() const { return m_dashboardVisualHasBeenSet; }
    template<typename DashboardVisualT = DashboardVisualResult>
    void SetDashboardVisual(DashboardVisualT&& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = std::forward<DashboardVisualT>(value); }
    template<typename DashboardVisualT = DashboardVisualResult>
    QAResult& WithDashboardVisual(DashboardVisualT&& value) { SetDashboardVisual(std::forward<DashboardVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The representation of a generated answer result.</p>
     */
    inline const GeneratedAnswerResult& GetGeneratedAnswer() const { return m_generatedAnswer; }
    inline bool GeneratedAnswerHasBeenSet() const { return m_generatedAnswerHasBeenSet; }
    template<typename GeneratedAnswerT = GeneratedAnswerResult>
    void SetGeneratedAnswer(GeneratedAnswerT&& value) { m_generatedAnswerHasBeenSet = true; m_generatedAnswer = std::forward<GeneratedAnswerT>(value); }
    template<typename GeneratedAnswerT = GeneratedAnswerResult>
    QAResult& WithGeneratedAnswer(GeneratedAnswerT&& value) { SetGeneratedAnswer(std::forward<GeneratedAnswerT>(value)); return *this;}
    ///@}
  private:

    QAResultType m_resultType{QAResultType::NOT_SET};
    bool m_resultTypeHasBeenSet = false;

    DashboardVisualResult m_dashboardVisual;
    bool m_dashboardVisualHasBeenSet = false;

    GeneratedAnswerResult m_generatedAnswer;
    bool m_generatedAnswerHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
