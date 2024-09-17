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
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionOutputItem();
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline const Aws::String& GetTransactionHash() const{ return m_transactionHash; }
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }
    inline void SetTransactionHash(const Aws::String& value) { m_transactionHashHasBeenSet = true; m_transactionHash = value; }
    inline void SetTransactionHash(Aws::String&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::move(value); }
    inline void SetTransactionHash(const char* value) { m_transactionHashHasBeenSet = true; m_transactionHash.assign(value); }
    inline TransactionOutputItem& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}
    inline TransactionOutputItem& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}
    inline TransactionOutputItem& WithTransactionHash(const char* value) { SetTransactionHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline TransactionOutputItem& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline TransactionOutputItem& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline TransactionOutputItem& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }
    inline TransactionOutputItem& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}
    inline TransactionOutputItem& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTransactionTimestamp() const{ return m_transactionTimestamp; }
    inline bool TransactionTimestampHasBeenSet() const { return m_transactionTimestampHasBeenSet; }
    inline void SetTransactionTimestamp(const Aws::Utils::DateTime& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = value; }
    inline void SetTransactionTimestamp(Aws::Utils::DateTime&& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = std::move(value); }
    inline TransactionOutputItem& WithTransactionTimestamp(const Aws::Utils::DateTime& value) { SetTransactionTimestamp(value); return *this;}
    inline TransactionOutputItem& WithTransactionTimestamp(Aws::Utils::DateTime&& value) { SetTransactionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline const ConfirmationStatus& GetConfirmationStatus() const{ return m_confirmationStatus; }
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }
    inline void SetConfirmationStatus(const ConfirmationStatus& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }
    inline void SetConfirmationStatus(ConfirmationStatus&& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = std::move(value); }
    inline TransactionOutputItem& WithConfirmationStatus(const ConfirmationStatus& value) { SetConfirmationStatus(value); return *this;}
    inline TransactionOutputItem& WithConfirmationStatus(ConfirmationStatus&& value) { SetConfirmationStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;

    Aws::Utils::DateTime m_transactionTimestamp;
    bool m_transactionTimestampHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus;
    bool m_confirmationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
