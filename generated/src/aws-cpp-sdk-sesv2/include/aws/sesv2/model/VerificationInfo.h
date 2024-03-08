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
    AWS_SESV2_API VerificationInfo();
    AWS_SESV2_API VerificationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API VerificationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The last time a verification attempt was made for this identity.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckedTimestamp() const{ return m_lastCheckedTimestamp; }

    /**
     * <p>The last time a verification attempt was made for this identity.</p>
     */
    inline bool LastCheckedTimestampHasBeenSet() const { return m_lastCheckedTimestampHasBeenSet; }

    /**
     * <p>The last time a verification attempt was made for this identity.</p>
     */
    inline void SetLastCheckedTimestamp(const Aws::Utils::DateTime& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = value; }

    /**
     * <p>The last time a verification attempt was made for this identity.</p>
     */
    inline void SetLastCheckedTimestamp(Aws::Utils::DateTime&& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = std::move(value); }

    /**
     * <p>The last time a verification attempt was made for this identity.</p>
     */
    inline VerificationInfo& WithLastCheckedTimestamp(const Aws::Utils::DateTime& value) { SetLastCheckedTimestamp(value); return *this;}

    /**
     * <p>The last time a verification attempt was made for this identity.</p>
     */
    inline VerificationInfo& WithLastCheckedTimestamp(Aws::Utils::DateTime&& value) { SetLastCheckedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The last time a successful verification was made for this identity.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessTimestamp() const{ return m_lastSuccessTimestamp; }

    /**
     * <p>The last time a successful verification was made for this identity.</p>
     */
    inline bool LastSuccessTimestampHasBeenSet() const { return m_lastSuccessTimestampHasBeenSet; }

    /**
     * <p>The last time a successful verification was made for this identity.</p>
     */
    inline void SetLastSuccessTimestamp(const Aws::Utils::DateTime& value) { m_lastSuccessTimestampHasBeenSet = true; m_lastSuccessTimestamp = value; }

    /**
     * <p>The last time a successful verification was made for this identity.</p>
     */
    inline void SetLastSuccessTimestamp(Aws::Utils::DateTime&& value) { m_lastSuccessTimestampHasBeenSet = true; m_lastSuccessTimestamp = std::move(value); }

    /**
     * <p>The last time a successful verification was made for this identity.</p>
     */
    inline VerificationInfo& WithLastSuccessTimestamp(const Aws::Utils::DateTime& value) { SetLastSuccessTimestamp(value); return *this;}

    /**
     * <p>The last time a successful verification was made for this identity.</p>
     */
    inline VerificationInfo& WithLastSuccessTimestamp(Aws::Utils::DateTime&& value) { SetLastSuccessTimestamp(std::move(value)); return *this;}


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
     * </ul>
     */
    inline const VerificationError& GetErrorType() const{ return m_errorType; }

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
     * </ul>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

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
     * </ul>
     */
    inline void SetErrorType(const VerificationError& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

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
     * </ul>
     */
    inline void SetErrorType(VerificationError&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

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
     * </ul>
     */
    inline VerificationInfo& WithErrorType(const VerificationError& value) { SetErrorType(value); return *this;}

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
     * </ul>
     */
    inline VerificationInfo& WithErrorType(VerificationError&& value) { SetErrorType(std::move(value)); return *this;}


    /**
     * <p>An object that contains information about the start of authority (SOA) record
     * associated with the identity.</p>
     */
    inline const SOARecord& GetSOARecord() const{ return m_sOARecord; }

    /**
     * <p>An object that contains information about the start of authority (SOA) record
     * associated with the identity.</p>
     */
    inline bool SOARecordHasBeenSet() const { return m_sOARecordHasBeenSet; }

    /**
     * <p>An object that contains information about the start of authority (SOA) record
     * associated with the identity.</p>
     */
    inline void SetSOARecord(const SOARecord& value) { m_sOARecordHasBeenSet = true; m_sOARecord = value; }

    /**
     * <p>An object that contains information about the start of authority (SOA) record
     * associated with the identity.</p>
     */
    inline void SetSOARecord(SOARecord&& value) { m_sOARecordHasBeenSet = true; m_sOARecord = std::move(value); }

    /**
     * <p>An object that contains information about the start of authority (SOA) record
     * associated with the identity.</p>
     */
    inline VerificationInfo& WithSOARecord(const SOARecord& value) { SetSOARecord(value); return *this;}

    /**
     * <p>An object that contains information about the start of authority (SOA) record
     * associated with the identity.</p>
     */
    inline VerificationInfo& WithSOARecord(SOARecord&& value) { SetSOARecord(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_lastCheckedTimestamp;
    bool m_lastCheckedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessTimestamp;
    bool m_lastSuccessTimestampHasBeenSet = false;

    VerificationError m_errorType;
    bool m_errorTypeHasBeenSet = false;

    SOARecord m_sOARecord;
    bool m_sOARecordHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
