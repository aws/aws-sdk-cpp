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
  class UpdateCodeRepositoryResult
  {
  public:
    AWS_SAGEMAKER_API UpdateCodeRepositoryResult();
    AWS_SAGEMAKER_API UpdateCodeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateCodeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const{ return m_codeRepositoryArn; }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const Aws::String& value) { m_codeRepositoryArn = value; }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(Aws::String&& value) { m_codeRepositoryArn = std::move(value); }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const char* value) { m_codeRepositoryArn.assign(value); }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline UpdateCodeRepositoryResult& WithCodeRepositoryArn(const Aws::String& value) { SetCodeRepositoryArn(value); return *this;}

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline UpdateCodeRepositoryResult& WithCodeRepositoryArn(Aws::String&& value) { SetCodeRepositoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline UpdateCodeRepositoryResult& WithCodeRepositoryArn(const char* value) { SetCodeRepositoryArn(value); return *this;}

  private:

    Aws::String m_codeRepositoryArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
