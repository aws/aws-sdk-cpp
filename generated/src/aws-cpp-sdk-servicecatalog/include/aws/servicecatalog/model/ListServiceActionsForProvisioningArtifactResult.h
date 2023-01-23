/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionSummary.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListServiceActionsForProvisioningArtifactResult
  {
  public:
    AWS_SERVICECATALOG_API ListServiceActionsForProvisioningArtifactResult();
    AWS_SERVICECATALOG_API ListServiceActionsForProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListServiceActionsForProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline const Aws::Vector<ServiceActionSummary>& GetServiceActionSummaries() const{ return m_serviceActionSummaries; }

    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline void SetServiceActionSummaries(const Aws::Vector<ServiceActionSummary>& value) { m_serviceActionSummaries = value; }

    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline void SetServiceActionSummaries(Aws::Vector<ServiceActionSummary>&& value) { m_serviceActionSummaries = std::move(value); }

    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline ListServiceActionsForProvisioningArtifactResult& WithServiceActionSummaries(const Aws::Vector<ServiceActionSummary>& value) { SetServiceActionSummaries(value); return *this;}

    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline ListServiceActionsForProvisioningArtifactResult& WithServiceActionSummaries(Aws::Vector<ServiceActionSummary>&& value) { SetServiceActionSummaries(std::move(value)); return *this;}

    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline ListServiceActionsForProvisioningArtifactResult& AddServiceActionSummaries(const ServiceActionSummary& value) { m_serviceActionSummaries.push_back(value); return *this; }

    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline ListServiceActionsForProvisioningArtifactResult& AddServiceActionSummaries(ServiceActionSummary&& value) { m_serviceActionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListServiceActionsForProvisioningArtifactResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListServiceActionsForProvisioningArtifactResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListServiceActionsForProvisioningArtifactResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ServiceActionSummary> m_serviceActionSummaries;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
