/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ListTaxExemptionsResult
  {
  public:
    AWS_TAXSETTINGS_API ListTaxExemptionsResult() = default;
    AWS_TAXSETTINGS_API ListTaxExemptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API ListTaxExemptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTaxExemptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption details map of <code>accountId</code> and tax exemption
     * details. </p>
     */
    inline const Aws::Map<Aws::String, TaxExemptionDetails>& GetTaxExemptionDetailsMap() const { return m_taxExemptionDetailsMap; }
    template<typename TaxExemptionDetailsMapT = Aws::Map<Aws::String, TaxExemptionDetails>>
    void SetTaxExemptionDetailsMap(TaxExemptionDetailsMapT&& value) { m_taxExemptionDetailsMapHasBeenSet = true; m_taxExemptionDetailsMap = std::forward<TaxExemptionDetailsMapT>(value); }
    template<typename TaxExemptionDetailsMapT = Aws::Map<Aws::String, TaxExemptionDetails>>
    ListTaxExemptionsResult& WithTaxExemptionDetailsMap(TaxExemptionDetailsMapT&& value) { SetTaxExemptionDetailsMap(std::forward<TaxExemptionDetailsMapT>(value)); return *this;}
    template<typename TaxExemptionDetailsMapKeyT = Aws::String, typename TaxExemptionDetailsMapValueT = TaxExemptionDetails>
    ListTaxExemptionsResult& AddTaxExemptionDetailsMap(TaxExemptionDetailsMapKeyT&& key, TaxExemptionDetailsMapValueT&& value) {
      m_taxExemptionDetailsMapHasBeenSet = true; m_taxExemptionDetailsMap.emplace(std::forward<TaxExemptionDetailsMapKeyT>(key), std::forward<TaxExemptionDetailsMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTaxExemptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Map<Aws::String, TaxExemptionDetails> m_taxExemptionDetailsMap;
    bool m_taxExemptionDetailsMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
