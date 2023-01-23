/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/RecommendationTemplate.h>
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
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateResult();
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API CreateRecommendationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created recommendation template, returned as an object. This object
     * includes the template's name, format, status, tags, Amazon S3 bucket location,
     * and more.</p>
     */
    inline const RecommendationTemplate& GetRecommendationTemplate() const{ return m_recommendationTemplate; }

    /**
     * <p>The newly created recommendation template, returned as an object. This object
     * includes the template's name, format, status, tags, Amazon S3 bucket location,
     * and more.</p>
     */
    inline void SetRecommendationTemplate(const RecommendationTemplate& value) { m_recommendationTemplate = value; }

    /**
     * <p>The newly created recommendation template, returned as an object. This object
     * includes the template's name, format, status, tags, Amazon S3 bucket location,
     * and more.</p>
     */
    inline void SetRecommendationTemplate(RecommendationTemplate&& value) { m_recommendationTemplate = std::move(value); }

    /**
     * <p>The newly created recommendation template, returned as an object. This object
     * includes the template's name, format, status, tags, Amazon S3 bucket location,
     * and more.</p>
     */
    inline CreateRecommendationTemplateResult& WithRecommendationTemplate(const RecommendationTemplate& value) { SetRecommendationTemplate(value); return *this;}

    /**
     * <p>The newly created recommendation template, returned as an object. This object
     * includes the template's name, format, status, tags, Amazon S3 bucket location,
     * and more.</p>
     */
    inline CreateRecommendationTemplateResult& WithRecommendationTemplate(RecommendationTemplate&& value) { SetRecommendationTemplate(std::move(value)); return *this;}

  private:

    RecommendationTemplate m_recommendationTemplate;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
