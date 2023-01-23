/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class CreateAccessorRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessor"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline CreateAccessorRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline CreateAccessorRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI.</p>
     */
    inline CreateAccessorRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The type of accessor.</p>  <p>Currently accessor type is restricted to
     * <code>BILLING_TOKEN</code>.</p> 
     */
    inline const AccessorType& GetAccessorType() const{ return m_accessorType; }

    /**
     * <p>The type of accessor.</p>  <p>Currently accessor type is restricted to
     * <code>BILLING_TOKEN</code>.</p> 
     */
    inline bool AccessorTypeHasBeenSet() const { return m_accessorTypeHasBeenSet; }

    /**
     * <p>The type of accessor.</p>  <p>Currently accessor type is restricted to
     * <code>BILLING_TOKEN</code>.</p> 
     */
    inline void SetAccessorType(const AccessorType& value) { m_accessorTypeHasBeenSet = true; m_accessorType = value; }

    /**
     * <p>The type of accessor.</p>  <p>Currently accessor type is restricted to
     * <code>BILLING_TOKEN</code>.</p> 
     */
    inline void SetAccessorType(AccessorType&& value) { m_accessorTypeHasBeenSet = true; m_accessorType = std::move(value); }

    /**
     * <p>The type of accessor.</p>  <p>Currently accessor type is restricted to
     * <code>BILLING_TOKEN</code>.</p> 
     */
    inline CreateAccessorRequest& WithAccessorType(const AccessorType& value) { SetAccessorType(value); return *this;}

    /**
     * <p>The type of accessor.</p>  <p>Currently accessor type is restricted to
     * <code>BILLING_TOKEN</code>.</p> 
     */
    inline CreateAccessorRequest& WithAccessorType(AccessorType&& value) { SetAccessorType(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    AccessorType m_accessorType;
    bool m_accessorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
