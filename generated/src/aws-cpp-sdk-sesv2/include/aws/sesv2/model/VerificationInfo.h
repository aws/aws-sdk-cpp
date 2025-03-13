/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/VerificationError.h>
#include <aws/sesv2/model/SOARecord.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains additional information about the verification status
   * for the identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/VerificationInfo">AWS
   * API Reference</a></p>
   */
  class VerificationInfo
  {
  public:
    AWS_SESV2_API VerificationInfo() = default;
    AWS_SESV2_API VerificationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API VerificationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last time a verification attempt was made for this identity.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckedTimestamp() const { return m_lastCheckedTimestamp; }
    inline bool LastCheckedTimestampHasBeenSet() const { return m_lastCheckedTimestampHasBeenSet; }
    template<typename LastCheckedTimestampT = Aws::Utils::DateTime>
    void SetLastCheckedTimestamp(LastCheckedTimestampT&& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = std::forward<LastCheckedTimestampT>(value); }
    template<typename LastCheckedTimestampT = Aws::Utils::DateTime>
    VerificationInfo& WithLastCheckedTimestamp(LastCheckedTimestampT&& value) { SetLastCheckedTimestamp(std::forward<LastCheckedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time a successful verification was made for this identity.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessTimestamp() const { return m_lastSuccessTimestamp; }
    inline bool LastSuccessTimestampHasBeenSet() const { return m_lastSuccessTimestampHasBeenSet; }
    template<typename LastSuccessTimestampT = Aws::Utils::DateTime>
    void SetLastSuccessTimestamp(LastSuccessTimestampT&& value) { m_lastSuccessTimestampHasBeenSet = true; m_lastSuccessTimestamp = std::forward<LastSuccessTimestampT>(value); }
    template<typename LastSuccessTimestampT = Aws::Utils::DateTime>
    VerificationInfo& WithLastSuccessTimestamp(LastSuccessTimestampT&& value) { SetLastSuccessTimestamp(std::forward<LastSuccessTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the reason for the failure describing why Amazon SES was not able to
     * successfully verify the identity. Below are the possible values: </p> <ul> <li>
     * <p> <code>INVALID_VALUE</code> – Amazon SES was able to find the record, but the
     * value contained within the record was invalid. Ensure you have published the
     * correct values for the record.</p> </li> <li> <p> <code>TYPE_NOT_FOUND</code> –
     * The queried hostname exists but does not have the requested type of DNS record.
     * Ensure that you have published the correct type of DNS record.</p> </li> <li>
     * <p> <code>HOST_NOT_FOUND</code> – The queried hostname does not exist or was not
     * reachable at the time of the request. Ensure that you have published the
     * required DNS record(s). </p> </li> <li> <p> <code>SERVICE_ERROR</code> – A
     * temporary issue is preventing Amazon SES from determining the verification
     * status of the domain.</p> </li> <li> <p> <code>DNS_SERVER_ERROR</code> – The DNS
     * server encountered an issue and was unable to complete the request.</p> </li>
     * <li> <p> <code>REPLICATION_ACCESS_DENIED</code> – The verification failed
     * because the user does not have the required permissions to replicate the DKIM
     * key from the primary region. Ensure you have the necessary permissions in both
     * primary and replica regions. </p> </li> <li> <p>
     * <code>REPLICATION_PRIMARY_NOT_FOUND</code> – The verification failed because no
     * corresponding identity was found in the specified primary region. Ensure the
     * identity exists in the primary region before attempting replication. </p> </li>
     * <li> <p> <code>REPLICATION_PRIMARY_BYO_DKIM_NOT_SUPPORTED</code> – The
     * verification failed because the identity in the primary region is configured
     * with Bring Your Own DKIM (BYODKIM). DKIM key replication is only supported for
     * identities using Easy DKIM. </p> </li> <li> <p>
     * <code>REPLICATION_REPLICA_AS_PRIMARY_NOT_SUPPORTED</code> – The verification
     * failed because the specified primary identity is a replica of another identity,
     * and multi-level replication is not supported; the primary identity must be a
     * non-replica identity. </p> </li> <li> <p>
     * <code>REPLICATION_PRIMARY_INVALID_REGION</code> – The verification failed due to
     * an invalid primary region specified. Ensure you provide a valid Amazon Web
     * Services region where Amazon SES is available and different from the replica
     * region. </p> </li> </ul>
     */
    inline VerificationError GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(VerificationError value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline VerificationInfo& WithErrorType(VerificationError value) { SetErrorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the start of authority (SOA) record
     * associated with the identity.</p>
     */
    inline const SOARecord& GetSOARecord() const { return m_sOARecord; }
    inline bool SOARecordHasBeenSet() const { return m_sOARecordHasBeenSet; }
    template<typename SOARecordT = SOARecord>
    void SetSOARecord(SOARecordT&& value) { m_sOARecordHasBeenSet = true; m_sOARecord = std::forward<SOARecordT>(value); }
    template<typename SOARecordT = SOARecord>
    VerificationInfo& WithSOARecord(SOARecordT&& value) { SetSOARecord(std::forward<SOARecordT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastCheckedTimestamp{};
    bool m_lastCheckedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessTimestamp{};
    bool m_lastSuccessTimestampHasBeenSet = false;

    VerificationError m_errorType{VerificationError::NOT_SET};
    bool m_errorTypeHasBeenSet = false;

    SOARecord m_sOARecord;
    bool m_sOARecordHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
