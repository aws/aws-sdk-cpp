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
    AWS_TAXSETTINGS_API GetTaxRegistrationResult() = default;
    AWS_TAXSETTINGS_API GetTaxRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>TRN information of the account mentioned in the request. </p>
     */
    inline const TaxRegistration& GetTaxRegistration() const { return m_taxRegistration; }
    template<typename TaxRegistrationT = TaxRegistration>
    void SetTaxRegistration(TaxRegistrationT&& value) { m_taxRegistrationHasBeenSet = true; m_taxRegistration = std::forward<TaxRegistrationT>(value); }
    template<typename TaxRegistrationT = TaxRegistration>
    GetTaxRegistrationResult& WithTaxRegistration(TaxRegistrationT&& value) { SetTaxRegistration(std::forward<TaxRegistrationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTaxRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TaxRegistration m_taxRegistration;
    bool m_taxRegistrationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
