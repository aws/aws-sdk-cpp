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
  class CreateModelResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelResult();
    AWS_SAGEMAKER_API CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the model created in SageMaker.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the model created in SageMaker.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The ARN of the model created in SageMaker.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the model created in SageMaker.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The ARN of the model created in SageMaker.</p>
     */
    inline CreateModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the model created in SageMaker.</p>
     */
    inline CreateModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model created in SageMaker.</p>
     */
    inline CreateModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}

  private:

    Aws::String m_modelArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
