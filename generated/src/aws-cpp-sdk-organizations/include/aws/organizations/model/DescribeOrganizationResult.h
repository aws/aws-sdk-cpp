/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Organization.h>
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
    AWS_ORGANIZATIONS_API DescribeOrganizationResult();
    AWS_ORGANIZATIONS_API DescribeOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about the organization.</p> 
     * <p>The <code>AvailablePolicyTypes</code> part of the response is deprecated, and
     * you shouldn't use it in your apps. It doesn't include any policy type supported
     * by Organizations other than SCPs. To determine which policy types are enabled in
     * your organization, use the <code> <a>ListRoots</a> </code> operation.</p>
     * 
     */
    inline const Organization& GetOrganization() const{ return m_organization; }

    /**
     * <p>A structure that contains information about the organization.</p> 
     * <p>The <code>AvailablePolicyTypes</code> part of the response is deprecated, and
     * you shouldn't use it in your apps. It doesn't include any policy type supported
     * by Organizations other than SCPs. To determine which policy types are enabled in
     * your organization, use the <code> <a>ListRoots</a> </code> operation.</p>
     * 
     */
    inline void SetOrganization(const Organization& value) { m_organization = value; }

    /**
     * <p>A structure that contains information about the organization.</p> 
     * <p>The <code>AvailablePolicyTypes</code> part of the response is deprecated, and
     * you shouldn't use it in your apps. It doesn't include any policy type supported
     * by Organizations other than SCPs. To determine which policy types are enabled in
     * your organization, use the <code> <a>ListRoots</a> </code> operation.</p>
     * 
     */
    inline void SetOrganization(Organization&& value) { m_organization = std::move(value); }

    /**
     * <p>A structure that contains information about the organization.</p> 
     * <p>The <code>AvailablePolicyTypes</code> part of the response is deprecated, and
     * you shouldn't use it in your apps. It doesn't include any policy type supported
     * by Organizations other than SCPs. To determine which policy types are enabled in
     * your organization, use the <code> <a>ListRoots</a> </code> operation.</p>
     * 
     */
    inline DescribeOrganizationResult& WithOrganization(const Organization& value) { SetOrganization(value); return *this;}

    /**
     * <p>A structure that contains information about the organization.</p> 
     * <p>The <code>AvailablePolicyTypes</code> part of the response is deprecated, and
     * you shouldn't use it in your apps. It doesn't include any policy type supported
     * by Organizations other than SCPs. To determine which policy types are enabled in
     * your organization, use the <code> <a>ListRoots</a> </code> operation.</p>
     * 
     */
    inline DescribeOrganizationResult& WithOrganization(Organization&& value) { SetOrganization(std::move(value)); return *this;}

  private:

    Organization m_organization;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
