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
    AWS_OPENSEARCHSERVICE_API AssociatePackageRequest();

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
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }
    inline AssociatePackageRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline AssociatePackageRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline AssociatePackageRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the domain to associate the package with.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline AssociatePackageRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline AssociatePackageRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline AssociatePackageRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of package IDs that must be associated with the domain before the
     * package specified in the request can be associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrerequisitePackageIDList() const{ return m_prerequisitePackageIDList; }
    inline bool PrerequisitePackageIDListHasBeenSet() const { return m_prerequisitePackageIDListHasBeenSet; }
    inline void SetPrerequisitePackageIDList(const Aws::Vector<Aws::String>& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = value; }
    inline void SetPrerequisitePackageIDList(Aws::Vector<Aws::String>&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList = std::move(value); }
    inline AssociatePackageRequest& WithPrerequisitePackageIDList(const Aws::Vector<Aws::String>& value) { SetPrerequisitePackageIDList(value); return *this;}
    inline AssociatePackageRequest& WithPrerequisitePackageIDList(Aws::Vector<Aws::String>&& value) { SetPrerequisitePackageIDList(std::move(value)); return *this;}
    inline AssociatePackageRequest& AddPrerequisitePackageIDList(const Aws::String& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(value); return *this; }
    inline AssociatePackageRequest& AddPrerequisitePackageIDList(Aws::String&& value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(std::move(value)); return *this; }
    inline AssociatePackageRequest& AddPrerequisitePackageIDList(const char* value) { m_prerequisitePackageIDListHasBeenSet = true; m_prerequisitePackageIDList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for associating a package with an Amazon OpenSearch Service
     * domain.</p>
     */
    inline const PackageAssociationConfiguration& GetAssociationConfiguration() const{ return m_associationConfiguration; }
    inline bool AssociationConfigurationHasBeenSet() const { return m_associationConfigurationHasBeenSet; }
    inline void SetAssociationConfiguration(const PackageAssociationConfiguration& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = value; }
    inline void SetAssociationConfiguration(PackageAssociationConfiguration&& value) { m_associationConfigurationHasBeenSet = true; m_associationConfiguration = std::move(value); }
    inline AssociatePackageRequest& WithAssociationConfiguration(const PackageAssociationConfiguration& value) { SetAssociationConfiguration(value); return *this;}
    inline AssociatePackageRequest& WithAssociationConfiguration(PackageAssociationConfiguration&& value) { SetAssociationConfiguration(std::move(value)); return *this;}
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
