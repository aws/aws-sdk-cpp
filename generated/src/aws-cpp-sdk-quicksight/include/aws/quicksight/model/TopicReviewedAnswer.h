/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicIR.h>
#include <aws/quicksight/model/TopicVisual.h>
#include <aws/quicksight/model/TopicTemplate.h>
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
   * <p>The deinition for a <code>TopicReviewedAnswer</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicReviewedAnswer">AWS
   * API Reference</a></p>
   */
  class TopicReviewedAnswer
  {
  public:
    AWS_QUICKSIGHT_API TopicReviewedAnswer() = default;
    AWS_QUICKSIGHT_API TopicReviewedAnswer(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicReviewedAnswer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the reviewed answer.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    TopicReviewedAnswer& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The answer ID of the reviewed answer.</p>
     */
    inline const Aws::String& GetAnswerId() const { return m_answerId; }
    inline bool AnswerIdHasBeenSet() const { return m_answerIdHasBeenSet; }
    template<typename AnswerIdT = Aws::String>
    void SetAnswerId(AnswerIdT&& value) { m_answerIdHasBeenSet = true; m_answerId = std::forward<AnswerIdT>(value); }
    template<typename AnswerIdT = Aws::String>
    TopicReviewedAnswer& WithAnswerId(AnswerIdT&& value) { SetAnswerId(std::forward<AnswerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Dataset ARN for the <code>TopicReviewedAnswer</code>.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    TopicReviewedAnswer& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The question for the <code>TopicReviewedAnswer</code>.</p>
     */
    inline const Aws::String& GetQuestion() const { return m_question; }
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
    template<typename QuestionT = Aws::String>
    void SetQuestion(QuestionT&& value) { m_questionHasBeenSet = true; m_question = std::forward<QuestionT>(value); }
    template<typename QuestionT = Aws::String>
    TopicReviewedAnswer& WithQuestion(QuestionT&& value) { SetQuestion(std::forward<QuestionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mir for the <code>TopicReviewedAnswer</code>.</p>
     */
    inline const TopicIR& GetMir() const { return m_mir; }
    inline bool MirHasBeenSet() const { return m_mirHasBeenSet; }
    template<typename MirT = TopicIR>
    void SetMir(MirT&& value) { m_mirHasBeenSet = true; m_mir = std::forward<MirT>(value); }
    template<typename MirT = TopicIR>
    TopicReviewedAnswer& WithMir(MirT&& value) { SetMir(std::forward<MirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary visual for the <code>TopicReviewedAnswer</code>.</p>
     */
    inline const TopicVisual& GetPrimaryVisual() const { return m_primaryVisual; }
    inline bool PrimaryVisualHasBeenSet() const { return m_primaryVisualHasBeenSet; }
    template<typename PrimaryVisualT = TopicVisual>
    void SetPrimaryVisual(PrimaryVisualT&& value) { m_primaryVisualHasBeenSet = true; m_primaryVisual = std::forward<PrimaryVisualT>(value); }
    template<typename PrimaryVisualT = TopicVisual>
    TopicReviewedAnswer& WithPrimaryVisual(PrimaryVisualT&& value) { SetPrimaryVisual(std::forward<PrimaryVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the <code>TopicReviewedAnswer</code>.</p>
     */
    inline const TopicTemplate& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = TopicTemplate>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = TopicTemplate>
    TopicReviewedAnswer& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_answerId;
    bool m_answerIdHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_question;
    bool m_questionHasBeenSet = false;

    TopicIR m_mir;
    bool m_mirHasBeenSet = false;

    TopicVisual m_primaryVisual;
    bool m_primaryVisualHasBeenSet = false;

    TopicTemplate m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
