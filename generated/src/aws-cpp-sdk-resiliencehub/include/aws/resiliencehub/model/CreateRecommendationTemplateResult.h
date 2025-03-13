/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/RecommendationTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateRecommendationTemplateResult
  {
  public:
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateResult() = default;
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly created recommendation template, returned as an object. This object
     * includes the template's name, format, status, tags, Amazon S3 bucket location,
     * and more.</p>
     */
    inline const RecommendationTemplate& GetRecommendationTemplate() const { return m_recommendationTemplate; }
    template<typename RecommendationTemplateT = RecommendationTemplate>
    void SetRecommendationTemplate(RecommendationTemplateT&& value) { m_recommendationTemplateHasBeenSet = true; m_recommendationTemplate = std::forward<RecommendationTemplateT>(value); }
    template<typename RecommendationTemplateT = RecommendationTemplate>
    CreateRecommendationTemplateResult& WithRecommendationTemplate(RecommendationTemplateT&& value) { SetRecommendationTemplate(std::forward<RecommendationTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRecommendationTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecommendationTemplate m_recommendationTemplate;
    bool m_recommendationTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
