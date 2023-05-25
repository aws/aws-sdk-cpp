/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/AutoEnableNewRegionConfiguration.h>
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
  class GetDatalakeAutoEnableResult
  {
  public:
    AWS_SECURITYLAKE_API GetDatalakeAutoEnableResult();
    AWS_SECURITYLAKE_API GetDatalakeAutoEnableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDatalakeAutoEnableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration for new accounts.</p>
     */
    inline const Aws::Vector<AutoEnableNewRegionConfiguration>& GetAutoEnableNewAccounts() const{ return m_autoEnableNewAccounts; }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline void SetAutoEnableNewAccounts(const Aws::Vector<AutoEnableNewRegionConfiguration>& value) { m_autoEnableNewAccounts = value; }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline void SetAutoEnableNewAccounts(Aws::Vector<AutoEnableNewRegionConfiguration>&& value) { m_autoEnableNewAccounts = std::move(value); }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDatalakeAutoEnableResult& WithAutoEnableNewAccounts(const Aws::Vector<AutoEnableNewRegionConfiguration>& value) { SetAutoEnableNewAccounts(value); return *this;}

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDatalakeAutoEnableResult& WithAutoEnableNewAccounts(Aws::Vector<AutoEnableNewRegionConfiguration>&& value) { SetAutoEnableNewAccounts(std::move(value)); return *this;}

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDatalakeAutoEnableResult& AddAutoEnableNewAccounts(const AutoEnableNewRegionConfiguration& value) { m_autoEnableNewAccounts.push_back(value); return *this; }

    /**
     * <p>The configuration for new accounts.</p>
     */
    inline GetDatalakeAutoEnableResult& AddAutoEnableNewAccounts(AutoEnableNewRegionConfiguration&& value) { m_autoEnableNewAccounts.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDatalakeAutoEnableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDatalakeAutoEnableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDatalakeAutoEnableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AutoEnableNewRegionConfiguration> m_autoEnableNewAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
