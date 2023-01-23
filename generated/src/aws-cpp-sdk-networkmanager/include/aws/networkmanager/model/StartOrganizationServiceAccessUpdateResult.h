/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/OrganizationStatus.h>
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
namespace NetworkManager
{
namespace Model
{
  class StartOrganizationServiceAccessUpdateResult
  {
  public:
    AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateResult();
    AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the service access update request for an Amazon Web Services
     * Organization.</p>
     */
    inline const OrganizationStatus& GetOrganizationStatus() const{ return m_organizationStatus; }

    /**
     * <p>The status of the service access update request for an Amazon Web Services
     * Organization.</p>
     */
    inline void SetOrganizationStatus(const OrganizationStatus& value) { m_organizationStatus = value; }

    /**
     * <p>The status of the service access update request for an Amazon Web Services
     * Organization.</p>
     */
    inline void SetOrganizationStatus(OrganizationStatus&& value) { m_organizationStatus = std::move(value); }

    /**
     * <p>The status of the service access update request for an Amazon Web Services
     * Organization.</p>
     */
    inline StartOrganizationServiceAccessUpdateResult& WithOrganizationStatus(const OrganizationStatus& value) { SetOrganizationStatus(value); return *this;}

    /**
     * <p>The status of the service access update request for an Amazon Web Services
     * Organization.</p>
     */
    inline StartOrganizationServiceAccessUpdateResult& WithOrganizationStatus(OrganizationStatus&& value) { SetOrganizationStatus(std::move(value)); return *this;}

  private:

    OrganizationStatus m_organizationStatus;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
