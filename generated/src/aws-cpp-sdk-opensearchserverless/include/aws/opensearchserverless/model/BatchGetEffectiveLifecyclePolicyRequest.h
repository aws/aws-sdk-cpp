/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/model/LifecyclePolicyResourceIdentifier.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class BatchGetEffectiveLifecyclePolicyRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetEffectiveLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetEffectiveLifecyclePolicy"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline const Aws::Vector<LifecyclePolicyResourceIdentifier>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }

    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline bool ResourceIdentifiersHasBeenSet() const { return m_resourceIdentifiersHasBeenSet; }

    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline void SetResourceIdentifiers(const Aws::Vector<LifecyclePolicyResourceIdentifier>& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = value; }

    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline void SetResourceIdentifiers(Aws::Vector<LifecyclePolicyResourceIdentifier>&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::move(value); }

    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyRequest& WithResourceIdentifiers(const Aws::Vector<LifecyclePolicyResourceIdentifier>& value) { SetResourceIdentifiers(value); return *this;}

    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyRequest& WithResourceIdentifiers(Aws::Vector<LifecyclePolicyResourceIdentifier>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyRequest& AddResourceIdentifiers(const LifecyclePolicyResourceIdentifier& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of policy types and resource names.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyRequest& AddResourceIdentifiers(LifecyclePolicyResourceIdentifier&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LifecyclePolicyResourceIdentifier> m_resourceIdentifiers;
    bool m_resourceIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
