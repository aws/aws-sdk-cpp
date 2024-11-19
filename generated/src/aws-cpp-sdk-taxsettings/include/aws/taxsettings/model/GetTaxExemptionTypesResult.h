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
    AWS_TAXSETTINGS_API GetTaxExemptionTypesResult();
    AWS_TAXSETTINGS_API GetTaxExemptionTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxExemptionTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The supported types of tax exemptions. </p>
     */
    inline const Aws::Vector<TaxExemptionType>& GetTaxExemptionTypes() const{ return m_taxExemptionTypes; }
    inline void SetTaxExemptionTypes(const Aws::Vector<TaxExemptionType>& value) { m_taxExemptionTypes = value; }
    inline void SetTaxExemptionTypes(Aws::Vector<TaxExemptionType>&& value) { m_taxExemptionTypes = std::move(value); }
    inline GetTaxExemptionTypesResult& WithTaxExemptionTypes(const Aws::Vector<TaxExemptionType>& value) { SetTaxExemptionTypes(value); return *this;}
    inline GetTaxExemptionTypesResult& WithTaxExemptionTypes(Aws::Vector<TaxExemptionType>&& value) { SetTaxExemptionTypes(std::move(value)); return *this;}
    inline GetTaxExemptionTypesResult& AddTaxExemptionTypes(const TaxExemptionType& value) { m_taxExemptionTypes.push_back(value); return *this; }
    inline GetTaxExemptionTypesResult& AddTaxExemptionTypes(TaxExemptionType&& value) { m_taxExemptionTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTaxExemptionTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTaxExemptionTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTaxExemptionTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TaxExemptionType> m_taxExemptionTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
