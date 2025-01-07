﻿/**
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
    AWS_QUICKSIGHT_API QAResult();
    AWS_QUICKSIGHT_API QAResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API QAResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of QA result.</p>
     */
    inline const QAResultType& GetResultType() const{ return m_resultType; }
    inline bool ResultTypeHasBeenSet() const { return m_resultTypeHasBeenSet; }
    inline void SetResultType(const QAResultType& value) { m_resultTypeHasBeenSet = true; m_resultType = value; }
    inline void SetResultType(QAResultType&& value) { m_resultTypeHasBeenSet = true; m_resultType = std::move(value); }
    inline QAResult& WithResultType(const QAResultType& value) { SetResultType(value); return *this;}
    inline QAResult& WithResultType(QAResultType&& value) { SetResultType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The representation of a dashboard visual result.</p>
     */
    inline const DashboardVisualResult& GetDashboardVisual() const{ return m_dashboardVisual; }
    inline bool DashboardVisualHasBeenSet() const { return m_dashboardVisualHasBeenSet; }
    inline void SetDashboardVisual(const DashboardVisualResult& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = value; }
    inline void SetDashboardVisual(DashboardVisualResult&& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = std::move(value); }
    inline QAResult& WithDashboardVisual(const DashboardVisualResult& value) { SetDashboardVisual(value); return *this;}
    inline QAResult& WithDashboardVisual(DashboardVisualResult&& value) { SetDashboardVisual(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The representation of a generated answer result.</p>
     */
    inline const GeneratedAnswerResult& GetGeneratedAnswer() const{ return m_generatedAnswer; }
    inline bool GeneratedAnswerHasBeenSet() const { return m_generatedAnswerHasBeenSet; }
    inline void SetGeneratedAnswer(const GeneratedAnswerResult& value) { m_generatedAnswerHasBeenSet = true; m_generatedAnswer = value; }
    inline void SetGeneratedAnswer(GeneratedAnswerResult&& value) { m_generatedAnswerHasBeenSet = true; m_generatedAnswer = std::move(value); }
    inline QAResult& WithGeneratedAnswer(const GeneratedAnswerResult& value) { SetGeneratedAnswer(value); return *this;}
    inline QAResult& WithGeneratedAnswer(GeneratedAnswerResult&& value) { SetGeneratedAnswer(std::move(value)); return *this;}
    ///@}
  private:

    QAResultType m_resultType;
    bool m_resultTypeHasBeenSet = false;

    DashboardVisualResult m_dashboardVisual;
    bool m_dashboardVisualHasBeenSet = false;

    GeneratedAnswerResult m_generatedAnswer;
    bool m_generatedAnswerHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
