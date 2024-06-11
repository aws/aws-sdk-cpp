﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore/model/CorsRule.h>
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
namespace MediaStore
{
namespace Model
{
  class GetCorsPolicyResult
  {
  public:
    AWS_MEDIASTORE_API GetCorsPolicyResult();
    AWS_MEDIASTORE_API GetCorsPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API GetCorsPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline const Aws::Vector<CorsRule>& GetCorsPolicy() const{ return m_corsPolicy; }
    inline void SetCorsPolicy(const Aws::Vector<CorsRule>& value) { m_corsPolicy = value; }
    inline void SetCorsPolicy(Aws::Vector<CorsRule>&& value) { m_corsPolicy = std::move(value); }
    inline GetCorsPolicyResult& WithCorsPolicy(const Aws::Vector<CorsRule>& value) { SetCorsPolicy(value); return *this;}
    inline GetCorsPolicyResult& WithCorsPolicy(Aws::Vector<CorsRule>&& value) { SetCorsPolicy(std::move(value)); return *this;}
    inline GetCorsPolicyResult& AddCorsPolicy(const CorsRule& value) { m_corsPolicy.push_back(value); return *this; }
    inline GetCorsPolicyResult& AddCorsPolicy(CorsRule&& value) { m_corsPolicy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCorsPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCorsPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCorsPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CorsRule> m_corsPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
