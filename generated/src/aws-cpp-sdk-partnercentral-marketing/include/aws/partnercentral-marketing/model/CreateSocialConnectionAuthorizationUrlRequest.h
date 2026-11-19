/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Catalog.h>
#include <aws/partnercentral-marketing/model/Platform.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for CreateSocialConnectionAuthorizationUrl.</p> <p>Names a platform,
 * not a connection: the same call serves a first connect, connecting another
 * account, and re-authorizing an expired one. Which of those it was is decided by
 * the account the partner consents with, and shows up in ListSocialConnections
 * afterwards. Writes nothing in this service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CreateSocialConnectionAuthorizationUrlRequest">AWS
 * API Reference</a></p>
 */
class CreateSocialConnectionAuthorizationUrlRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API CreateSocialConnectionAuthorizationUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSocialConnectionAuthorizationUrl"; }

  AWS_PARTNERCENTRALMARKETING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALMARKETING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Catalog the connection belongs to.</p>
   */
  inline Catalog GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(Catalog value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline CreateSocialConnectionAuthorizationUrlRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Social platform to authorize.</p>
   */
  inline Platform GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  inline void SetPlatform(Platform value) {
    m_platformHasBeenSet = true;
    m_platform = value;
  }
  inline CreateSocialConnectionAuthorizationUrlRequest& WithPlatform(Platform value) {
    SetPlatform(value);
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Platform m_platform{Platform::NOT_SET};
  bool m_catalogHasBeenSet = false;
  bool m_platformHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
