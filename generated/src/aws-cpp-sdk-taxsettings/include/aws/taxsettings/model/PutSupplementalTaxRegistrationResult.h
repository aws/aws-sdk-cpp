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
    AWS_TAXSETTINGS_API PutSupplementalTaxRegistrationResult() = default;
    AWS_TAXSETTINGS_API PutSupplementalTaxRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API PutSupplementalTaxRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Unique authority ID for the supplemental TRN information that was stored.
     * </p>
     */
    inline const Aws::String& GetAuthorityId() const { return m_authorityId; }
    template<typename AuthorityIdT = Aws::String>
    void SetAuthorityId(AuthorityIdT&& value) { m_authorityIdHasBeenSet = true; m_authorityId = std::forward<AuthorityIdT>(value); }
    template<typename AuthorityIdT = Aws::String>
    PutSupplementalTaxRegistrationResult& WithAuthorityId(AuthorityIdT&& value) { SetAuthorityId(std::forward<AuthorityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the supplemental TRN stored in the system after processing.
     * Based on the validation occurring on the TRN, the status can be
     * <code>Verified</code>, <code>Pending</code>, <code>Rejected</code>, or
     * <code>Deleted</code>. </p>
     */
    inline TaxRegistrationStatus GetStatus() const { return m_status; }
    inline void SetStatus(TaxRegistrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PutSupplementalTaxRegistrationResult& WithStatus(TaxRegistrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSupplementalTaxRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorityId;
    bool m_authorityIdHasBeenSet = false;

    TaxRegistrationStatus m_status{TaxRegistrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
