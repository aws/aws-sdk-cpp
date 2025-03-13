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
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetLifecyclePolicy"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifiers of policy types and policy names.</p>
     */
    inline const Aws::Vector<LifecyclePolicyIdentifier>& GetIdentifiers() const { return m_identifiers; }
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
    template<typename IdentifiersT = Aws::Vector<LifecyclePolicyIdentifier>>
    void SetIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::forward<IdentifiersT>(value); }
    template<typename IdentifiersT = Aws::Vector<LifecyclePolicyIdentifier>>
    BatchGetLifecyclePolicyRequest& WithIdentifiers(IdentifiersT&& value) { SetIdentifiers(std::forward<IdentifiersT>(value)); return *this;}
    template<typename IdentifiersT = LifecyclePolicyIdentifier>
    BatchGetLifecyclePolicyRequest& AddIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers.emplace_back(std::forward<IdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LifecyclePolicyIdentifier> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
