/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ConfigurationCheckDefinition.h>
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
  class ListConfigurationCheckDefinitionsResult
  {
  public:
    AWS_SSMSAP_API ListConfigurationCheckDefinitionsResult() = default;
    AWS_SSMSAP_API ListConfigurationCheckDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListConfigurationCheckDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration check types supported by AWS Systems Manager for SAP.</p>
     */
    inline const Aws::Vector<ConfigurationCheckDefinition>& GetConfigurationChecks() const { return m_configurationChecks; }
    template<typename ConfigurationChecksT = Aws::Vector<ConfigurationCheckDefinition>>
    void SetConfigurationChecks(ConfigurationChecksT&& value) { m_configurationChecksHasBeenSet = true; m_configurationChecks = std::forward<ConfigurationChecksT>(value); }
    template<typename ConfigurationChecksT = Aws::Vector<ConfigurationCheckDefinition>>
    ListConfigurationCheckDefinitionsResult& WithConfigurationChecks(ConfigurationChecksT&& value) { SetConfigurationChecks(std::forward<ConfigurationChecksT>(value)); return *this;}
    template<typename ConfigurationChecksT = ConfigurationCheckDefinition>
    ListConfigurationCheckDefinitionsResult& AddConfigurationChecks(ConfigurationChecksT&& value) { m_configurationChecksHasBeenSet = true; m_configurationChecks.emplace_back(std::forward<ConfigurationChecksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationCheckDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationCheckDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationCheckDefinition> m_configurationChecks;
    bool m_configurationChecksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
