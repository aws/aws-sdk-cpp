/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class CreateFeatureGroupResult
  {
  public:
    AWS_SAGEMAKER_API CreateFeatureGroupResult();
    AWS_SAGEMAKER_API CreateFeatureGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateFeatureGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. This is a
     * unique identifier for the feature group. </p>
     */
    inline const Aws::String& GetFeatureGroupArn() const{ return m_featureGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. This is a
     * unique identifier for the feature group. </p>
     */
    inline void SetFeatureGroupArn(const Aws::String& value) { m_featureGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. This is a
     * unique identifier for the feature group. </p>
     */
    inline void SetFeatureGroupArn(Aws::String&& value) { m_featureGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. This is a
     * unique identifier for the feature group. </p>
     */
    inline void SetFeatureGroupArn(const char* value) { m_featureGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. This is a
     * unique identifier for the feature group. </p>
     */
    inline CreateFeatureGroupResult& WithFeatureGroupArn(const Aws::String& value) { SetFeatureGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. This is a
     * unique identifier for the feature group. </p>
     */
    inline CreateFeatureGroupResult& WithFeatureGroupArn(Aws::String&& value) { SetFeatureGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. This is a
     * unique identifier for the feature group. </p>
     */
    inline CreateFeatureGroupResult& WithFeatureGroupArn(const char* value) { SetFeatureGroupArn(value); return *this;}

  private:

    Aws::String m_featureGroupArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
