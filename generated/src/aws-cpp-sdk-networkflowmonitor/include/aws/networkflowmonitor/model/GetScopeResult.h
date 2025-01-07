/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/ScopeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/networkflowmonitor/model/TargetResource.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{
  class GetScopeResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API GetScopeResult();
    AWS_NETWORKFLOWMONITOR_API GetScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the scope that includes the resources you want to get data
     * results for. A scope ID is an internally-generated identifier that includes all
     * the resources for a specific root account. A scope ID is returned from a
     * <code>CreateScope</code> API call.</p>
     */
    inline const Aws::String& GetScopeId() const{ return m_scopeId; }
    inline void SetScopeId(const Aws::String& value) { m_scopeId = value; }
    inline void SetScopeId(Aws::String&& value) { m_scopeId = std::move(value); }
    inline void SetScopeId(const char* value) { m_scopeId.assign(value); }
    inline GetScopeResult& WithScopeId(const Aws::String& value) { SetScopeId(value); return *this;}
    inline GetScopeResult& WithScopeId(Aws::String&& value) { SetScopeId(std::move(value)); return *this;}
    inline GetScopeResult& WithScopeId(const char* value) { SetScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a scope. The status can be one of the following:
     * <code>SUCCEEDED</code>, <code>IN_PROGRESS</code>, or <code>FAILED</code>.</p>
     */
    inline const ScopeStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ScopeStatus& value) { m_status = value; }
    inline void SetStatus(ScopeStatus&& value) { m_status = std::move(value); }
    inline GetScopeResult& WithStatus(const ScopeStatus& value) { SetStatus(value); return *this;}
    inline GetScopeResult& WithStatus(ScopeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope.</p>
     */
    inline const Aws::String& GetScopeArn() const{ return m_scopeArn; }
    inline void SetScopeArn(const Aws::String& value) { m_scopeArn = value; }
    inline void SetScopeArn(Aws::String&& value) { m_scopeArn = std::move(value); }
    inline void SetScopeArn(const char* value) { m_scopeArn.assign(value); }
    inline GetScopeResult& WithScopeArn(const Aws::String& value) { SetScopeArn(value); return *this;}
    inline GetScopeResult& WithScopeArn(Aws::String&& value) { SetScopeArn(std::move(value)); return *this;}
    inline GetScopeResult& WithScopeArn(const char* value) { SetScopeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for a scope</p>
     */
    inline const Aws::Vector<TargetResource>& GetTargets() const{ return m_targets; }
    inline void SetTargets(const Aws::Vector<TargetResource>& value) { m_targets = value; }
    inline void SetTargets(Aws::Vector<TargetResource>&& value) { m_targets = std::move(value); }
    inline GetScopeResult& WithTargets(const Aws::Vector<TargetResource>& value) { SetTargets(value); return *this;}
    inline GetScopeResult& WithTargets(Aws::Vector<TargetResource>&& value) { SetTargets(std::move(value)); return *this;}
    inline GetScopeResult& AddTargets(const TargetResource& value) { m_targets.push_back(value); return *this; }
    inline GetScopeResult& AddTargets(TargetResource&& value) { m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags for a scope.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetScopeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetScopeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetScopeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetScopeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetScopeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetScopeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetScopeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetScopeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetScopeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetScopeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetScopeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetScopeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_scopeId;

    ScopeStatus m_status;

    Aws::String m_scopeArn;

    Aws::Vector<TargetResource> m_targets;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
