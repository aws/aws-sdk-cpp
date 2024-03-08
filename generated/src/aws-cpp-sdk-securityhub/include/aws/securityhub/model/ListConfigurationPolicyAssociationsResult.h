/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConfigurationPolicyAssociationSummary.h>
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
  class ListConfigurationPolicyAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API ListConfigurationPolicyAssociationsResult();
    AWS_SECURITYHUB_API ListConfigurationPolicyAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListConfigurationPolicyAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline const Aws::Vector<ConfigurationPolicyAssociationSummary>& GetConfigurationPolicyAssociationSummaries() const{ return m_configurationPolicyAssociationSummaries; }

    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline void SetConfigurationPolicyAssociationSummaries(const Aws::Vector<ConfigurationPolicyAssociationSummary>& value) { m_configurationPolicyAssociationSummaries = value; }

    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline void SetConfigurationPolicyAssociationSummaries(Aws::Vector<ConfigurationPolicyAssociationSummary>&& value) { m_configurationPolicyAssociationSummaries = std::move(value); }

    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline ListConfigurationPolicyAssociationsResult& WithConfigurationPolicyAssociationSummaries(const Aws::Vector<ConfigurationPolicyAssociationSummary>& value) { SetConfigurationPolicyAssociationSummaries(value); return *this;}

    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline ListConfigurationPolicyAssociationsResult& WithConfigurationPolicyAssociationSummaries(Aws::Vector<ConfigurationPolicyAssociationSummary>&& value) { SetConfigurationPolicyAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline ListConfigurationPolicyAssociationsResult& AddConfigurationPolicyAssociationSummaries(const ConfigurationPolicyAssociationSummary& value) { m_configurationPolicyAssociationSummaries.push_back(value); return *this; }

    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline ListConfigurationPolicyAssociationsResult& AddConfigurationPolicyAssociationSummaries(ConfigurationPolicyAssociationSummary&& value) { m_configurationPolicyAssociationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline ListConfigurationPolicyAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline ListConfigurationPolicyAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline ListConfigurationPolicyAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConfigurationPolicyAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConfigurationPolicyAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConfigurationPolicyAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConfigurationPolicyAssociationSummary> m_configurationPolicyAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
