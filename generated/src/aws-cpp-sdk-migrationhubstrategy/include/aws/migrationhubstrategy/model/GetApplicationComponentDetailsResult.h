/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/AssociatedApplication.h>
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


    /**
     * <p> Detailed information about an application component. </p>
     */
    inline const ApplicationComponentDetail& GetApplicationComponentDetail() const{ return m_applicationComponentDetail; }

    /**
     * <p> Detailed information about an application component. </p>
     */
    inline void SetApplicationComponentDetail(const ApplicationComponentDetail& value) { m_applicationComponentDetail = value; }

    /**
     * <p> Detailed information about an application component. </p>
     */
    inline void SetApplicationComponentDetail(ApplicationComponentDetail&& value) { m_applicationComponentDetail = std::move(value); }

    /**
     * <p> Detailed information about an application component. </p>
     */
    inline GetApplicationComponentDetailsResult& WithApplicationComponentDetail(const ApplicationComponentDetail& value) { SetApplicationComponentDetail(value); return *this;}

    /**
     * <p> Detailed information about an application component. </p>
     */
    inline GetApplicationComponentDetailsResult& WithApplicationComponentDetail(ApplicationComponentDetail&& value) { SetApplicationComponentDetail(std::move(value)); return *this;}


    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline const Aws::Vector<AssociatedApplication>& GetAssociatedApplications() const{ return m_associatedApplications; }

    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline void SetAssociatedApplications(const Aws::Vector<AssociatedApplication>& value) { m_associatedApplications = value; }

    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline void SetAssociatedApplications(Aws::Vector<AssociatedApplication>&& value) { m_associatedApplications = std::move(value); }

    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline GetApplicationComponentDetailsResult& WithAssociatedApplications(const Aws::Vector<AssociatedApplication>& value) { SetAssociatedApplications(value); return *this;}

    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline GetApplicationComponentDetailsResult& WithAssociatedApplications(Aws::Vector<AssociatedApplication>&& value) { SetAssociatedApplications(std::move(value)); return *this;}

    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline GetApplicationComponentDetailsResult& AddAssociatedApplications(const AssociatedApplication& value) { m_associatedApplications.push_back(value); return *this; }

    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline GetApplicationComponentDetailsResult& AddAssociatedApplications(AssociatedApplication&& value) { m_associatedApplications.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedServerIds() const{ return m_associatedServerIds; }

    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline void SetAssociatedServerIds(const Aws::Vector<Aws::String>& value) { m_associatedServerIds = value; }

    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline void SetAssociatedServerIds(Aws::Vector<Aws::String>&& value) { m_associatedServerIds = std::move(value); }

    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline GetApplicationComponentDetailsResult& WithAssociatedServerIds(const Aws::Vector<Aws::String>& value) { SetAssociatedServerIds(value); return *this;}

    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline GetApplicationComponentDetailsResult& WithAssociatedServerIds(Aws::Vector<Aws::String>&& value) { SetAssociatedServerIds(std::move(value)); return *this;}

    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline GetApplicationComponentDetailsResult& AddAssociatedServerIds(const Aws::String& value) { m_associatedServerIds.push_back(value); return *this; }

    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline GetApplicationComponentDetailsResult& AddAssociatedServerIds(Aws::String&& value) { m_associatedServerIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline GetApplicationComponentDetailsResult& AddAssociatedServerIds(const char* value) { m_associatedServerIds.push_back(value); return *this; }


    /**
     * <p> Set to true if the application component belongs to more than one
     * application group. </p>
     */
    inline bool GetMoreApplicationResource() const{ return m_moreApplicationResource; }

    /**
     * <p> Set to true if the application component belongs to more than one
     * application group. </p>
     */
    inline void SetMoreApplicationResource(bool value) { m_moreApplicationResource = value; }

    /**
     * <p> Set to true if the application component belongs to more than one
     * application group. </p>
     */
    inline GetApplicationComponentDetailsResult& WithMoreApplicationResource(bool value) { SetMoreApplicationResource(value); return *this;}

  private:

    ApplicationComponentDetail m_applicationComponentDetail;

    Aws::Vector<AssociatedApplication> m_associatedApplications;

    Aws::Vector<Aws::String> m_associatedServerIds;

    bool m_moreApplicationResource;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
