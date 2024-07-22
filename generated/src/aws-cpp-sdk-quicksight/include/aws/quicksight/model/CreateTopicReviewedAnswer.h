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
    AWS_QUICKSIGHT_API CreateTopicReviewedAnswer();
    AWS_QUICKSIGHT_API CreateTopicReviewedAnswer(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CreateTopicReviewedAnswer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The answer ID for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const Aws::String& GetAnswerId() const{ return m_answerId; }
    inline bool AnswerIdHasBeenSet() const { return m_answerIdHasBeenSet; }
    inline void SetAnswerId(const Aws::String& value) { m_answerIdHasBeenSet = true; m_answerId = value; }
    inline void SetAnswerId(Aws::String&& value) { m_answerIdHasBeenSet = true; m_answerId = std::move(value); }
    inline void SetAnswerId(const char* value) { m_answerIdHasBeenSet = true; m_answerId.assign(value); }
    inline CreateTopicReviewedAnswer& WithAnswerId(const Aws::String& value) { SetAnswerId(value); return *this;}
    inline CreateTopicReviewedAnswer& WithAnswerId(Aws::String&& value) { SetAnswerId(std::move(value)); return *this;}
    inline CreateTopicReviewedAnswer& WithAnswerId(const char* value) { SetAnswerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Dataset arn for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }
    inline CreateTopicReviewedAnswer& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline CreateTopicReviewedAnswer& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline CreateTopicReviewedAnswer& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Question to be created.</p>
     */
    inline const Aws::String& GetQuestion() const{ return m_question; }
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
    inline void SetQuestion(const Aws::String& value) { m_questionHasBeenSet = true; m_question = value; }
    inline void SetQuestion(Aws::String&& value) { m_questionHasBeenSet = true; m_question = std::move(value); }
    inline void SetQuestion(const char* value) { m_questionHasBeenSet = true; m_question.assign(value); }
    inline CreateTopicReviewedAnswer& WithQuestion(const Aws::String& value) { SetQuestion(value); return *this;}
    inline CreateTopicReviewedAnswer& WithQuestion(Aws::String&& value) { SetQuestion(std::move(value)); return *this;}
    inline CreateTopicReviewedAnswer& WithQuestion(const char* value) { SetQuestion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Mir for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const TopicIR& GetMir() const{ return m_mir; }
    inline bool MirHasBeenSet() const { return m_mirHasBeenSet; }
    inline void SetMir(const TopicIR& value) { m_mirHasBeenSet = true; m_mir = value; }
    inline void SetMir(TopicIR&& value) { m_mirHasBeenSet = true; m_mir = std::move(value); }
    inline CreateTopicReviewedAnswer& WithMir(const TopicIR& value) { SetMir(value); return *this;}
    inline CreateTopicReviewedAnswer& WithMir(TopicIR&& value) { SetMir(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>PrimaryVisual</code> for the
     * <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const TopicVisual& GetPrimaryVisual() const{ return m_primaryVisual; }
    inline bool PrimaryVisualHasBeenSet() const { return m_primaryVisualHasBeenSet; }
    inline void SetPrimaryVisual(const TopicVisual& value) { m_primaryVisualHasBeenSet = true; m_primaryVisual = value; }
    inline void SetPrimaryVisual(TopicVisual&& value) { m_primaryVisualHasBeenSet = true; m_primaryVisual = std::move(value); }
    inline CreateTopicReviewedAnswer& WithPrimaryVisual(const TopicVisual& value) { SetPrimaryVisual(value); return *this;}
    inline CreateTopicReviewedAnswer& WithPrimaryVisual(TopicVisual&& value) { SetPrimaryVisual(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the <code>CreateTopicReviewedAnswer</code>.</p>
     */
    inline const TopicTemplate& GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const TopicTemplate& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(TopicTemplate&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline CreateTopicReviewedAnswer& WithTemplate(const TopicTemplate& value) { SetTemplate(value); return *this;}
    inline CreateTopicReviewedAnswer& WithTemplate(TopicTemplate&& value) { SetTemplate(std::move(value)); return *this;}
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
