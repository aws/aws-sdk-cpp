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
    AWS_TAXSETTINGS_API BatchGetTaxExemptionsResult();
    AWS_TAXSETTINGS_API BatchGetTaxExemptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API BatchGetTaxExemptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of accounts that failed to get tax exemptions. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFailedAccounts() const{ return m_failedAccounts; }
    inline void SetFailedAccounts(const Aws::Vector<Aws::String>& value) { m_failedAccounts = value; }
    inline void SetFailedAccounts(Aws::Vector<Aws::String>&& value) { m_failedAccounts = std::move(value); }
    inline BatchGetTaxExemptionsResult& WithFailedAccounts(const Aws::Vector<Aws::String>& value) { SetFailedAccounts(value); return *this;}
    inline BatchGetTaxExemptionsResult& WithFailedAccounts(Aws::Vector<Aws::String>&& value) { SetFailedAccounts(std::move(value)); return *this;}
    inline BatchGetTaxExemptionsResult& AddFailedAccounts(const Aws::String& value) { m_failedAccounts.push_back(value); return *this; }
    inline BatchGetTaxExemptionsResult& AddFailedAccounts(Aws::String&& value) { m_failedAccounts.push_back(std::move(value)); return *this; }
    inline BatchGetTaxExemptionsResult& AddFailedAccounts(const char* value) { m_failedAccounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tax exemption details map of accountId and tax exemption details. </p>
     */
    inline const Aws::Map<Aws::String, TaxExemptionDetails>& GetTaxExemptionDetailsMap() const{ return m_taxExemptionDetailsMap; }
    inline void SetTaxExemptionDetailsMap(const Aws::Map<Aws::String, TaxExemptionDetails>& value) { m_taxExemptionDetailsMap = value; }
    inline void SetTaxExemptionDetailsMap(Aws::Map<Aws::String, TaxExemptionDetails>&& value) { m_taxExemptionDetailsMap = std::move(value); }
    inline BatchGetTaxExemptionsResult& WithTaxExemptionDetailsMap(const Aws::Map<Aws::String, TaxExemptionDetails>& value) { SetTaxExemptionDetailsMap(value); return *this;}
    inline BatchGetTaxExemptionsResult& WithTaxExemptionDetailsMap(Aws::Map<Aws::String, TaxExemptionDetails>&& value) { SetTaxExemptionDetailsMap(std::move(value)); return *this;}
    inline BatchGetTaxExemptionsResult& AddTaxExemptionDetailsMap(const Aws::String& key, const TaxExemptionDetails& value) { m_taxExemptionDetailsMap.emplace(key, value); return *this; }
    inline BatchGetTaxExemptionsResult& AddTaxExemptionDetailsMap(Aws::String&& key, const TaxExemptionDetails& value) { m_taxExemptionDetailsMap.emplace(std::move(key), value); return *this; }
    inline BatchGetTaxExemptionsResult& AddTaxExemptionDetailsMap(const Aws::String& key, TaxExemptionDetails&& value) { m_taxExemptionDetailsMap.emplace(key, std::move(value)); return *this; }
    inline BatchGetTaxExemptionsResult& AddTaxExemptionDetailsMap(Aws::String&& key, TaxExemptionDetails&& value) { m_taxExemptionDetailsMap.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchGetTaxExemptionsResult& AddTaxExemptionDetailsMap(const char* key, TaxExemptionDetails&& value) { m_taxExemptionDetailsMap.emplace(key, std::move(value)); return *this; }
    inline BatchGetTaxExemptionsResult& AddTaxExemptionDetailsMap(const char* key, const TaxExemptionDetails& value) { m_taxExemptionDetailsMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetTaxExemptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetTaxExemptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetTaxExemptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_failedAccounts;

    Aws::Map<Aws::String, TaxExemptionDetails> m_taxExemptionDetailsMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
