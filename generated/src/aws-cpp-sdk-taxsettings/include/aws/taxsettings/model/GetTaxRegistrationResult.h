/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/TaxRegistration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetTaxRegistrationResult
  {
  public:
    AWS_TAXSETTINGS_API GetTaxRegistrationResult();
    AWS_TAXSETTINGS_API GetTaxRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>TRN information of the account mentioned in the request. </p>
     */
    inline const TaxRegistration& GetTaxRegistration() const{ return m_taxRegistration; }
    inline void SetTaxRegistration(const TaxRegistration& value) { m_taxRegistration = value; }
    inline void SetTaxRegistration(TaxRegistration&& value) { m_taxRegistration = std::move(value); }
    inline GetTaxRegistrationResult& WithTaxRegistration(const TaxRegistration& value) { SetTaxRegistration(value); return *this;}
    inline GetTaxRegistrationResult& WithTaxRegistration(TaxRegistration&& value) { SetTaxRegistration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTaxRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTaxRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTaxRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TaxRegistration m_taxRegistration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
