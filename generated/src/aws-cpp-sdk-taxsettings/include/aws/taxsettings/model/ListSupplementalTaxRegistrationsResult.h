/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/SupplementalTaxRegistration.h>
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
  class ListSupplementalTaxRegistrationsResult
  {
  public:
    AWS_TAXSETTINGS_API ListSupplementalTaxRegistrationsResult() = default;
    AWS_TAXSETTINGS_API ListSupplementalTaxRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API ListSupplementalTaxRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSupplementalTaxRegistrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of supplemental tax registrations. </p>
     */
    inline const Aws::Vector<SupplementalTaxRegistration>& GetTaxRegistrations() const { return m_taxRegistrations; }
    template<typename TaxRegistrationsT = Aws::Vector<SupplementalTaxRegistration>>
    void SetTaxRegistrations(TaxRegistrationsT&& value) { m_taxRegistrationsHasBeenSet = true; m_taxRegistrations = std::forward<TaxRegistrationsT>(value); }
    template<typename TaxRegistrationsT = Aws::Vector<SupplementalTaxRegistration>>
    ListSupplementalTaxRegistrationsResult& WithTaxRegistrations(TaxRegistrationsT&& value) { SetTaxRegistrations(std::forward<TaxRegistrationsT>(value)); return *this;}
    template<typename TaxRegistrationsT = SupplementalTaxRegistration>
    ListSupplementalTaxRegistrationsResult& AddTaxRegistrations(TaxRegistrationsT&& value) { m_taxRegistrationsHasBeenSet = true; m_taxRegistrations.emplace_back(std::forward<TaxRegistrationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSupplementalTaxRegistrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SupplementalTaxRegistration> m_taxRegistrations;
    bool m_taxRegistrationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
