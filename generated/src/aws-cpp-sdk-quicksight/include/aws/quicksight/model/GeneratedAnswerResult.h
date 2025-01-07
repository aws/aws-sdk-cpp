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
    AWS_QUICKSIGHT_API GeneratedAnswerResult();
    AWS_QUICKSIGHT_API GeneratedAnswerResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeneratedAnswerResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The question text.</p>
     */
    inline const Aws::String& GetQuestionText() const{ return m_questionText; }
    inline bool QuestionTextHasBeenSet() const { return m_questionTextHasBeenSet; }
    inline void SetQuestionText(const Aws::String& value) { m_questionTextHasBeenSet = true; m_questionText = value; }
    inline void SetQuestionText(Aws::String&& value) { m_questionTextHasBeenSet = true; m_questionText = std::move(value); }
    inline void SetQuestionText(const char* value) { m_questionTextHasBeenSet = true; m_questionText.assign(value); }
    inline GeneratedAnswerResult& WithQuestionText(const Aws::String& value) { SetQuestionText(value); return *this;}
    inline GeneratedAnswerResult& WithQuestionText(Aws::String&& value) { SetQuestionText(std::move(value)); return *this;}
    inline GeneratedAnswerResult& WithQuestionText(const char* value) { SetQuestionText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The answer status of the generated answer.</p>
     */
    inline const GeneratedAnswerStatus& GetAnswerStatus() const{ return m_answerStatus; }
    inline bool AnswerStatusHasBeenSet() const { return m_answerStatusHasBeenSet; }
    inline void SetAnswerStatus(const GeneratedAnswerStatus& value) { m_answerStatusHasBeenSet = true; m_answerStatus = value; }
    inline void SetAnswerStatus(GeneratedAnswerStatus&& value) { m_answerStatusHasBeenSet = true; m_answerStatus = std::move(value); }
    inline GeneratedAnswerResult& WithAnswerStatus(const GeneratedAnswerStatus& value) { SetAnswerStatus(value); return *this;}
    inline GeneratedAnswerResult& WithAnswerStatus(GeneratedAnswerStatus&& value) { SetAnswerStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the topic.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    inline void SetTopicId(const Aws::String& value) { m_topicIdHasBeenSet = true; m_topicId = value; }
    inline void SetTopicId(Aws::String&& value) { m_topicIdHasBeenSet = true; m_topicId = std::move(value); }
    inline void SetTopicId(const char* value) { m_topicIdHasBeenSet = true; m_topicId.assign(value); }
    inline GeneratedAnswerResult& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}
    inline GeneratedAnswerResult& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}
    inline GeneratedAnswerResult& WithTopicId(const char* value) { SetTopicId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }
    inline GeneratedAnswerResult& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}
    inline GeneratedAnswerResult& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}
    inline GeneratedAnswerResult& WithTopicName(const char* value) { SetTopicName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The restatement for the answer.</p>
     */
    inline const Aws::String& GetRestatement() const{ return m_restatement; }
    inline bool RestatementHasBeenSet() const { return m_restatementHasBeenSet; }
    inline void SetRestatement(const Aws::String& value) { m_restatementHasBeenSet = true; m_restatement = value; }
    inline void SetRestatement(Aws::String&& value) { m_restatementHasBeenSet = true; m_restatement = std::move(value); }
    inline void SetRestatement(const char* value) { m_restatementHasBeenSet = true; m_restatement.assign(value); }
    inline GeneratedAnswerResult& WithRestatement(const Aws::String& value) { SetRestatement(value); return *this;}
    inline GeneratedAnswerResult& WithRestatement(Aws::String&& value) { SetRestatement(std::move(value)); return *this;}
    inline GeneratedAnswerResult& WithRestatement(const char* value) { SetRestatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the question.</p>
     */
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }
    inline GeneratedAnswerResult& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}
    inline GeneratedAnswerResult& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}
    inline GeneratedAnswerResult& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the answer.</p>
     */
    inline const Aws::String& GetAnswerId() const{ return m_answerId; }
    inline bool AnswerIdHasBeenSet() const { return m_answerIdHasBeenSet; }
    inline void SetAnswerId(const Aws::String& value) { m_answerIdHasBeenSet = true; m_answerId = value; }
    inline void SetAnswerId(Aws::String&& value) { m_answerIdHasBeenSet = true; m_answerId = std::move(value); }
    inline void SetAnswerId(const char* value) { m_answerIdHasBeenSet = true; m_answerId.assign(value); }
    inline GeneratedAnswerResult& WithAnswerId(const Aws::String& value) { SetAnswerId(value); return *this;}
    inline GeneratedAnswerResult& WithAnswerId(Aws::String&& value) { SetAnswerId(std::move(value)); return *this;}
    inline GeneratedAnswerResult& WithAnswerId(const char* value) { SetAnswerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the question.</p>
     */
    inline const Aws::String& GetQuestionUrl() const{ return m_questionUrl; }
    inline bool QuestionUrlHasBeenSet() const { return m_questionUrlHasBeenSet; }
    inline void SetQuestionUrl(const Aws::String& value) { m_questionUrlHasBeenSet = true; m_questionUrl = value; }
    inline void SetQuestionUrl(Aws::String&& value) { m_questionUrlHasBeenSet = true; m_questionUrl = std::move(value); }
    inline void SetQuestionUrl(const char* value) { m_questionUrlHasBeenSet = true; m_questionUrl.assign(value); }
    inline GeneratedAnswerResult& WithQuestionUrl(const Aws::String& value) { SetQuestionUrl(value); return *this;}
    inline GeneratedAnswerResult& WithQuestionUrl(Aws::String&& value) { SetQuestionUrl(std::move(value)); return *this;}
    inline GeneratedAnswerResult& WithQuestionUrl(const char* value) { SetQuestionUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_questionText;
    bool m_questionTextHasBeenSet = false;

    GeneratedAnswerStatus m_answerStatus;
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
