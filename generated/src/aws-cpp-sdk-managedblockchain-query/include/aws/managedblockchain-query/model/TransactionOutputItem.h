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


    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline const Aws::String& GetTransactionHash() const{ return m_transactionHash; }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline void SetTransactionHash(const Aws::String& value) { m_transactionHashHasBeenSet = true; m_transactionHash = value; }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline void SetTransactionHash(Aws::String&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::move(value); }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline void SetTransactionHash(const char* value) { m_transactionHashHasBeenSet = true; m_transactionHash.assign(value); }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline TransactionOutputItem& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline TransactionOutputItem& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline TransactionOutputItem& WithTransactionHash(const char* value) { SetTransactionHash(value); return *this;}


    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline TransactionOutputItem& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline TransactionOutputItem& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTransactionTimestamp() const{ return m_transactionTimestamp; }

    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline bool TransactionTimestampHasBeenSet() const { return m_transactionTimestampHasBeenSet; }

    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline void SetTransactionTimestamp(const Aws::Utils::DateTime& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = value; }

    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline void SetTransactionTimestamp(Aws::Utils::DateTime&& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = std::move(value); }

    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline TransactionOutputItem& WithTransactionTimestamp(const Aws::Utils::DateTime& value) { SetTransactionTimestamp(value); return *this;}

    /**
     * <p>The time when the transaction occurred.</p>
     */
    inline TransactionOutputItem& WithTransactionTimestamp(Aws::Utils::DateTime&& value) { SetTransactionTimestamp(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline const ConfirmationStatus& GetConfirmationStatus() const{ return m_confirmationStatus; }

    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }

    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline void SetConfirmationStatus(const ConfirmationStatus& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }

    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline void SetConfirmationStatus(ConfirmationStatus&& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = std::move(value); }

    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline TransactionOutputItem& WithConfirmationStatus(const ConfirmationStatus& value) { SetConfirmationStatus(value); return *this;}

    /**
     * <p>Specifies whether to list transactions that have not reached Finality.</p>
     */
    inline TransactionOutputItem& WithConfirmationStatus(ConfirmationStatus&& value) { SetConfirmationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

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
