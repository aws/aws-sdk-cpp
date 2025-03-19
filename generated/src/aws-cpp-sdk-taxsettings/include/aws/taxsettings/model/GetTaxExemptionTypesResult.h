/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/TaxExemptionType.h>
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
  class GetTaxExemptionTypesResult
  {
  public:
    AWS_TAXSETTINGS_API GetTaxExemptionTypesResult() = default;
    AWS_TAXSETTINGS_API GetTaxExemptionTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxExemptionTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The supported types of tax exemptions. </p>
     */
    inline const Aws::Vector<TaxExemptionType>& GetTaxExemptionTypes() const { return m_taxExemptionTypes; }
    template<typename TaxExemptionTypesT = Aws::Vector<TaxExemptionType>>
    void SetTaxExemptionTypes(TaxExemptionTypesT&& value) { m_taxExemptionTypesHasBeenSet = true; m_taxExemptionTypes = std::forward<TaxExemptionTypesT>(value); }
    template<typename TaxExemptionTypesT = Aws::Vector<TaxExemptionType>>
    GetTaxExemptionTypesResult& WithTaxExemptionTypes(TaxExemptionTypesT&& value) { SetTaxExemptionTypes(std::forward<TaxExemptionTypesT>(value)); return *this;}
    template<typename TaxExemptionTypesT = TaxExemptionType>
    GetTaxExemptionTypesResult& AddTaxExemptionTypes(TaxExemptionTypesT&& value) { m_taxExemptionTypesHasBeenSet = true; m_taxExemptionTypes.emplace_back(std::forward<TaxExemptionTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTaxExemptionTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TaxExemptionType> m_taxExemptionTypes;
    bool m_taxExemptionTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
