﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactView.h>
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
  class ListProvisioningArtifactsForServiceActionResult
  {
  public:
    AWS_SERVICECATALOG_API ListProvisioningArtifactsForServiceActionResult();
    AWS_SERVICECATALOG_API ListProvisioningArtifactsForServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListProvisioningArtifactsForServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactView>& GetProvisioningArtifactViews() const{ return m_provisioningArtifactViews; }
    inline void SetProvisioningArtifactViews(const Aws::Vector<ProvisioningArtifactView>& value) { m_provisioningArtifactViews = value; }
    inline void SetProvisioningArtifactViews(Aws::Vector<ProvisioningArtifactView>&& value) { m_provisioningArtifactViews = std::move(value); }
    inline ListProvisioningArtifactsForServiceActionResult& WithProvisioningArtifactViews(const Aws::Vector<ProvisioningArtifactView>& value) { SetProvisioningArtifactViews(value); return *this;}
    inline ListProvisioningArtifactsForServiceActionResult& WithProvisioningArtifactViews(Aws::Vector<ProvisioningArtifactView>&& value) { SetProvisioningArtifactViews(std::move(value)); return *this;}
    inline ListProvisioningArtifactsForServiceActionResult& AddProvisioningArtifactViews(const ProvisioningArtifactView& value) { m_provisioningArtifactViews.push_back(value); return *this; }
    inline ListProvisioningArtifactsForServiceActionResult& AddProvisioningArtifactViews(ProvisioningArtifactView&& value) { m_provisioningArtifactViews.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListProvisioningArtifactsForServiceActionResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListProvisioningArtifactsForServiceActionResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListProvisioningArtifactsForServiceActionResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProvisioningArtifactsForServiceActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProvisioningArtifactsForServiceActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProvisioningArtifactsForServiceActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisioningArtifactView> m_provisioningArtifactViews;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
