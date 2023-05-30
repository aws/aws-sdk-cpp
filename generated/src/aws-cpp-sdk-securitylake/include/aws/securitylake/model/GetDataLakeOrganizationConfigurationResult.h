/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/DataLakeAutoEnableNewAccountConfiguration.h>
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
namespace SecurityLake
{
namespace Model
{
  class GetDataLakeOrganizationConfigurationResult
  {
  public:
    AWS_SECURITYLAKE_API GetDataLakeOrganizationConfigurationResult();
    AWS_SECURITYLAKE_API GetDataLakeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDataLakeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration for new accounts.</p>
     */
    inline const Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>& GetAutoEnableNewAccount() const{ return m_autoEnableNewAccount; }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline void SetAutoEnableNewAccount(const Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>& value) { m_autoEnableNewAccount = value; }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline void SetAutoEnableNewAccount(Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>&& value) { m_autoEnableNewAccount = std::move(value); }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDataLakeOrganizationConfigurationResult& WithAutoEnableNewAccount(const Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>& value) { SetAutoEnableNewAccount(value); return *this;}

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDataLakeOrganizationConfigurationResult& WithAutoEnableNewAccount(Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>&& value) { SetAutoEnableNewAccount(std::move(value)); return *this;}

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDataLakeOrganizationConfigurationResult& AddAutoEnableNewAccount(const DataLakeAutoEnableNewAccountConfiguration& value) { m_autoEnableNewAccount.push_back(value); return *this; }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDataLakeOrganizationConfigurationResult& AddAutoEnableNewAccount(DataLakeAutoEnableNewAccountConfiguration&& value) { m_autoEnableNewAccount.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataLakeOrganizationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataLakeOrganizationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataLakeOrganizationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataLakeAutoEnableNewAccountConfiguration> m_autoEnableNewAccount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
