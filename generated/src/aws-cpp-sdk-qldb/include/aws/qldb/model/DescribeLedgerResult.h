/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/LedgerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qldb/model/PermissionsMode.h>
#include <aws/qldb/model/LedgerEncryptionDescription.h>
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
namespace QLDB
{
namespace Model
{
  class DescribeLedgerResult
  {
  public:
    AWS_QLDB_API DescribeLedgerResult() = default;
    AWS_QLDB_API DescribeLedgerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API DescribeLedgerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeLedgerResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeLedgerResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the ledger.</p>
     */
    inline LedgerState GetState() const { return m_state; }
    inline void SetState(LedgerState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeLedgerResult& WithState(LedgerState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeLedgerResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions mode of the ledger.</p>
     */
    inline PermissionsMode GetPermissionsMode() const { return m_permissionsMode; }
    inline void SetPermissionsMode(PermissionsMode value) { m_permissionsModeHasBeenSet = true; m_permissionsMode = value; }
    inline DescribeLedgerResult& WithPermissionsMode(PermissionsMode value) { SetPermissionsMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the ledger is protected from being deleted by any user. If
     * not defined during ledger creation, this feature is enabled (<code>true</code>)
     * by default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger. You can disable it by calling the
     * <code>UpdateLedger</code> operation to set this parameter to
     * <code>false</code>.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline DescribeLedgerResult& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the encryption of data at rest in the ledger. This includes
     * the current status, the KMS key, and when the key became inaccessible (in the
     * case of an error). If this parameter is undefined, the ledger uses an Amazon Web
     * Services owned KMS key for encryption.</p>
     */
    inline const LedgerEncryptionDescription& GetEncryptionDescription() const { return m_encryptionDescription; }
    template<typename EncryptionDescriptionT = LedgerEncryptionDescription>
    void SetEncryptionDescription(EncryptionDescriptionT&& value) { m_encryptionDescriptionHasBeenSet = true; m_encryptionDescription = std::forward<EncryptionDescriptionT>(value); }
    template<typename EncryptionDescriptionT = LedgerEncryptionDescription>
    DescribeLedgerResult& WithEncryptionDescription(EncryptionDescriptionT&& value) { SetEncryptionDescription(std::forward<EncryptionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLedgerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    LedgerState m_state{LedgerState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    PermissionsMode m_permissionsMode{PermissionsMode::NOT_SET};
    bool m_permissionsModeHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    LedgerEncryptionDescription m_encryptionDescription;
    bool m_encryptionDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
