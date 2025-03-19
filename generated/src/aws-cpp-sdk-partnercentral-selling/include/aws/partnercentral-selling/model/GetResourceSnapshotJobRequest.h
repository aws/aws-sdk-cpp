/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class GetResourceSnapshotJobRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceSnapshotJob"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog related to the request. Valid values are:</p> <ul> <li>
     * <p> AWS: Retrieves the snapshot job from the production AWS environment. </p>
     * </li> <li> <p> Sandbox: Retrieves the snapshot job from a sandbox environment
     * used for testing or development purposes. </p> </li> </ul>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    GetResourceSnapshotJobRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the resource snapshot job to be retrieved. This
     * identifier is crucial for pinpointing the specific job you want to query. </p>
     */
    inline const Aws::String& GetResourceSnapshotJobIdentifier() const { return m_resourceSnapshotJobIdentifier; }
    inline bool ResourceSnapshotJobIdentifierHasBeenSet() const { return m_resourceSnapshotJobIdentifierHasBeenSet; }
    template<typename ResourceSnapshotJobIdentifierT = Aws::String>
    void SetResourceSnapshotJobIdentifier(ResourceSnapshotJobIdentifierT&& value) { m_resourceSnapshotJobIdentifierHasBeenSet = true; m_resourceSnapshotJobIdentifier = std::forward<ResourceSnapshotJobIdentifierT>(value); }
    template<typename ResourceSnapshotJobIdentifierT = Aws::String>
    GetResourceSnapshotJobRequest& WithResourceSnapshotJobIdentifier(ResourceSnapshotJobIdentifierT&& value) { SetResourceSnapshotJobIdentifier(std::forward<ResourceSnapshotJobIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_resourceSnapshotJobIdentifier;
    bool m_resourceSnapshotJobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
