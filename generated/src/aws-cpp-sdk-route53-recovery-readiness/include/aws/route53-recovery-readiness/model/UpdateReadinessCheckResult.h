/**
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
  class UpdateReadinessCheckResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckArn() const { return m_readinessCheckArn; }
    template<typename ReadinessCheckArnT = Aws::String>
    void SetReadinessCheckArn(ReadinessCheckArnT&& value) { m_readinessCheckArnHasBeenSet = true; m_readinessCheckArn = std::forward<ReadinessCheckArnT>(value); }
    template<typename ReadinessCheckArnT = Aws::String>
    UpdateReadinessCheckResult& WithReadinessCheckArn(ReadinessCheckArnT&& value) { SetReadinessCheckArn(std::forward<ReadinessCheckArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const { return m_readinessCheckName; }
    template<typename ReadinessCheckNameT = Aws::String>
    void SetReadinessCheckName(ReadinessCheckNameT&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::forward<ReadinessCheckNameT>(value); }
    template<typename ReadinessCheckNameT = Aws::String>
    UpdateReadinessCheckResult& WithReadinessCheckName(ReadinessCheckNameT&& value) { SetReadinessCheckName(std::forward<ReadinessCheckNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline const Aws::String& GetResourceSet() const { return m_resourceSet; }
    template<typename ResourceSetT = Aws::String>
    void SetResourceSet(ResourceSetT&& value) { m_resourceSetHasBeenSet = true; m_resourceSet = std::forward<ResourceSetT>(value); }
    template<typename ResourceSetT = Aws::String>
    UpdateReadinessCheckResult& WithResourceSet(ResourceSetT&& value) { SetResourceSet(std::forward<ResourceSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateReadinessCheckResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateReadinessCheckResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateReadinessCheckResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_readinessCheckArn;
    bool m_readinessCheckArnHasBeenSet = false;

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;

    Aws::String m_resourceSet;
    bool m_resourceSetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
