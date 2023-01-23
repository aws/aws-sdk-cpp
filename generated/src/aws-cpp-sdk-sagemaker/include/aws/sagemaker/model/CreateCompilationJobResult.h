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
  class CreateCompilationJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateCompilationJobResult();
    AWS_SAGEMAKER_API CreateCompilationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateCompilationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline const Aws::String& GetCompilationJobArn() const{ return m_compilationJobArn; }

    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline void SetCompilationJobArn(const Aws::String& value) { m_compilationJobArn = value; }

    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline void SetCompilationJobArn(Aws::String&& value) { m_compilationJobArn = std::move(value); }

    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline void SetCompilationJobArn(const char* value) { m_compilationJobArn.assign(value); }

    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline CreateCompilationJobResult& WithCompilationJobArn(const Aws::String& value) { SetCompilationJobArn(value); return *this;}

    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline CreateCompilationJobResult& WithCompilationJobArn(Aws::String&& value) { SetCompilationJobArn(std::move(value)); return *this;}

    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline CreateCompilationJobResult& WithCompilationJobArn(const char* value) { SetCompilationJobArn(value); return *this;}

  private:

    Aws::String m_compilationJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
