/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GeneratedAnswerStatus.h>
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
   * <p>The QA result that is made from generated answer.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeneratedAnswerResult">AWS
   * API Reference</a></p>
   */
  class GeneratedAnswerResult
  {
  public:
    AWS_QUICKSIGHT_API GeneratedAnswerResult() = default;
    AWS_QUICKSIGHT_API GeneratedAnswerResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeneratedAnswerResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The question text.</p>
     */
    inline const Aws::String& GetQuestionText() const { return m_questionText; }
    inline bool QuestionTextHasBeenSet() const { return m_questionTextHasBeenSet; }
    template<typename QuestionTextT = Aws::String>
    void SetQuestionText(QuestionTextT&& value) { m_questionTextHasBeenSet = true; m_questionText = std::forward<QuestionTextT>(value); }
    template<typename QuestionTextT = Aws::String>
    GeneratedAnswerResult& WithQuestionText(QuestionTextT&& value) { SetQuestionText(std::forward<QuestionTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The answer status of the generated answer.</p>
     */
    inline GeneratedAnswerStatus GetAnswerStatus() const { return m_answerStatus; }
    inline bool AnswerStatusHasBeenSet() const { return m_answerStatusHasBeenSet; }
    inline void SetAnswerStatus(GeneratedAnswerStatus value) { m_answerStatusHasBeenSet = true; m_answerStatus = value; }
    inline GeneratedAnswerResult& WithAnswerStatus(GeneratedAnswerStatus value) { SetAnswerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the topic.</p>
     */
    inline const Aws::String& GetTopicId() const { return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    template<typename TopicIdT = Aws::String>
    void SetTopicId(TopicIdT&& value) { m_topicIdHasBeenSet = true; m_topicId = std::forward<TopicIdT>(value); }
    template<typename TopicIdT = Aws::String>
    GeneratedAnswerResult& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetTopicName() const { return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    template<typename TopicNameT = Aws::String>
    void SetTopicName(TopicNameT&& value) { m_topicNameHasBeenSet = true; m_topicName = std::forward<TopicNameT>(value); }
    template<typename TopicNameT = Aws::String>
    GeneratedAnswerResult& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The restatement for the answer.</p>
     */
    inline const Aws::String& GetRestatement() const { return m_restatement; }
    inline bool RestatementHasBeenSet() const { return m_restatementHasBeenSet; }
    template<typename RestatementT = Aws::String>
    void SetRestatement(RestatementT&& value) { m_restatementHasBeenSet = true; m_restatement = std::forward<RestatementT>(value); }
    template<typename RestatementT = Aws::String>
    GeneratedAnswerResult& WithRestatement(RestatementT&& value) { SetRestatement(std::forward<RestatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the question.</p>
     */
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    GeneratedAnswerResult& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the answer.</p>
     */
    inline const Aws::String& GetAnswerId() const { return m_answerId; }
    inline bool AnswerIdHasBeenSet() const { return m_answerIdHasBeenSet; }
    template<typename AnswerIdT = Aws::String>
    void SetAnswerId(AnswerIdT&& value) { m_answerIdHasBeenSet = true; m_answerId = std::forward<AnswerIdT>(value); }
    template<typename AnswerIdT = Aws::String>
    GeneratedAnswerResult& WithAnswerId(AnswerIdT&& value) { SetAnswerId(std::forward<AnswerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the question.</p>
     */
    inline const Aws::String& GetQuestionUrl() const { return m_questionUrl; }
    inline bool QuestionUrlHasBeenSet() const { return m_questionUrlHasBeenSet; }
    template<typename QuestionUrlT = Aws::String>
    void SetQuestionUrl(QuestionUrlT&& value) { m_questionUrlHasBeenSet = true; m_questionUrl = std::forward<QuestionUrlT>(value); }
    template<typename QuestionUrlT = Aws::String>
    GeneratedAnswerResult& WithQuestionUrl(QuestionUrlT&& value) { SetQuestionUrl(std::forward<QuestionUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_questionText;
    bool m_questionTextHasBeenSet = false;

    GeneratedAnswerStatus m_answerStatus{GeneratedAnswerStatus::NOT_SET};
    bool m_answerStatusHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_restatement;
    bool m_restatementHasBeenSet = false;

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_answerId;
    bool m_answerIdHasBeenSet = false;

    Aws::String m_questionUrl;
    bool m_questionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
