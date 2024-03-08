/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorNetworkType.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class CreateAccessorResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult();
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline const Aws::String& GetAccessorId() const{ return m_accessorId; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(const Aws::String& value) { m_accessorId = value; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(Aws::String&& value) { m_accessorId = std::move(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(const char* value) { m_accessorId.assign(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline CreateAccessorResult& WithAccessorId(const Aws::String& value) { SetAccessorId(value); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline CreateAccessorResult& WithAccessorId(Aws::String&& value) { SetAccessorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline CreateAccessorResult& WithAccessorId(const char* value) { SetAccessorId(value); return *this;}


    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline const Aws::String& GetBillingToken() const{ return m_billingToken; }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline void SetBillingToken(const Aws::String& value) { m_billingToken = value; }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline void SetBillingToken(Aws::String&& value) { m_billingToken = std::move(value); }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline void SetBillingToken(const char* value) { m_billingToken.assign(value); }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline CreateAccessorResult& WithBillingToken(const Aws::String& value) { SetBillingToken(value); return *this;}

    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline CreateAccessorResult& WithBillingToken(Aws::String&& value) { SetBillingToken(std::move(value)); return *this;}

    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline CreateAccessorResult& WithBillingToken(const char* value) { SetBillingToken(value); return *this;}


    /**
     * <p>The blockchain network that the accessor token is created for.</p>
     */
    inline const AccessorNetworkType& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The blockchain network that the accessor token is created for.</p>
     */
    inline void SetNetworkType(const AccessorNetworkType& value) { m_networkType = value; }

    /**
     * <p>The blockchain network that the accessor token is created for.</p>
     */
    inline void SetNetworkType(AccessorNetworkType&& value) { m_networkType = std::move(value); }

    /**
     * <p>The blockchain network that the accessor token is created for.</p>
     */
    inline CreateAccessorResult& WithNetworkType(const AccessorNetworkType& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The blockchain network that the accessor token is created for.</p>
     */
    inline CreateAccessorResult& WithNetworkType(AccessorNetworkType&& value) { SetNetworkType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAccessorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAccessorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAccessorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_accessorId;

    Aws::String m_billingToken;

    AccessorNetworkType m_networkType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
