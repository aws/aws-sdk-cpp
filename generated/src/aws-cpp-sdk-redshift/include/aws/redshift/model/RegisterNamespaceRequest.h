/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/model/NamespaceIdentifierUnion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class RegisterNamespaceRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API RegisterNamespaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterNamespace"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of the cluster or serverless namespace that you want to
     * register. </p>
     */
    inline const NamespaceIdentifierUnion& GetNamespaceIdentifier() const { return m_namespaceIdentifier; }
    inline bool NamespaceIdentifierHasBeenSet() const { return m_namespaceIdentifierHasBeenSet; }
    template<typename NamespaceIdentifierT = NamespaceIdentifierUnion>
    void SetNamespaceIdentifier(NamespaceIdentifierT&& value) { m_namespaceIdentifierHasBeenSet = true; m_namespaceIdentifier = std::forward<NamespaceIdentifierT>(value); }
    template<typename NamespaceIdentifierT = NamespaceIdentifierUnion>
    RegisterNamespaceRequest& WithNamespaceIdentifier(NamespaceIdentifierT&& value) { SetNamespaceIdentifier(std::forward<NamespaceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the ID of the consumer account that you want to register
     * the namespace to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerIdentifiers() const { return m_consumerIdentifiers; }
    inline bool ConsumerIdentifiersHasBeenSet() const { return m_consumerIdentifiersHasBeenSet; }
    template<typename ConsumerIdentifiersT = Aws::Vector<Aws::String>>
    void SetConsumerIdentifiers(ConsumerIdentifiersT&& value) { m_consumerIdentifiersHasBeenSet = true; m_consumerIdentifiers = std::forward<ConsumerIdentifiersT>(value); }
    template<typename ConsumerIdentifiersT = Aws::Vector<Aws::String>>
    RegisterNamespaceRequest& WithConsumerIdentifiers(ConsumerIdentifiersT&& value) { SetConsumerIdentifiers(std::forward<ConsumerIdentifiersT>(value)); return *this;}
    template<typename ConsumerIdentifiersT = Aws::String>
    RegisterNamespaceRequest& AddConsumerIdentifiers(ConsumerIdentifiersT&& value) { m_consumerIdentifiersHasBeenSet = true; m_consumerIdentifiers.emplace_back(std::forward<ConsumerIdentifiersT>(value)); return *this; }
    ///@}
  private:

    NamespaceIdentifierUnion m_namespaceIdentifier;
    bool m_namespaceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_consumerIdentifiers;
    bool m_consumerIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
