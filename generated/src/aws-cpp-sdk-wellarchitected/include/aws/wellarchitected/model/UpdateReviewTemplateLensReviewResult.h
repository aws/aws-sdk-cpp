/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ReviewTemplateLensReview.h>
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
  class UpdateReviewTemplateLensReviewResult
  {
  public:
    AWS_WELLARCHITECTED_API UpdateReviewTemplateLensReviewResult();
    AWS_WELLARCHITECTED_API UpdateReviewTemplateLensReviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateReviewTemplateLensReviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateReviewTemplateLensReviewResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline UpdateReviewTemplateLensReviewResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline UpdateReviewTemplateLensReviewResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>A lens review of a question.</p>
     */
    inline const ReviewTemplateLensReview& GetLensReview() const{ return m_lensReview; }

    /**
     * <p>A lens review of a question.</p>
     */
    inline void SetLensReview(const ReviewTemplateLensReview& value) { m_lensReview = value; }

    /**
     * <p>A lens review of a question.</p>
     */
    inline void SetLensReview(ReviewTemplateLensReview&& value) { m_lensReview = std::move(value); }

    /**
     * <p>A lens review of a question.</p>
     */
    inline UpdateReviewTemplateLensReviewResult& WithLensReview(const ReviewTemplateLensReview& value) { SetLensReview(value); return *this;}

    /**
     * <p>A lens review of a question.</p>
     */
    inline UpdateReviewTemplateLensReviewResult& WithLensReview(ReviewTemplateLensReview&& value) { SetLensReview(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateReviewTemplateLensReviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateReviewTemplateLensReviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateReviewTemplateLensReviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_templateArn;

    ReviewTemplateLensReview m_lensReview;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
