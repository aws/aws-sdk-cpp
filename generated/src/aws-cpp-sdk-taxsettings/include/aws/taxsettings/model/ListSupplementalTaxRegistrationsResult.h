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
    AWS_TAXSETTINGS_API ListSupplementalTaxRegistrationsResult();
    AWS_TAXSETTINGS_API ListSupplementalTaxRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API ListSupplementalTaxRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSupplementalTaxRegistrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSupplementalTaxRegistrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSupplementalTaxRegistrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of supplemental tax registrations. </p>
     */
    inline const Aws::Vector<SupplementalTaxRegistration>& GetTaxRegistrations() const{ return m_taxRegistrations; }
    inline void SetTaxRegistrations(const Aws::Vector<SupplementalTaxRegistration>& value) { m_taxRegistrations = value; }
    inline void SetTaxRegistrations(Aws::Vector<SupplementalTaxRegistration>&& value) { m_taxRegistrations = std::move(value); }
    inline ListSupplementalTaxRegistrationsResult& WithTaxRegistrations(const Aws::Vector<SupplementalTaxRegistration>& value) { SetTaxRegistrations(value); return *this;}
    inline ListSupplementalTaxRegistrationsResult& WithTaxRegistrations(Aws::Vector<SupplementalTaxRegistration>&& value) { SetTaxRegistrations(std::move(value)); return *this;}
    inline ListSupplementalTaxRegistrationsResult& AddTaxRegistrations(const SupplementalTaxRegistration& value) { m_taxRegistrations.push_back(value); return *this; }
    inline ListSupplementalTaxRegistrationsResult& AddTaxRegistrations(SupplementalTaxRegistration&& value) { m_taxRegistrations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSupplementalTaxRegistrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSupplementalTaxRegistrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSupplementalTaxRegistrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SupplementalTaxRegistration> m_taxRegistrations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
