/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to the <code>DissociatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DissociatePackageRequest">AWS
   * API Reference</a></p>
   */
  class DissociatePackageRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DissociatePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DissociatePackage"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline DissociatePackageRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline DissociatePackageRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>Internal ID of the package to dissociate from the domain. Use
     * <code>ListPackagesForDomain</code> to find this value.</p>
     */
    inline DissociatePackageRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}


    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline DissociatePackageRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline DissociatePackageRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the domain to dissociate the package from.</p>
     */
    inline DissociatePackageRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
