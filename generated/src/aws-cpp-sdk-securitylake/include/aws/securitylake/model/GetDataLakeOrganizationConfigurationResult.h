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
    AWS_SECURITYLAKE_API GetDataLakeOrganizationConfigurationResult() = default;
    AWS_SECURITYLAKE_API GetDataLakeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDataLakeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration used for new accounts in Security Lake.</p>
     */
    inline const Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>& GetAutoEnableNewAccount() const { return m_autoEnableNewAccount; }
    template<typename AutoEnableNewAccountT = Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>>
    void SetAutoEnableNewAccount(AutoEnableNewAccountT&& value) { m_autoEnableNewAccountHasBeenSet = true; m_autoEnableNewAccount = std::forward<AutoEnableNewAccountT>(value); }
    template<typename AutoEnableNewAccountT = Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>>
    GetDataLakeOrganizationConfigurationResult& WithAutoEnableNewAccount(AutoEnableNewAccountT&& value) { SetAutoEnableNewAccount(std::forward<AutoEnableNewAccountT>(value)); return *this;}
    template<typename AutoEnableNewAccountT = DataLakeAutoEnableNewAccountConfiguration>
    GetDataLakeOrganizationConfigurationResult& AddAutoEnableNewAccount(AutoEnableNewAccountT&& value) { m_autoEnableNewAccountHasBeenSet = true; m_autoEnableNewAccount.emplace_back(std::forward<AutoEnableNewAccountT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataLakeOrganizationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataLakeAutoEnableNewAccountConfiguration> m_autoEnableNewAccount;
    bool m_autoEnableNewAccountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
