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
  class UpdateModelPackageResult
  {
  public:
    AWS_SAGEMAKER_API UpdateModelPackageResult();
    AWS_SAGEMAKER_API UpdateModelPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateModelPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelPackageArn(const char* value) { m_modelPackageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline UpdateModelPackageResult& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline UpdateModelPackageResult& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline UpdateModelPackageResult& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateModelPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateModelPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateModelPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_modelPackageArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
