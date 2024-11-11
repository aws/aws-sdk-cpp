/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageDetailsForAssociation.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class AssociatePackagesRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API AssociatePackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePackages"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of packages and their prerequisites to be associated with a
     * domain.</p>
     */
    inline const Aws::Vector<PackageDetailsForAssociation>& GetPackageList() const{ return m_packageList; }
    inline bool PackageListHasBeenSet() const { return m_packageListHasBeenSet; }
    inline void SetPackageList(const Aws::Vector<PackageDetailsForAssociation>& value) { m_packageListHasBeenSet = true; m_packageList = value; }
    inline void SetPackageList(Aws::Vector<PackageDetailsForAssociation>&& value) { m_packageListHasBeenSet = true; m_packageList = std::move(value); }
    inline AssociatePackagesRequest& WithPackageList(const Aws::Vector<PackageDetailsForAssociation>& value) { SetPackageList(value); return *this;}
    inline AssociatePackagesRequest& WithPackageList(Aws::Vector<PackageDetailsForAssociation>&& value) { SetPackageList(std::move(value)); return *this;}
    inline AssociatePackagesRequest& AddPackageList(const PackageDetailsForAssociation& value) { m_packageListHasBeenSet = true; m_packageList.push_back(value); return *this; }
    inline AssociatePackagesRequest& AddPackageList(PackageDetailsForAssociation&& value) { m_packageListHasBeenSet = true; m_packageList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline AssociatePackagesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline AssociatePackagesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline AssociatePackagesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}
  private:

    Aws::Vector<PackageDetailsForAssociation> m_packageList;
    bool m_packageListHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
