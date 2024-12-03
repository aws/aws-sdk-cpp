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
    AWS_REDSHIFT_API RegisterNamespaceRequest();

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
    inline const NamespaceIdentifierUnion& GetNamespaceIdentifier() const{ return m_namespaceIdentifier; }
    inline bool NamespaceIdentifierHasBeenSet() const { return m_namespaceIdentifierHasBeenSet; }
    inline void SetNamespaceIdentifier(const NamespaceIdentifierUnion& value) { m_namespaceIdentifierHasBeenSet = true; m_namespaceIdentifier = value; }
    inline void SetNamespaceIdentifier(NamespaceIdentifierUnion&& value) { m_namespaceIdentifierHasBeenSet = true; m_namespaceIdentifier = std::move(value); }
    inline RegisterNamespaceRequest& WithNamespaceIdentifier(const NamespaceIdentifierUnion& value) { SetNamespaceIdentifier(value); return *this;}
    inline RegisterNamespaceRequest& WithNamespaceIdentifier(NamespaceIdentifierUnion&& value) { SetNamespaceIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the ID of the consumer account that you want to register
     * the namespace to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerIdentifiers() const{ return m_consumerIdentifiers; }
    inline bool ConsumerIdentifiersHasBeenSet() const { return m_consumerIdentifiersHasBeenSet; }
    inline void SetConsumerIdentifiers(const Aws::Vector<Aws::String>& value) { m_consumerIdentifiersHasBeenSet = true; m_consumerIdentifiers = value; }
    inline void SetConsumerIdentifiers(Aws::Vector<Aws::String>&& value) { m_consumerIdentifiersHasBeenSet = true; m_consumerIdentifiers = std::move(value); }
    inline RegisterNamespaceRequest& WithConsumerIdentifiers(const Aws::Vector<Aws::String>& value) { SetConsumerIdentifiers(value); return *this;}
    inline RegisterNamespaceRequest& WithConsumerIdentifiers(Aws::Vector<Aws::String>&& value) { SetConsumerIdentifiers(std::move(value)); return *this;}
    inline RegisterNamespaceRequest& AddConsumerIdentifiers(const Aws::String& value) { m_consumerIdentifiersHasBeenSet = true; m_consumerIdentifiers.push_back(value); return *this; }
    inline RegisterNamespaceRequest& AddConsumerIdentifiers(Aws::String&& value) { m_consumerIdentifiersHasBeenSet = true; m_consumerIdentifiers.push_back(std::move(value)); return *this; }
    inline RegisterNamespaceRequest& AddConsumerIdentifiers(const char* value) { m_consumerIdentifiersHasBeenSet = true; m_consumerIdentifiers.push_back(value); return *this; }
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
