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
  class CreateHubContentReferenceResult
  {
  public:
    AWS_SAGEMAKER_API CreateHubContentReferenceResult();
    AWS_SAGEMAKER_API CreateHubContentReferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateHubContentReferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the hub that the hub content reference was added to.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }
    inline CreateHubContentReferenceResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}
    inline CreateHubContentReferenceResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}
    inline CreateHubContentReferenceResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the hub content.</p>
     */
    inline const Aws::String& GetHubContentArn() const{ return m_hubContentArn; }
    inline void SetHubContentArn(const Aws::String& value) { m_hubContentArn = value; }
    inline void SetHubContentArn(Aws::String&& value) { m_hubContentArn = std::move(value); }
    inline void SetHubContentArn(const char* value) { m_hubContentArn.assign(value); }
    inline CreateHubContentReferenceResult& WithHubContentArn(const Aws::String& value) { SetHubContentArn(value); return *this;}
    inline CreateHubContentReferenceResult& WithHubContentArn(Aws::String&& value) { SetHubContentArn(std::move(value)); return *this;}
    inline CreateHubContentReferenceResult& WithHubContentArn(const char* value) { SetHubContentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHubContentReferenceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHubContentReferenceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHubContentReferenceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hubArn;

    Aws::String m_hubContentArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
