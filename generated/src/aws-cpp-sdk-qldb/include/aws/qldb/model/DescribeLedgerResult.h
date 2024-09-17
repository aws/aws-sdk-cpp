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
    AWS_QLDB_API DescribeLedgerResult();
    AWS_QLDB_API DescribeLedgerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API DescribeLedgerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeLedgerResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeLedgerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeLedgerResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeLedgerResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeLedgerResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeLedgerResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the ledger.</p>
     */
    inline const LedgerState& GetState() const{ return m_state; }
    inline void SetState(const LedgerState& value) { m_state = value; }
    inline void SetState(LedgerState&& value) { m_state = std::move(value); }
    inline DescribeLedgerResult& WithState(const LedgerState& value) { SetState(value); return *this;}
    inline DescribeLedgerResult& WithState(LedgerState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeLedgerResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeLedgerResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions mode of the ledger.</p>
     */
    inline const PermissionsMode& GetPermissionsMode() const{ return m_permissionsMode; }
    inline void SetPermissionsMode(const PermissionsMode& value) { m_permissionsMode = value; }
    inline void SetPermissionsMode(PermissionsMode&& value) { m_permissionsMode = std::move(value); }
    inline DescribeLedgerResult& WithPermissionsMode(const PermissionsMode& value) { SetPermissionsMode(value); return *this;}
    inline DescribeLedgerResult& WithPermissionsMode(PermissionsMode&& value) { SetPermissionsMode(std::move(value)); return *this;}
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
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline void SetDeletionProtection(bool value) { m_deletionProtection = value; }
    inline DescribeLedgerResult& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the encryption of data at rest in the ledger. This includes
     * the current status, the KMS key, and when the key became inaccessible (in the
     * case of an error). If this parameter is undefined, the ledger uses an Amazon Web
     * Services owned KMS key for encryption.</p>
     */
    inline const LedgerEncryptionDescription& GetEncryptionDescription() const{ return m_encryptionDescription; }
    inline void SetEncryptionDescription(const LedgerEncryptionDescription& value) { m_encryptionDescription = value; }
    inline void SetEncryptionDescription(LedgerEncryptionDescription&& value) { m_encryptionDescription = std::move(value); }
    inline DescribeLedgerResult& WithEncryptionDescription(const LedgerEncryptionDescription& value) { SetEncryptionDescription(value); return *this;}
    inline DescribeLedgerResult& WithEncryptionDescription(LedgerEncryptionDescription&& value) { SetEncryptionDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLedgerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLedgerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLedgerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_arn;

    LedgerState m_state;

    Aws::Utils::DateTime m_creationDateTime;

    PermissionsMode m_permissionsMode;

    bool m_deletionProtection;

    LedgerEncryptionDescription m_encryptionDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
