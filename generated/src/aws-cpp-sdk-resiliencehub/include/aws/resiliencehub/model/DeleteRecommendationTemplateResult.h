/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/RecommendationTemplateStatus.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DeleteRecommendationTemplateResult
  {
  public:
    AWS_RESILIENCEHUB_API DeleteRecommendationTemplateResult();
    AWS_RESILIENCEHUB_API DeleteRecommendationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DeleteRecommendationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const{ return m_recommendationTemplateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(const Aws::String& value) { m_recommendationTemplateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(Aws::String&& value) { m_recommendationTemplateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(const char* value) { m_recommendationTemplateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline DeleteRecommendationTemplateResult& WithRecommendationTemplateArn(const Aws::String& value) { SetRecommendationTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline DeleteRecommendationTemplateResult& WithRecommendationTemplateArn(Aws::String&& value) { SetRecommendationTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline DeleteRecommendationTemplateResult& WithRecommendationTemplateArn(const char* value) { SetRecommendationTemplateArn(value); return *this;}


    /**
     * <p>Status of the action.</p>
     */
    inline const RecommendationTemplateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the action.</p>
     */
    inline void SetStatus(const RecommendationTemplateStatus& value) { m_status = value; }

    /**
     * <p>Status of the action.</p>
     */
    inline void SetStatus(RecommendationTemplateStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status of the action.</p>
     */
    inline DeleteRecommendationTemplateResult& WithStatus(const RecommendationTemplateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the action.</p>
     */
    inline DeleteRecommendationTemplateResult& WithStatus(RecommendationTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteRecommendationTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteRecommendationTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteRecommendationTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_recommendationTemplateArn;

    RecommendationTemplateStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
