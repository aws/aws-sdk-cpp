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
   * <p>The definition for a <code>CreateTopicReviewedAnswer</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTopicReviewedAnswer">AWS
   * API Reference</a></p>
   */
  class CreateTopicReviewedAnswer
  {
  public:
    AWS_QUICKSIGHT_API CreateTopicReviewedAnswer() = default;
    AWS_QUICKSIGHT_API CreateTopicReviewedAnswer(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CreateTopicReviewedAnswer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The answer ID for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const Aws::String& GetAnswerId() const { return m_answerId; }
    inline bool AnswerIdHasBeenSet() const { return m_answerIdHasBeenSet; }
    template<typename AnswerIdT = Aws::String>
    void SetAnswerId(AnswerIdT&& value) { m_answerIdHasBeenSet = true; m_answerId = std::forward<AnswerIdT>(value); }
    template<typename AnswerIdT = Aws::String>
    CreateTopicReviewedAnswer& WithAnswerId(AnswerIdT&& value) { SetAnswerId(std::forward<AnswerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Dataset arn for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    CreateTopicReviewedAnswer& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Question to be created.</p>
     */
    inline const Aws::String& GetQuestion() const { return m_question; }
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
    template<typename QuestionT = Aws::String>
    void SetQuestion(QuestionT&& value) { m_questionHasBeenSet = true; m_question = std::forward<QuestionT>(value); }
    template<typename QuestionT = Aws::String>
    CreateTopicReviewedAnswer& WithQuestion(QuestionT&& value) { SetQuestion(std::forward<QuestionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Mir for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const TopicIR& GetMir() const { return m_mir; }
    inline bool MirHasBeenSet() const { return m_mirHasBeenSet; }
    template<typename MirT = TopicIR>
    void SetMir(MirT&& value) { m_mirHasBeenSet = true; m_mir = std::forward<MirT>(value); }
    template<typename MirT = TopicIR>
    CreateTopicReviewedAnswer& WithMir(MirT&& value) { SetMir(std::forward<MirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>PrimaryVisual</code> for the
     * <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const TopicVisual& GetPrimaryVisual() const { return m_primaryVisual; }
    inline bool PrimaryVisualHasBeenSet() const { return m_primaryVisualHasBeenSet; }
    template<typename PrimaryVisualT = TopicVisual>
    void SetPrimaryVisual(PrimaryVisualT&& value) { m_primaryVisualHasBeenSet = true; m_primaryVisual = std::forward<PrimaryVisualT>(value); }
    template<typename PrimaryVisualT = TopicVisual>
    CreateTopicReviewedAnswer& WithPrimaryVisual(PrimaryVisualT&& value) { SetPrimaryVisual(std::forward<PrimaryVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const TopicTemplate& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = TopicTemplate>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = TopicTemplate>
    CreateTopicReviewedAnswer& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}
  private:

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
