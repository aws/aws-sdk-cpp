﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class GetReadinessCheckResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResult();
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckArn() const{ return m_readinessCheckArn; }
    inline void SetReadinessCheckArn(const Aws::String& value) { m_readinessCheckArn = value; }
    inline void SetReadinessCheckArn(Aws::String&& value) { m_readinessCheckArn = std::move(value); }
    inline void SetReadinessCheckArn(const char* value) { m_readinessCheckArn.assign(value); }
    inline GetReadinessCheckResult& WithReadinessCheckArn(const Aws::String& value) { SetReadinessCheckArn(value); return *this;}
    inline GetReadinessCheckResult& WithReadinessCheckArn(Aws::String&& value) { SetReadinessCheckArn(std::move(value)); return *this;}
    inline GetReadinessCheckResult& WithReadinessCheckArn(const char* value) { SetReadinessCheckArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckName = value; }
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckName = std::move(value); }
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckName.assign(value); }
    inline GetReadinessCheckResult& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}
    inline GetReadinessCheckResult& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}
    inline GetReadinessCheckResult& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline const Aws::String& GetResourceSet() const{ return m_resourceSet; }
    inline void SetResourceSet(const Aws::String& value) { m_resourceSet = value; }
    inline void SetResourceSet(Aws::String&& value) { m_resourceSet = std::move(value); }
    inline void SetResourceSet(const char* value) { m_resourceSet.assign(value); }
    inline GetReadinessCheckResult& WithResourceSet(const Aws::String& value) { SetResourceSet(value); return *this;}
    inline GetReadinessCheckResult& WithResourceSet(Aws::String&& value) { SetResourceSet(std::move(value)); return *this;}
    inline GetReadinessCheckResult& WithResourceSet(const char* value) { SetResourceSet(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetReadinessCheckResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetReadinessCheckResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetReadinessCheckResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetReadinessCheckResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetReadinessCheckResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetReadinessCheckResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetReadinessCheckResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetReadinessCheckResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetReadinessCheckResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReadinessCheckResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReadinessCheckResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReadinessCheckResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_readinessCheckArn;

    Aws::String m_readinessCheckName;

    Aws::String m_resourceSet;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
