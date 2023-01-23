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
  class UpdateModelCardResult
  {
  public:
    AWS_SAGEMAKER_API UpdateModelCardResult();
    AWS_SAGEMAKER_API UpdateModelCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateModelCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline void SetModelCardArn(const char* value) { m_modelCardArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline UpdateModelCardResult& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline UpdateModelCardResult& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline UpdateModelCardResult& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}

  private:

    Aws::String m_modelCardArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
