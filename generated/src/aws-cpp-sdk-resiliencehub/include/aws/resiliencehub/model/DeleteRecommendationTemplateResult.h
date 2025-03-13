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
    AWS_RESILIENCEHUB_API DeleteRecommendationTemplateResult() = default;
    AWS_RESILIENCEHUB_API DeleteRecommendationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DeleteRecommendationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const { return m_recommendationTemplateArn; }
    template<typename RecommendationTemplateArnT = Aws::String>
    void SetRecommendationTemplateArn(RecommendationTemplateArnT&& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = std::forward<RecommendationTemplateArnT>(value); }
    template<typename RecommendationTemplateArnT = Aws::String>
    DeleteRecommendationTemplateResult& WithRecommendationTemplateArn(RecommendationTemplateArnT&& value) { SetRecommendationTemplateArn(std::forward<RecommendationTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline RecommendationTemplateStatus GetStatus() const { return m_status; }
    inline void SetStatus(RecommendationTemplateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteRecommendationTemplateResult& WithStatus(RecommendationTemplateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteRecommendationTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationTemplateArn;
    bool m_recommendationTemplateArnHasBeenSet = false;

    RecommendationTemplateStatus m_status{RecommendationTemplateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
