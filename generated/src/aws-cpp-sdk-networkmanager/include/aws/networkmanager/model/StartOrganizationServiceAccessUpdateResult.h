/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/OrganizationStatus.h>
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
namespace NetworkManager
{
namespace Model
{
  class StartOrganizationServiceAccessUpdateResult
  {
  public:
    AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateResult() = default;
    AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the service access update request for an Amazon Web Services
     * Organization.</p>
     */
    inline const OrganizationStatus& GetOrganizationStatus() const { return m_organizationStatus; }
    template<typename OrganizationStatusT = OrganizationStatus>
    void SetOrganizationStatus(OrganizationStatusT&& value) { m_organizationStatusHasBeenSet = true; m_organizationStatus = std::forward<OrganizationStatusT>(value); }
    template<typename OrganizationStatusT = OrganizationStatus>
    StartOrganizationServiceAccessUpdateResult& WithOrganizationStatus(OrganizationStatusT&& value) { SetOrganizationStatus(std::forward<OrganizationStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartOrganizationServiceAccessUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OrganizationStatus m_organizationStatus;
    bool m_organizationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
