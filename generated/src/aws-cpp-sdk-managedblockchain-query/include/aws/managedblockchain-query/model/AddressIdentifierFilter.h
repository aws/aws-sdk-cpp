/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>This is the container for the unique public address on the
   * blockchain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/AddressIdentifierFilter">AWS
   * API Reference</a></p>
   */
  class AddressIdentifierFilter
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API AddressIdentifierFilter() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API AddressIdentifierFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API AddressIdentifierFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTransactionEventToAddress() const { return m_transactionEventToAddress; }
    inline bool TransactionEventToAddressHasBeenSet() const { return m_transactionEventToAddressHasBeenSet; }
    template<typename TransactionEventToAddressT = Aws::Vector<Aws::String>>
    void SetTransactionEventToAddress(TransactionEventToAddressT&& value) { m_transactionEventToAddressHasBeenSet = true; m_transactionEventToAddress = std::forward<TransactionEventToAddressT>(value); }
    template<typename TransactionEventToAddressT = Aws::Vector<Aws::String>>
    AddressIdentifierFilter& WithTransactionEventToAddress(TransactionEventToAddressT&& value) { SetTransactionEventToAddress(std::forward<TransactionEventToAddressT>(value)); return *this;}
    template<typename TransactionEventToAddressT = Aws::String>
    AddressIdentifierFilter& AddTransactionEventToAddress(TransactionEventToAddressT&& value) { m_transactionEventToAddressHasBeenSet = true; m_transactionEventToAddress.emplace_back(std::forward<TransactionEventToAddressT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_transactionEventToAddress;
    bool m_transactionEventToAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
