/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AddressType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class GetSiteAddressRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API GetSiteAddressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSiteAddress"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const { return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    template<typename SiteIdT = Aws::String>
    void SetSiteId(SiteIdT&& value) { m_siteIdHasBeenSet = true; m_siteId = std::forward<SiteIdT>(value); }
    template<typename SiteIdT = Aws::String>
    GetSiteAddressRequest& WithSiteId(SiteIdT&& value) { SetSiteId(std::forward<SiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the address you request. </p>
     */
    inline AddressType GetAddressType() const { return m_addressType; }
    inline bool AddressTypeHasBeenSet() const { return m_addressTypeHasBeenSet; }
    inline void SetAddressType(AddressType value) { m_addressTypeHasBeenSet = true; m_addressType = value; }
    inline GetSiteAddressRequest& WithAddressType(AddressType value) { SetAddressType(value); return *this;}
    ///@}
  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    AddressType m_addressType{AddressType::NOT_SET};
    bool m_addressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
