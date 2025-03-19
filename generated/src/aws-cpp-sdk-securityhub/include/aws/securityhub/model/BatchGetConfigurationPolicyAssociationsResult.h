/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConfigurationPolicyAssociationSummary.h>
#include <aws/securityhub/model/UnprocessedConfigurationPolicyAssociation.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchGetConfigurationPolicyAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API BatchGetConfigurationPolicyAssociationsResult() = default;
    AWS_SECURITYHUB_API BatchGetConfigurationPolicyAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetConfigurationPolicyAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline const Aws::Vector<ConfigurationPolicyAssociationSummary>& GetConfigurationPolicyAssociations() const { return m_configurationPolicyAssociations; }
    template<typename ConfigurationPolicyAssociationsT = Aws::Vector<ConfigurationPolicyAssociationSummary>>
    void SetConfigurationPolicyAssociations(ConfigurationPolicyAssociationsT&& value) { m_configurationPolicyAssociationsHasBeenSet = true; m_configurationPolicyAssociations = std::forward<ConfigurationPolicyAssociationsT>(value); }
    template<typename ConfigurationPolicyAssociationsT = Aws::Vector<ConfigurationPolicyAssociationSummary>>
    BatchGetConfigurationPolicyAssociationsResult& WithConfigurationPolicyAssociations(ConfigurationPolicyAssociationsT&& value) { SetConfigurationPolicyAssociations(std::forward<ConfigurationPolicyAssociationsT>(value)); return *this;}
    template<typename ConfigurationPolicyAssociationsT = ConfigurationPolicyAssociationSummary>
    BatchGetConfigurationPolicyAssociationsResult& AddConfigurationPolicyAssociations(ConfigurationPolicyAssociationsT&& value) { m_configurationPolicyAssociationsHasBeenSet = true; m_configurationPolicyAssociations.emplace_back(std::forward<ConfigurationPolicyAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline const Aws::Vector<UnprocessedConfigurationPolicyAssociation>& GetUnprocessedConfigurationPolicyAssociations() const { return m_unprocessedConfigurationPolicyAssociations; }
    template<typename UnprocessedConfigurationPolicyAssociationsT = Aws::Vector<UnprocessedConfigurationPolicyAssociation>>
    void SetUnprocessedConfigurationPolicyAssociations(UnprocessedConfigurationPolicyAssociationsT&& value) { m_unprocessedConfigurationPolicyAssociationsHasBeenSet = true; m_unprocessedConfigurationPolicyAssociations = std::forward<UnprocessedConfigurationPolicyAssociationsT>(value); }
    template<typename UnprocessedConfigurationPolicyAssociationsT = Aws::Vector<UnprocessedConfigurationPolicyAssociation>>
    BatchGetConfigurationPolicyAssociationsResult& WithUnprocessedConfigurationPolicyAssociations(UnprocessedConfigurationPolicyAssociationsT&& value) { SetUnprocessedConfigurationPolicyAssociations(std::forward<UnprocessedConfigurationPolicyAssociationsT>(value)); return *this;}
    template<typename UnprocessedConfigurationPolicyAssociationsT = UnprocessedConfigurationPolicyAssociation>
    BatchGetConfigurationPolicyAssociationsResult& AddUnprocessedConfigurationPolicyAssociations(UnprocessedConfigurationPolicyAssociationsT&& value) { m_unprocessedConfigurationPolicyAssociationsHasBeenSet = true; m_unprocessedConfigurationPolicyAssociations.emplace_back(std::forward<UnprocessedConfigurationPolicyAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetConfigurationPolicyAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationPolicyAssociationSummary> m_configurationPolicyAssociations;
    bool m_configurationPolicyAssociationsHasBeenSet = false;

    Aws::Vector<UnprocessedConfigurationPolicyAssociation> m_unprocessedConfigurationPolicyAssociations;
    bool m_unprocessedConfigurationPolicyAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
