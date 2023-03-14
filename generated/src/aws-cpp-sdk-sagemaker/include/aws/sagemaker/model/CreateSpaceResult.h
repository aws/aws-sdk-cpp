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
  class CreateSpaceResult
  {
  public:
    AWS_SAGEMAKER_API CreateSpaceResult();
    AWS_SAGEMAKER_API CreateSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSpaceArn() const{ return m_spaceArn; }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline void SetSpaceArn(const Aws::String& value) { m_spaceArn = value; }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline void SetSpaceArn(Aws::String&& value) { m_spaceArn = std::move(value); }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline void SetSpaceArn(const char* value) { m_spaceArn.assign(value); }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline CreateSpaceResult& WithSpaceArn(const Aws::String& value) { SetSpaceArn(value); return *this;}

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline CreateSpaceResult& WithSpaceArn(Aws::String&& value) { SetSpaceArn(std::move(value)); return *this;}

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline CreateSpaceResult& WithSpaceArn(const char* value) { SetSpaceArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSpaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSpaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSpaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_spaceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
