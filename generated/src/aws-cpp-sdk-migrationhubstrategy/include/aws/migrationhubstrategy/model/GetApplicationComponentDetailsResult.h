﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/AssociatedApplication.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetApplicationComponentDetailsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentDetailsResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Detailed information about an application component. </p>
     */
    inline const ApplicationComponentDetail& GetApplicationComponentDetail() const{ return m_applicationComponentDetail; }
    inline void SetApplicationComponentDetail(const ApplicationComponentDetail& value) { m_applicationComponentDetail = value; }
    inline void SetApplicationComponentDetail(ApplicationComponentDetail&& value) { m_applicationComponentDetail = std::move(value); }
    inline GetApplicationComponentDetailsResult& WithApplicationComponentDetail(const ApplicationComponentDetail& value) { SetApplicationComponentDetail(value); return *this;}
    inline GetApplicationComponentDetailsResult& WithApplicationComponentDetail(ApplicationComponentDetail&& value) { SetApplicationComponentDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline const Aws::Vector<AssociatedApplication>& GetAssociatedApplications() const{ return m_associatedApplications; }
    inline void SetAssociatedApplications(const Aws::Vector<AssociatedApplication>& value) { m_associatedApplications = value; }
    inline void SetAssociatedApplications(Aws::Vector<AssociatedApplication>&& value) { m_associatedApplications = std::move(value); }
    inline GetApplicationComponentDetailsResult& WithAssociatedApplications(const Aws::Vector<AssociatedApplication>& value) { SetAssociatedApplications(value); return *this;}
    inline GetApplicationComponentDetailsResult& WithAssociatedApplications(Aws::Vector<AssociatedApplication>&& value) { SetAssociatedApplications(std::move(value)); return *this;}
    inline GetApplicationComponentDetailsResult& AddAssociatedApplications(const AssociatedApplication& value) { m_associatedApplications.push_back(value); return *this; }
    inline GetApplicationComponentDetailsResult& AddAssociatedApplications(AssociatedApplication&& value) { m_associatedApplications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedServerIds() const{ return m_associatedServerIds; }
    inline void SetAssociatedServerIds(const Aws::Vector<Aws::String>& value) { m_associatedServerIds = value; }
    inline void SetAssociatedServerIds(Aws::Vector<Aws::String>&& value) { m_associatedServerIds = std::move(value); }
    inline GetApplicationComponentDetailsResult& WithAssociatedServerIds(const Aws::Vector<Aws::String>& value) { SetAssociatedServerIds(value); return *this;}
    inline GetApplicationComponentDetailsResult& WithAssociatedServerIds(Aws::Vector<Aws::String>&& value) { SetAssociatedServerIds(std::move(value)); return *this;}
    inline GetApplicationComponentDetailsResult& AddAssociatedServerIds(const Aws::String& value) { m_associatedServerIds.push_back(value); return *this; }
    inline GetApplicationComponentDetailsResult& AddAssociatedServerIds(Aws::String&& value) { m_associatedServerIds.push_back(std::move(value)); return *this; }
    inline GetApplicationComponentDetailsResult& AddAssociatedServerIds(const char* value) { m_associatedServerIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Set to true if the application component belongs to more than one
     * application group. </p>
     */
    inline bool GetMoreApplicationResource() const{ return m_moreApplicationResource; }
    inline void SetMoreApplicationResource(bool value) { m_moreApplicationResource = value; }
    inline GetApplicationComponentDetailsResult& WithMoreApplicationResource(bool value) { SetMoreApplicationResource(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetApplicationComponentDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetApplicationComponentDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetApplicationComponentDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationComponentDetail m_applicationComponentDetail;

    Aws::Vector<AssociatedApplication> m_associatedApplications;

    Aws::Vector<Aws::String> m_associatedServerIds;

    bool m_moreApplicationResource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
