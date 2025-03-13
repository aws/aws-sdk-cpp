/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/EncryptionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>Information about the encryption of data at rest in an Amazon QLDB ledger.
   * This includes the current status, the key in Key Management Service (KMS), and
   * when the key became inaccessible (in the case of an error).</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
   * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/LedgerEncryptionDescription">AWS
   * API Reference</a></p>
   */
  class LedgerEncryptionDescription
  {
  public:
    AWS_QLDB_API LedgerEncryptionDescription() = default;
    AWS_QLDB_API LedgerEncryptionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API LedgerEncryptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key that the
     * ledger uses for encryption at rest. If this parameter is undefined, the ledger
     * uses an Amazon Web Services owned KMS key for encryption. It will display
     * <code>AWS_OWNED_KMS_KEY</code> when updating the ledger's encryption
     * configuration to the Amazon Web Services owned KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    LedgerEncryptionDescription& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of encryption at rest for the ledger. This can be one of
     * the following values:</p> <ul> <li> <p> <code>ENABLED</code>: Encryption is
     * fully enabled using the specified key.</p> </li> <li> <p> <code>UPDATING</code>:
     * The ledger is actively processing the specified key change.</p> <p>Key changes
     * in QLDB are asynchronous. The ledger is fully accessible without any performance
     * impact while the key change is being processed. The amount of time it takes to
     * update a key varies depending on the ledger size.</p> </li> <li> <p>
     * <code>KMS_KEY_INACCESSIBLE</code>: The specified customer managed KMS key is not
     * accessible, and the ledger is impaired. Either the key was disabled or deleted,
     * or the grants on the key were revoked. When a ledger is impaired, it is not
     * accessible and does not accept any read or write requests.</p> <p>An impaired
     * ledger automatically returns to an active state after you restore the grants on
     * the key, or re-enable the key that was disabled. However, deleting a customer
     * managed KMS key is irreversible. After a key is deleted, you can no longer
     * access the ledgers that are protected with that key, and the data becomes
     * unrecoverable permanently.</p> </li> </ul>
     */
    inline EncryptionStatus GetEncryptionStatus() const { return m_encryptionStatus; }
    inline bool EncryptionStatusHasBeenSet() const { return m_encryptionStatusHasBeenSet; }
    inline void SetEncryptionStatus(EncryptionStatus value) { m_encryptionStatusHasBeenSet = true; m_encryptionStatus = value; }
    inline LedgerEncryptionDescription& WithEncryptionStatus(EncryptionStatus value) { SetEncryptionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in epoch time format, when the KMS key first became
     * inaccessible, in the case of an error. (Epoch time format is the number of
     * seconds that have elapsed since 12:00:00 AM January 1, 1970 UTC.)</p> <p>This
     * parameter is undefined if the KMS key is accessible.</p>
     */
    inline const Aws::Utils::DateTime& GetInaccessibleKmsKeyDateTime() const { return m_inaccessibleKmsKeyDateTime; }
    inline bool InaccessibleKmsKeyDateTimeHasBeenSet() const { return m_inaccessibleKmsKeyDateTimeHasBeenSet; }
    template<typename InaccessibleKmsKeyDateTimeT = Aws::Utils::DateTime>
    void SetInaccessibleKmsKeyDateTime(InaccessibleKmsKeyDateTimeT&& value) { m_inaccessibleKmsKeyDateTimeHasBeenSet = true; m_inaccessibleKmsKeyDateTime = std::forward<InaccessibleKmsKeyDateTimeT>(value); }
    template<typename InaccessibleKmsKeyDateTimeT = Aws::Utils::DateTime>
    LedgerEncryptionDescription& WithInaccessibleKmsKeyDateTime(InaccessibleKmsKeyDateTimeT&& value) { SetInaccessibleKmsKeyDateTime(std::forward<InaccessibleKmsKeyDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    EncryptionStatus m_encryptionStatus{EncryptionStatus::NOT_SET};
    bool m_encryptionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_inaccessibleKmsKeyDateTime{};
    bool m_inaccessibleKmsKeyDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
