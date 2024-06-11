﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/SecurityConfigDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class UpdateSecurityConfigResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigResult();
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the updated security configuration. </p>
     */
    inline const SecurityConfigDetail& GetSecurityConfigDetail() const{ return m_securityConfigDetail; }
    inline void SetSecurityConfigDetail(const SecurityConfigDetail& value) { m_securityConfigDetail = value; }
    inline void SetSecurityConfigDetail(SecurityConfigDetail&& value) { m_securityConfigDetail = std::move(value); }
    inline UpdateSecurityConfigResult& WithSecurityConfigDetail(const SecurityConfigDetail& value) { SetSecurityConfigDetail(value); return *this;}
    inline UpdateSecurityConfigResult& WithSecurityConfigDetail(SecurityConfigDetail&& value) { SetSecurityConfigDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSecurityConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSecurityConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSecurityConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SecurityConfigDetail m_securityConfigDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
