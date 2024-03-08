/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ReviewTemplateAnswer.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{
  class GetReviewTemplateAnswerResult
  {
  public:
    AWS_WELLARCHITECTED_API GetReviewTemplateAnswerResult();
    AWS_WELLARCHITECTED_API GetReviewTemplateAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetReviewTemplateAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline GetReviewTemplateAnswerResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline GetReviewTemplateAnswerResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline GetReviewTemplateAnswerResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAlias.assign(value); }

    
    inline GetReviewTemplateAnswerResult& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline GetReviewTemplateAnswerResult& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline GetReviewTemplateAnswerResult& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>An answer of the question.</p>
     */
    inline const ReviewTemplateAnswer& GetAnswer() const{ return m_answer; }

    /**
     * <p>An answer of the question.</p>
     */
    inline void SetAnswer(const ReviewTemplateAnswer& value) { m_answer = value; }

    /**
     * <p>An answer of the question.</p>
     */
    inline void SetAnswer(ReviewTemplateAnswer&& value) { m_answer = std::move(value); }

    /**
     * <p>An answer of the question.</p>
     */
    inline GetReviewTemplateAnswerResult& WithAnswer(const ReviewTemplateAnswer& value) { SetAnswer(value); return *this;}

    /**
     * <p>An answer of the question.</p>
     */
    inline GetReviewTemplateAnswerResult& WithAnswer(ReviewTemplateAnswer&& value) { SetAnswer(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetReviewTemplateAnswerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetReviewTemplateAnswerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetReviewTemplateAnswerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_templateArn;

    Aws::String m_lensAlias;

    ReviewTemplateAnswer m_answer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
