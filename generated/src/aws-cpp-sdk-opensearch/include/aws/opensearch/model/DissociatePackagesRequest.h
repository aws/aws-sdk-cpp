/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class DissociatePackagesRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DissociatePackagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DissociatePackages"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of package IDs to be dissociated from a domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackageList() const { return m_packageList; }
    inline bool PackageListHasBeenSet() const { return m_packageListHasBeenSet; }
    template<typename PackageListT = Aws::Vector<Aws::String>>
    void SetPackageList(PackageListT&& value) { m_packageListHasBeenSet = true; m_packageList = std::forward<PackageListT>(value); }
    template<typename PackageListT = Aws::Vector<Aws::String>>
    DissociatePackagesRequest& WithPackageList(PackageListT&& value) { SetPackageList(std::forward<PackageListT>(value)); return *this;}
    template<typename PackageListT = Aws::String>
    DissociatePackagesRequest& AddPackageList(PackageListT&& value) { m_packageListHasBeenSet = true; m_packageList.emplace_back(std::forward<PackageListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DissociatePackagesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_packageList;
    bool m_packageListHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
