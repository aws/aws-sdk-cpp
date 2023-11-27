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
    AWS_SECURITYHUB_API BatchGetConfigurationPolicyAssociationsResult();
    AWS_SECURITYHUB_API BatchGetConfigurationPolicyAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetConfigurationPolicyAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline const Aws::Vector<ConfigurationPolicyAssociationSummary>& GetConfigurationPolicyAssociations() const{ return m_configurationPolicyAssociations; }

    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline void SetConfigurationPolicyAssociations(const Aws::Vector<ConfigurationPolicyAssociationSummary>& value) { m_configurationPolicyAssociations = value; }

    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline void SetConfigurationPolicyAssociations(Aws::Vector<ConfigurationPolicyAssociationSummary>&& value) { m_configurationPolicyAssociations = std::move(value); }

    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& WithConfigurationPolicyAssociations(const Aws::Vector<ConfigurationPolicyAssociationSummary>& value) { SetConfigurationPolicyAssociations(value); return *this;}

    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& WithConfigurationPolicyAssociations(Aws::Vector<ConfigurationPolicyAssociationSummary>&& value) { SetConfigurationPolicyAssociations(std::move(value)); return *this;}

    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& AddConfigurationPolicyAssociations(const ConfigurationPolicyAssociationSummary& value) { m_configurationPolicyAssociations.push_back(value); return *this; }

    /**
     * <p> Describes associations for the target accounts, OUs, or the root. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& AddConfigurationPolicyAssociations(ConfigurationPolicyAssociationSummary&& value) { m_configurationPolicyAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline const Aws::Vector<UnprocessedConfigurationPolicyAssociation>& GetUnprocessedConfigurationPolicyAssociations() const{ return m_unprocessedConfigurationPolicyAssociations; }

    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline void SetUnprocessedConfigurationPolicyAssociations(const Aws::Vector<UnprocessedConfigurationPolicyAssociation>& value) { m_unprocessedConfigurationPolicyAssociations = value; }

    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline void SetUnprocessedConfigurationPolicyAssociations(Aws::Vector<UnprocessedConfigurationPolicyAssociation>&& value) { m_unprocessedConfigurationPolicyAssociations = std::move(value); }

    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& WithUnprocessedConfigurationPolicyAssociations(const Aws::Vector<UnprocessedConfigurationPolicyAssociation>& value) { SetUnprocessedConfigurationPolicyAssociations(value); return *this;}

    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& WithUnprocessedConfigurationPolicyAssociations(Aws::Vector<UnprocessedConfigurationPolicyAssociation>&& value) { SetUnprocessedConfigurationPolicyAssociations(std::move(value)); return *this;}

    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& AddUnprocessedConfigurationPolicyAssociations(const UnprocessedConfigurationPolicyAssociation& value) { m_unprocessedConfigurationPolicyAssociations.push_back(value); return *this; }

    /**
     * <p> An array of configuration policy associations, one for each configuration
     * policy association identifier, that was specified in the request but couldn’t be
     * processed due to an error. </p>
     */
    inline BatchGetConfigurationPolicyAssociationsResult& AddUnprocessedConfigurationPolicyAssociations(UnprocessedConfigurationPolicyAssociation&& value) { m_unprocessedConfigurationPolicyAssociations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetConfigurationPolicyAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetConfigurationPolicyAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetConfigurationPolicyAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConfigurationPolicyAssociationSummary> m_configurationPolicyAssociations;

    Aws::Vector<UnprocessedConfigurationPolicyAssociation> m_unprocessedConfigurationPolicyAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
