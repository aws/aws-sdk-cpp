/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/core/utils/DateTime.h>
#include <aws/managedblockchain-query/model/ConfirmationStatus.h>
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
   * <p>The container of the transaction output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/TransactionOutputItem">AWS
   * API Reference</a></p>
   */
  class TransactionOutputItem
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionOutputItem() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline const Aws::String& GetTransactionHash() const { return m_transactionHash; }
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }
    template<typename TransactionHashT = Aws::String>
    void SetTransactionHash(TransactionHashT&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::forward<TransactionHashT>(value); }
    template<typename TransactionHashT = Aws::String>
    TransactionOutputItem& WithTransactionHash(TransactionHashT&& value) { SetTransactionHash(std::forward<TransactionHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    TransactionOutputItem& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline TransactionOutputItem& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTransactionTimestamp() const { return m_transactionTimestamp; }
    inline bool TransactionTimestampHasBeenSet() const { return m_transactionTimestampHasBeenSet; }
    template<typename TransactionTimestampT = Aws::Utils::DateTime>
    void SetTransactionTimestamp(TransactionTimestampT&& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = std::forward<TransactionTimestampT>(value); }
    template<typename TransactionTimestampT = Aws::Utils::DateTime>
    TransactionOutputItem& WithTransactionTimestamp(TransactionTimestampT&& value) { SetTransactionTimestamp(std::forward<TransactionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline ConfirmationStatus GetConfirmationStatus() const { return m_confirmationStatus; }
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }
    inline void SetConfirmationStatus(ConfirmationStatus value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }
    inline TransactionOutputItem& WithConfirmationStatus(ConfirmationStatus value) { SetConfirmationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    Aws::Utils::DateTime m_transactionTimestamp{};
    bool m_transactionTimestampHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus{ConfirmationStatus::NOT_SET};
    bool m_confirmationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
