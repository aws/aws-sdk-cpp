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
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult() = default;
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline const Aws::String& GetAccessorId() const { return m_accessorId; }
    template<typename AccessorIdT = Aws::String>
    void SetAccessorId(AccessorIdT&& value) { m_accessorIdHasBeenSet = true; m_accessorId = std::forward<AccessorIdT>(value); }
    template<typename AccessorIdT = Aws::String>
    CreateAccessorResult& WithAccessorId(AccessorIdT&& value) { SetAccessorId(std::forward<AccessorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing token is a property of the Accessor. Use this token to when
     * making calls to the blockchain network. The billing token is used to track your
     * accessor token for billing requests.</p>
     */
    inline const Aws::String& GetBillingToken() const { return m_billingToken; }
    template<typename BillingTokenT = Aws::String>
    void SetBillingToken(BillingTokenT&& value) { m_billingTokenHasBeenSet = true; m_billingToken = std::forward<BillingTokenT>(value); }
    template<typename BillingTokenT = Aws::String>
    CreateAccessorResult& WithBillingToken(BillingTokenT&& value) { SetBillingToken(std::forward<BillingTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain network that the accessor token is created for.</p>
     */
    inline AccessorNetworkType GetNetworkType() const { return m_networkType; }
    inline void SetNetworkType(AccessorNetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateAccessorResult& WithNetworkType(AccessorNetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccessorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessorId;
    bool m_accessorIdHasBeenSet = false;

    Aws::String m_billingToken;
    bool m_billingTokenHasBeenSet = false;

    AccessorNetworkType m_networkType{AccessorNetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
