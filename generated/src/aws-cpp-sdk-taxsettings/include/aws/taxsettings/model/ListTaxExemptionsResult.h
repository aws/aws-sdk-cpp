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
    AWS_TAXSETTINGS_API ListTaxExemptionsResult();
    AWS_TAXSETTINGS_API ListTaxExemptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API ListTaxExemptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTaxExemptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTaxExemptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTaxExemptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption details map of <code>accountId</code> and tax exemption
     * details. </p>
     */
    inline const Aws::Map<Aws::String, TaxExemptionDetails>& GetTaxExemptionDetailsMap() const{ return m_taxExemptionDetailsMap; }
    inline void SetTaxExemptionDetailsMap(const Aws::Map<Aws::String, TaxExemptionDetails>& value) { m_taxExemptionDetailsMap = value; }
    inline void SetTaxExemptionDetailsMap(Aws::Map<Aws::String, TaxExemptionDetails>&& value) { m_taxExemptionDetailsMap = std::move(value); }
    inline ListTaxExemptionsResult& WithTaxExemptionDetailsMap(const Aws::Map<Aws::String, TaxExemptionDetails>& value) { SetTaxExemptionDetailsMap(value); return *this;}
    inline ListTaxExemptionsResult& WithTaxExemptionDetailsMap(Aws::Map<Aws::String, TaxExemptionDetails>&& value) { SetTaxExemptionDetailsMap(std::move(value)); return *this;}
    inline ListTaxExemptionsResult& AddTaxExemptionDetailsMap(const Aws::String& key, const TaxExemptionDetails& value) { m_taxExemptionDetailsMap.emplace(key, value); return *this; }
    inline ListTaxExemptionsResult& AddTaxExemptionDetailsMap(Aws::String&& key, const TaxExemptionDetails& value) { m_taxExemptionDetailsMap.emplace(std::move(key), value); return *this; }
    inline ListTaxExemptionsResult& AddTaxExemptionDetailsMap(const Aws::String& key, TaxExemptionDetails&& value) { m_taxExemptionDetailsMap.emplace(key, std::move(value)); return *this; }
    inline ListTaxExemptionsResult& AddTaxExemptionDetailsMap(Aws::String&& key, TaxExemptionDetails&& value) { m_taxExemptionDetailsMap.emplace(std::move(key), std::move(value)); return *this; }
    inline ListTaxExemptionsResult& AddTaxExemptionDetailsMap(const char* key, TaxExemptionDetails&& value) { m_taxExemptionDetailsMap.emplace(key, std::move(value)); return *this; }
    inline ListTaxExemptionsResult& AddTaxExemptionDetailsMap(const char* key, const TaxExemptionDetails& value) { m_taxExemptionDetailsMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTaxExemptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTaxExemptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTaxExemptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Map<Aws::String, TaxExemptionDetails> m_taxExemptionDetailsMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
