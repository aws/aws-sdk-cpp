/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/model/LifecyclePolicyIdentifier.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class BatchGetLifecyclePolicyRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetLifecyclePolicy"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline const Aws::Vector<LifecyclePolicyIdentifier>& GetIdentifiers() const{ return m_identifiers; }

    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }

    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline void SetIdentifiers(const Aws::Vector<LifecyclePolicyIdentifier>& value) { m_identifiersHasBeenSet = true; m_identifiers = value; }

    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline void SetIdentifiers(Aws::Vector<LifecyclePolicyIdentifier>&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::move(value); }

    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline BatchGetLifecyclePolicyRequest& WithIdentifiers(const Aws::Vector<LifecyclePolicyIdentifier>& value) { SetIdentifiers(value); return *this;}

    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline BatchGetLifecyclePolicyRequest& WithIdentifiers(Aws::Vector<LifecyclePolicyIdentifier>&& value) { SetIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline BatchGetLifecyclePolicyRequest& AddIdentifiers(const LifecyclePolicyIdentifier& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline BatchGetLifecyclePolicyRequest& AddIdentifiers(LifecyclePolicyIdentifier&& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LifecyclePolicyIdentifier> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
