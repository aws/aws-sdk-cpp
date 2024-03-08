/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/WorkSpaceApplicationLicenseType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/Compute.h>
#include <aws/workspaces/model/OperatingSystemName.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeApplicationsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplications"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIds() const{ return m_applicationIds; }

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline bool ApplicationIdsHasBeenSet() const { return m_applicationIdsHasBeenSet; }

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline void SetApplicationIds(const Aws::Vector<Aws::String>& value) { m_applicationIdsHasBeenSet = true; m_applicationIds = value; }

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline void SetApplicationIds(Aws::Vector<Aws::String>&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds = std::move(value); }

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline DescribeApplicationsRequest& WithApplicationIds(const Aws::Vector<Aws::String>& value) { SetApplicationIds(value); return *this;}

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline DescribeApplicationsRequest& WithApplicationIds(Aws::Vector<Aws::String>&& value) { SetApplicationIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline DescribeApplicationsRequest& AddApplicationIds(const Aws::String& value) { m_applicationIdsHasBeenSet = true; m_applicationIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline DescribeApplicationsRequest& AddApplicationIds(Aws::String&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline DescribeApplicationsRequest& AddApplicationIds(const char* value) { m_applicationIdsHasBeenSet = true; m_applicationIds.push_back(value); return *this; }


    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline const Aws::Vector<Compute>& GetComputeTypeNames() const{ return m_computeTypeNames; }

    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline bool ComputeTypeNamesHasBeenSet() const { return m_computeTypeNamesHasBeenSet; }

    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline void SetComputeTypeNames(const Aws::Vector<Compute>& value) { m_computeTypeNamesHasBeenSet = true; m_computeTypeNames = value; }

    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline void SetComputeTypeNames(Aws::Vector<Compute>&& value) { m_computeTypeNamesHasBeenSet = true; m_computeTypeNames = std::move(value); }

    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& WithComputeTypeNames(const Aws::Vector<Compute>& value) { SetComputeTypeNames(value); return *this;}

    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& WithComputeTypeNames(Aws::Vector<Compute>&& value) { SetComputeTypeNames(std::move(value)); return *this;}

    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& AddComputeTypeNames(const Compute& value) { m_computeTypeNamesHasBeenSet = true; m_computeTypeNames.push_back(value); return *this; }

    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& AddComputeTypeNames(Compute&& value) { m_computeTypeNamesHasBeenSet = true; m_computeTypeNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The license availability for the applications.</p>
     */
    inline const WorkSpaceApplicationLicenseType& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline void SetLicenseType(const WorkSpaceApplicationLicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline void SetLicenseType(WorkSpaceApplicationLicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline DescribeApplicationsRequest& WithLicenseType(const WorkSpaceApplicationLicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license availability for the applications.</p>
     */
    inline DescribeApplicationsRequest& WithLicenseType(WorkSpaceApplicationLicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline const Aws::Vector<OperatingSystemName>& GetOperatingSystemNames() const{ return m_operatingSystemNames; }

    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline bool OperatingSystemNamesHasBeenSet() const { return m_operatingSystemNamesHasBeenSet; }

    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline void SetOperatingSystemNames(const Aws::Vector<OperatingSystemName>& value) { m_operatingSystemNamesHasBeenSet = true; m_operatingSystemNames = value; }

    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline void SetOperatingSystemNames(Aws::Vector<OperatingSystemName>&& value) { m_operatingSystemNamesHasBeenSet = true; m_operatingSystemNames = std::move(value); }

    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& WithOperatingSystemNames(const Aws::Vector<OperatingSystemName>& value) { SetOperatingSystemNames(value); return *this;}

    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& WithOperatingSystemNames(Aws::Vector<OperatingSystemName>&& value) { SetOperatingSystemNames(std::move(value)); return *this;}

    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& AddOperatingSystemNames(const OperatingSystemName& value) { m_operatingSystemNamesHasBeenSet = true; m_operatingSystemNames.push_back(value); return *this; }

    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline DescribeApplicationsRequest& AddOperatingSystemNames(OperatingSystemName&& value) { m_operatingSystemNamesHasBeenSet = true; m_operatingSystemNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The owner of the applications.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the applications.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the applications.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the applications.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the applications.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the applications.</p>
     */
    inline DescribeApplicationsRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the applications.</p>
     */
    inline DescribeApplicationsRequest& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the applications.</p>
     */
    inline DescribeApplicationsRequest& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The maximum number of applications to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of applications to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of applications to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of applications to return.</p>
     */
    inline DescribeApplicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_applicationIds;
    bool m_applicationIdsHasBeenSet = false;

    Aws::Vector<Compute> m_computeTypeNames;
    bool m_computeTypeNamesHasBeenSet = false;

    WorkSpaceApplicationLicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::Vector<OperatingSystemName> m_operatingSystemNames;
    bool m_operatingSystemNamesHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
