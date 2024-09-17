/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/AccountDetails.h>
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
  class ListTaxRegistrationsResult
  {
  public:
    AWS_TAXSETTINGS_API ListTaxRegistrationsResult();
    AWS_TAXSETTINGS_API ListTaxRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API ListTaxRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of account details. This contains account Ids and TRN Information
     * for each of the linked accounts. </p>
     */
    inline const Aws::Vector<AccountDetails>& GetAccountDetails() const{ return m_accountDetails; }
    inline void SetAccountDetails(const Aws::Vector<AccountDetails>& value) { m_accountDetails = value; }
    inline void SetAccountDetails(Aws::Vector<AccountDetails>&& value) { m_accountDetails = std::move(value); }
    inline ListTaxRegistrationsResult& WithAccountDetails(const Aws::Vector<AccountDetails>& value) { SetAccountDetails(value); return *this;}
    inline ListTaxRegistrationsResult& WithAccountDetails(Aws::Vector<AccountDetails>&& value) { SetAccountDetails(std::move(value)); return *this;}
    inline ListTaxRegistrationsResult& AddAccountDetails(const AccountDetails& value) { m_accountDetails.push_back(value); return *this; }
    inline ListTaxRegistrationsResult& AddAccountDetails(AccountDetails&& value) { m_accountDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTaxRegistrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTaxRegistrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTaxRegistrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTaxRegistrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTaxRegistrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTaxRegistrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountDetails> m_accountDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
