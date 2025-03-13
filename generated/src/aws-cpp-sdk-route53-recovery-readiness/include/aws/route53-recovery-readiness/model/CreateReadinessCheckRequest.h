/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class CreateReadinessCheckRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateReadinessCheckRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReadinessCheck"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the readiness check to create.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const { return m_readinessCheckName; }
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }
    template<typename ReadinessCheckNameT = Aws::String>
    void SetReadinessCheckName(ReadinessCheckNameT&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::forward<ReadinessCheckNameT>(value); }
    template<typename ReadinessCheckNameT = Aws::String>
    CreateReadinessCheckRequest& WithReadinessCheckName(ReadinessCheckNameT&& value) { SetReadinessCheckName(std::forward<ReadinessCheckNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource set to check.</p>
     */
    inline const Aws::String& GetResourceSetName() const { return m_resourceSetName; }
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }
    template<typename ResourceSetNameT = Aws::String>
    void SetResourceSetName(ResourceSetNameT&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::forward<ResourceSetNameT>(value); }
    template<typename ResourceSetNameT = Aws::String>
    CreateReadinessCheckRequest& WithResourceSetName(ResourceSetNameT&& value) { SetResourceSetName(std::forward<ResourceSetNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateReadinessCheckRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateReadinessCheckRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
