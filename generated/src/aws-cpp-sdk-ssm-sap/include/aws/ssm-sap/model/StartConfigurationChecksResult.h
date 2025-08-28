/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ConfigurationCheckOperation.h>
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
  class StartConfigurationChecksResult
  {
  public:
    AWS_SSMSAP_API StartConfigurationChecksResult() = default;
    AWS_SSMSAP_API StartConfigurationChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API StartConfigurationChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration check operations that were started.</p>
     */
    inline const Aws::Vector<ConfigurationCheckOperation>& GetConfigurationCheckOperations() const { return m_configurationCheckOperations; }
    template<typename ConfigurationCheckOperationsT = Aws::Vector<ConfigurationCheckOperation>>
    void SetConfigurationCheckOperations(ConfigurationCheckOperationsT&& value) { m_configurationCheckOperationsHasBeenSet = true; m_configurationCheckOperations = std::forward<ConfigurationCheckOperationsT>(value); }
    template<typename ConfigurationCheckOperationsT = Aws::Vector<ConfigurationCheckOperation>>
    StartConfigurationChecksResult& WithConfigurationCheckOperations(ConfigurationCheckOperationsT&& value) { SetConfigurationCheckOperations(std::forward<ConfigurationCheckOperationsT>(value)); return *this;}
    template<typename ConfigurationCheckOperationsT = ConfigurationCheckOperation>
    StartConfigurationChecksResult& AddConfigurationCheckOperations(ConfigurationCheckOperationsT&& value) { m_configurationCheckOperationsHasBeenSet = true; m_configurationCheckOperations.emplace_back(std::forward<ConfigurationCheckOperationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartConfigurationChecksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationCheckOperation> m_configurationCheckOperations;
    bool m_configurationCheckOperationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
