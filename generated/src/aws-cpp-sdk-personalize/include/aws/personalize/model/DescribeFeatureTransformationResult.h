/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/FeatureTransformation.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeFeatureTransformationResult
  {
  public:
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult();
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline const FeatureTransformation& GetFeatureTransformation() const{ return m_featureTransformation; }

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline void SetFeatureTransformation(const FeatureTransformation& value) { m_featureTransformation = value; }

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline void SetFeatureTransformation(FeatureTransformation&& value) { m_featureTransformation = std::move(value); }

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline DescribeFeatureTransformationResult& WithFeatureTransformation(const FeatureTransformation& value) { SetFeatureTransformation(value); return *this;}

    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline DescribeFeatureTransformationResult& WithFeatureTransformation(FeatureTransformation&& value) { SetFeatureTransformation(std::move(value)); return *this;}

  private:

    FeatureTransformation m_featureTransformation;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
