/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Organization.h>
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
namespace Organizations
{
namespace Model
{
  class DescribeOrganizationResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeOrganizationResult() = default;
    AWS_ORGANIZATIONS_API DescribeOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains information about the organization.</p> 
     * <p>The <code>AvailablePolicyTypes</code> part of the response is deprecated, and
     * you shouldn't use it in your apps. It doesn't include any policy type supported
     * by Organizations other than SCPs. In the China (Ningxia) Region, no policy type
     * is included. To determine which policy types are enabled in your organization,
     * use the <code> <a>ListRoots</a> </code> operation.</p> 
     */
    inline const Organization& GetOrganization() const { return m_organization; }
    template<typename OrganizationT = Organization>
    void SetOrganization(OrganizationT&& value) { m_organizationHasBeenSet = true; m_organization = std::forward<OrganizationT>(value); }
    template<typename OrganizationT = Organization>
    DescribeOrganizationResult& WithOrganization(OrganizationT&& value) { SetOrganization(std::forward<OrganizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Organization m_organization;
    bool m_organizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
