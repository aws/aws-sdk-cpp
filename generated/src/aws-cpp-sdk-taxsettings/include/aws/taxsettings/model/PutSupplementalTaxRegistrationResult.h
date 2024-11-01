/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/TaxRegistrationStatus.h>
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
namespace TaxSettings
{
namespace Model
{
  class PutSupplementalTaxRegistrationResult
  {
  public:
    AWS_TAXSETTINGS_API PutSupplementalTaxRegistrationResult();
    AWS_TAXSETTINGS_API PutSupplementalTaxRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API PutSupplementalTaxRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Unique authority ID for the supplemental TRN information that was stored.
     * </p>
     */
    inline const Aws::String& GetAuthorityId() const{ return m_authorityId; }
    inline void SetAuthorityId(const Aws::String& value) { m_authorityId = value; }
    inline void SetAuthorityId(Aws::String&& value) { m_authorityId = std::move(value); }
    inline void SetAuthorityId(const char* value) { m_authorityId.assign(value); }
    inline PutSupplementalTaxRegistrationResult& WithAuthorityId(const Aws::String& value) { SetAuthorityId(value); return *this;}
    inline PutSupplementalTaxRegistrationResult& WithAuthorityId(Aws::String&& value) { SetAuthorityId(std::move(value)); return *this;}
    inline PutSupplementalTaxRegistrationResult& WithAuthorityId(const char* value) { SetAuthorityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the supplemental TRN stored in the system after processing.
     * Based on the validation occurring on the TRN, the status can be
     * <code>Verified</code>, <code>Pending</code>, <code>Rejected</code>, or
     * <code>Deleted</code>. </p>
     */
    inline const TaxRegistrationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaxRegistrationStatus& value) { m_status = value; }
    inline void SetStatus(TaxRegistrationStatus&& value) { m_status = std::move(value); }
    inline PutSupplementalTaxRegistrationResult& WithStatus(const TaxRegistrationStatus& value) { SetStatus(value); return *this;}
    inline PutSupplementalTaxRegistrationResult& WithStatus(TaxRegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSupplementalTaxRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSupplementalTaxRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSupplementalTaxRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_authorityId;

    TaxRegistrationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
