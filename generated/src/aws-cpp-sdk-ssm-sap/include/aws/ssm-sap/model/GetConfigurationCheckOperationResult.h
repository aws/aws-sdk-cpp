/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/ConfigurationCheckOperation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SsmSap
{
namespace Model
{
  class GetConfigurationCheckOperationResult
  {
  public:
    AWS_SSMSAP_API GetConfigurationCheckOperationResult() = default;
    AWS_SSMSAP_API GetConfigurationCheckOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API GetConfigurationCheckOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the details of a configuration check operation.</p>
     */
    inline const ConfigurationCheckOperation& GetConfigurationCheckOperation() const { return m_configurationCheckOperation; }
    template<typename ConfigurationCheckOperationT = ConfigurationCheckOperation>
    void SetConfigurationCheckOperation(ConfigurationCheckOperationT&& value) { m_configurationCheckOperationHasBeenSet = true; m_configurationCheckOperation = std::forward<ConfigurationCheckOperationT>(value); }
    template<typename ConfigurationCheckOperationT = ConfigurationCheckOperation>
    GetConfigurationCheckOperationResult& WithConfigurationCheckOperation(ConfigurationCheckOperationT&& value) { SetConfigurationCheckOperation(std::forward<ConfigurationCheckOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfigurationCheckOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfigurationCheckOperation m_configurationCheckOperation;
    bool m_configurationCheckOperationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
