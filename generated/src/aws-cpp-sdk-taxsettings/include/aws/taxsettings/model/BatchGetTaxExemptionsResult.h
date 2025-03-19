/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/TaxExemptionDetails.h>
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
  class BatchGetTaxExemptionsResult
  {
  public:
    AWS_TAXSETTINGS_API BatchGetTaxExemptionsResult() = default;
    AWS_TAXSETTINGS_API BatchGetTaxExemptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API BatchGetTaxExemptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of accounts that failed to get tax exemptions. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFailedAccounts() const { return m_failedAccounts; }
    template<typename FailedAccountsT = Aws::Vector<Aws::String>>
    void SetFailedAccounts(FailedAccountsT&& value) { m_failedAccountsHasBeenSet = true; m_failedAccounts = std::forward<FailedAccountsT>(value); }
    template<typename FailedAccountsT = Aws::Vector<Aws::String>>
    BatchGetTaxExemptionsResult& WithFailedAccounts(FailedAccountsT&& value) { SetFailedAccounts(std::forward<FailedAccountsT>(value)); return *this;}
    template<typename FailedAccountsT = Aws::String>
    BatchGetTaxExemptionsResult& AddFailedAccounts(FailedAccountsT&& value) { m_failedAccountsHasBeenSet = true; m_failedAccounts.emplace_back(std::forward<FailedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tax exemption details map of accountId and tax exemption details. </p>
     */
    inline const Aws::Map<Aws::String, TaxExemptionDetails>& GetTaxExemptionDetailsMap() const { return m_taxExemptionDetailsMap; }
    template<typename TaxExemptionDetailsMapT = Aws::Map<Aws::String, TaxExemptionDetails>>
    void SetTaxExemptionDetailsMap(TaxExemptionDetailsMapT&& value) { m_taxExemptionDetailsMapHasBeenSet = true; m_taxExemptionDetailsMap = std::forward<TaxExemptionDetailsMapT>(value); }
    template<typename TaxExemptionDetailsMapT = Aws::Map<Aws::String, TaxExemptionDetails>>
    BatchGetTaxExemptionsResult& WithTaxExemptionDetailsMap(TaxExemptionDetailsMapT&& value) { SetTaxExemptionDetailsMap(std::forward<TaxExemptionDetailsMapT>(value)); return *this;}
    template<typename TaxExemptionDetailsMapKeyT = Aws::String, typename TaxExemptionDetailsMapValueT = TaxExemptionDetails>
    BatchGetTaxExemptionsResult& AddTaxExemptionDetailsMap(TaxExemptionDetailsMapKeyT&& key, TaxExemptionDetailsMapValueT&& value) {
      m_taxExemptionDetailsMapHasBeenSet = true; m_taxExemptionDetailsMap.emplace(std::forward<TaxExemptionDetailsMapKeyT>(key), std::forward<TaxExemptionDetailsMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetTaxExemptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_failedAccounts;
    bool m_failedAccountsHasBeenSet = false;

    Aws::Map<Aws::String, TaxExemptionDetails> m_taxExemptionDetailsMap;
    bool m_taxExemptionDetailsMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
