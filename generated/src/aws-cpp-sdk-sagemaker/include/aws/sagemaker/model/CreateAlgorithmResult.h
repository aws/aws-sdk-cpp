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
  class CreateAlgorithmResult
  {
  public:
    AWS_SAGEMAKER_API CreateAlgorithmResult();
    AWS_SAGEMAKER_API CreateAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline CreateAlgorithmResult& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline CreateAlgorithmResult& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline CreateAlgorithmResult& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}

  private:

    Aws::String m_algorithmArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
