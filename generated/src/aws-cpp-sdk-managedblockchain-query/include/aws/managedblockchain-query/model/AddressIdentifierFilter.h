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
    AWS_MANAGEDBLOCKCHAINQUERY_API AddressIdentifierFilter();
    AWS_MANAGEDBLOCKCHAINQUERY_API AddressIdentifierFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API AddressIdentifierFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTransactionEventToAddress() const{ return m_transactionEventToAddress; }

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline bool TransactionEventToAddressHasBeenSet() const { return m_transactionEventToAddressHasBeenSet; }

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline void SetTransactionEventToAddress(const Aws::Vector<Aws::String>& value) { m_transactionEventToAddressHasBeenSet = true; m_transactionEventToAddress = value; }

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline void SetTransactionEventToAddress(Aws::Vector<Aws::String>&& value) { m_transactionEventToAddressHasBeenSet = true; m_transactionEventToAddress = std::move(value); }

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline AddressIdentifierFilter& WithTransactionEventToAddress(const Aws::Vector<Aws::String>& value) { SetTransactionEventToAddress(value); return *this;}

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline AddressIdentifierFilter& WithTransactionEventToAddress(Aws::Vector<Aws::String>&& value) { SetTransactionEventToAddress(std::move(value)); return *this;}

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline AddressIdentifierFilter& AddTransactionEventToAddress(const Aws::String& value) { m_transactionEventToAddressHasBeenSet = true; m_transactionEventToAddress.push_back(value); return *this; }

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline AddressIdentifierFilter& AddTransactionEventToAddress(Aws::String&& value) { m_transactionEventToAddressHasBeenSet = true; m_transactionEventToAddress.push_back(std::move(value)); return *this; }

    /**
     * <p>The container for the recipient address of the transaction. </p>
     */
    inline AddressIdentifierFilter& AddTransactionEventToAddress(const char* value) { m_transactionEventToAddressHasBeenSet = true; m_transactionEventToAddress.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_transactionEventToAddress;
    bool m_transactionEventToAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
