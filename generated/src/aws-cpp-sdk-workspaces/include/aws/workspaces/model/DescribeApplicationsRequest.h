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
    AWS_WORKSPACES_API DescribeApplicationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplications"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifiers of one or more applications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIds() const { return m_applicationIds; }
    inline bool ApplicationIdsHasBeenSet() const { return m_applicationIdsHasBeenSet; }
    template<typename ApplicationIdsT = Aws::Vector<Aws::String>>
    void SetApplicationIds(ApplicationIdsT&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds = std::forward<ApplicationIdsT>(value); }
    template<typename ApplicationIdsT = Aws::Vector<Aws::String>>
    DescribeApplicationsRequest& WithApplicationIds(ApplicationIdsT&& value) { SetApplicationIds(std::forward<ApplicationIdsT>(value)); return *this;}
    template<typename ApplicationIdsT = Aws::String>
    DescribeApplicationsRequest& AddApplicationIds(ApplicationIdsT&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds.emplace_back(std::forward<ApplicationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The compute types supported by the applications.</p>
     */
    inline const Aws::Vector<Compute>& GetComputeTypeNames() const { return m_computeTypeNames; }
    inline bool ComputeTypeNamesHasBeenSet() const { return m_computeTypeNamesHasBeenSet; }
    template<typename ComputeTypeNamesT = Aws::Vector<Compute>>
    void SetComputeTypeNames(ComputeTypeNamesT&& value) { m_computeTypeNamesHasBeenSet = true; m_computeTypeNames = std::forward<ComputeTypeNamesT>(value); }
    template<typename ComputeTypeNamesT = Aws::Vector<Compute>>
    DescribeApplicationsRequest& WithComputeTypeNames(ComputeTypeNamesT&& value) { SetComputeTypeNames(std::forward<ComputeTypeNamesT>(value)); return *this;}
    inline DescribeApplicationsRequest& AddComputeTypeNames(Compute value) { m_computeTypeNamesHasBeenSet = true; m_computeTypeNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The license availability for the applications.</p>
     */
    inline WorkSpaceApplicationLicenseType GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(WorkSpaceApplicationLicenseType value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline DescribeApplicationsRequest& WithLicenseType(WorkSpaceApplicationLicenseType value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating systems supported by the applications.</p>
     */
    inline const Aws::Vector<OperatingSystemName>& GetOperatingSystemNames() const { return m_operatingSystemNames; }
    inline bool OperatingSystemNamesHasBeenSet() const { return m_operatingSystemNamesHasBeenSet; }
    template<typename OperatingSystemNamesT = Aws::Vector<OperatingSystemName>>
    void SetOperatingSystemNames(OperatingSystemNamesT&& value) { m_operatingSystemNamesHasBeenSet = true; m_operatingSystemNames = std::forward<OperatingSystemNamesT>(value); }
    template<typename OperatingSystemNamesT = Aws::Vector<OperatingSystemName>>
    DescribeApplicationsRequest& WithOperatingSystemNames(OperatingSystemNamesT&& value) { SetOperatingSystemNames(std::forward<OperatingSystemNamesT>(value)); return *this;}
    inline DescribeApplicationsRequest& AddOperatingSystemNames(OperatingSystemName value) { m_operatingSystemNamesHasBeenSet = true; m_operatingSystemNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The owner of the applications.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    DescribeApplicationsRequest& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of applications to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeApplicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeApplicationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationIds;
    bool m_applicationIdsHasBeenSet = false;

    Aws::Vector<Compute> m_computeTypeNames;
    bool m_computeTypeNamesHasBeenSet = false;

    WorkSpaceApplicationLicenseType m_licenseType{WorkSpaceApplicationLicenseType::NOT_SET};
    bool m_licenseTypeHasBeenSet = false;

    Aws::Vector<OperatingSystemName> m_operatingSystemNames;
    bool m_operatingSystemNamesHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
