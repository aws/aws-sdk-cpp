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
  class UpdateEndpointResult
  {
  public:
    AWS_SAGEMAKER_API UpdateEndpointResult();
    AWS_SAGEMAKER_API UpdateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline UpdateEndpointResult& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline UpdateEndpointResult& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline UpdateEndpointResult& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_endpointArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
