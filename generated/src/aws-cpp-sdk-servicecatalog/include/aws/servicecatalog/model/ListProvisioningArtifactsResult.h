/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
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
  class ListProvisioningArtifactsResult
  {
  public:
    AWS_SERVICECATALOG_API ListProvisioningArtifactsResult();
    AWS_SERVICECATALOG_API ListProvisioningArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListProvisioningArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactDetail>& GetProvisioningArtifactDetails() const{ return m_provisioningArtifactDetails; }

    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline void SetProvisioningArtifactDetails(const Aws::Vector<ProvisioningArtifactDetail>& value) { m_provisioningArtifactDetails = value; }

    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline void SetProvisioningArtifactDetails(Aws::Vector<ProvisioningArtifactDetail>&& value) { m_provisioningArtifactDetails = std::move(value); }

    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline ListProvisioningArtifactsResult& WithProvisioningArtifactDetails(const Aws::Vector<ProvisioningArtifactDetail>& value) { SetProvisioningArtifactDetails(value); return *this;}

    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline ListProvisioningArtifactsResult& WithProvisioningArtifactDetails(Aws::Vector<ProvisioningArtifactDetail>&& value) { SetProvisioningArtifactDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline ListProvisioningArtifactsResult& AddProvisioningArtifactDetails(const ProvisioningArtifactDetail& value) { m_provisioningArtifactDetails.push_back(value); return *this; }

    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline ListProvisioningArtifactsResult& AddProvisioningArtifactDetails(ProvisioningArtifactDetail&& value) { m_provisioningArtifactDetails.push_back(std::move(value)); return *this; }


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
    inline ListProvisioningArtifactsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListProvisioningArtifactsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListProvisioningArtifactsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ProvisioningArtifactDetail> m_provisioningArtifactDetails;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
