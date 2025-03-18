/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/PackageAssociationConfiguration.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to the <code>AssociatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AssociatePackageRequest">AWS
   * API Reference</a></p>
   */
  class AssociatePackageRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API AssociatePackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePackage"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Internal ID of the package to associate with a domain. Use
     * <code>DescribePackages</code> to find this value. </p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    AssociatePackageRequest& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the domain to associate the package with.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AssociatePackageRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of package IDs that must be associated with the domain before the
     * package specified in the request can be associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrerequisitePackageIDList() const { return m_prerequisitePackageIDList; }
    inline bool PrerequisitePackageIDListHasBeenSet() const { return m_prerequisitePackageIDListHasBeenSet; }
    template<typename PrerequisitePackageIDListT = Aws::Vector<Aws::String>>
    void SetPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = std::forward<PrerequisitePackageIDListT>(value); }
    template<typename PrerequisitePackageIDListT = Aws::Vector<Aws::String>>
    AssociatePackageRequest& WithPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { SetPrerequisitePackageIDList(std::forward<PrerequisitePackageIDListT>(value)); return *this;}
    template<typename PrerequisitePackageIDListT = Aws::String>
    AssociatePackageRequest& AddPrerequisitePackageIDList(PrerequisitePackageIDListT&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.emplace_back(std::forward<PrerequisitePackageIDListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for associating a package with an Amazon OpenSearch Service
     * domain.</p>
     */
    inline const PackageAssociationConfiguration& GetAssociationConfiguration() const { return m_associationConfiguration; }
    inline bool AssociationConfigurationHasBeenSet() const { return m_associationConfigurationHasBeenSet; }
    template<typename AssociationConfigurationT = PackageAssociationConfiguration>
    void SetAssociationConfiguration(AssociationConfigurationT&& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = std::forward<AssociationConfigurationT>(value); }
    template<typename AssociationConfigurationT = PackageAssociationConfiguration>
    AssociatePackageRequest& WithAssociationConfiguration(AssociationConfigurationT&& value) { SetAssociationConfiguration(std::forward<AssociationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_prerequisitePackageIDList;
    bool m_prerequisitePackageIDListHasBeenSet = false;

    PackageAssociationConfiguration m_associationConfiguration;
    bool m_associationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
