﻿/**
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
  class CreatePresignedDomainUrlResult
  {
  public:
    AWS_SAGEMAKER_API CreatePresignedDomainUrlResult();
    AWS_SAGEMAKER_API CreatePresignedDomainUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreatePresignedDomainUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The presigned URL.</p>
     */
    inline const Aws::String& GetAuthorizedUrl() const{ return m_authorizedUrl; }
    inline void SetAuthorizedUrl(const Aws::String& value) { m_authorizedUrl = value; }
    inline void SetAuthorizedUrl(Aws::String&& value) { m_authorizedUrl = std::move(value); }
    inline void SetAuthorizedUrl(const char* value) { m_authorizedUrl.assign(value); }
    inline CreatePresignedDomainUrlResult& WithAuthorizedUrl(const Aws::String& value) { SetAuthorizedUrl(value); return *this;}
    inline CreatePresignedDomainUrlResult& WithAuthorizedUrl(Aws::String&& value) { SetAuthorizedUrl(std::move(value)); return *this;}
    inline CreatePresignedDomainUrlResult& WithAuthorizedUrl(const char* value) { SetAuthorizedUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePresignedDomainUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePresignedDomainUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePresignedDomainUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizedUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
