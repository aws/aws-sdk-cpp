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
    AWS_OPENSEARCHSERVICE_API DissociatePackagesRequest();

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
    inline const Aws::Vector<Aws::String>& GetPackageList() const{ return m_packageList; }
    inline bool PackageListHasBeenSet() const { return m_packageListHasBeenSet; }
    inline void SetPackageList(const Aws::Vector<Aws::String>& value) { m_packageListHasBeenSet = true; m_packageList = value; }
    inline void SetPackageList(Aws::Vector<Aws::String>&& value) { m_packageListHasBeenSet = true; m_packageList = std::move(value); }
    inline DissociatePackagesRequest& WithPackageList(const Aws::Vector<Aws::String>& value) { SetPackageList(value); return *this;}
    inline DissociatePackagesRequest& WithPackageList(Aws::Vector<Aws::String>&& value) { SetPackageList(std::move(value)); return *this;}
    inline DissociatePackagesRequest& AddPackageList(const Aws::String& value) { m_packageListHasBeenSet = true; m_packageList.push_back(value); return *this; }
    inline DissociatePackagesRequest& AddPackageList(Aws::String&& value) { m_packageListHasBeenSet = true; m_packageList.push_back(std::move(value)); return *this; }
    inline DissociatePackagesRequest& AddPackageList(const char* value) { m_packageListHasBeenSet = true; m_packageList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DissociatePackagesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DissociatePackagesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DissociatePackagesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
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
