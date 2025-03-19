/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AddressType.h>
#include <aws/outposts/model/Address.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class UpdateSiteAddressRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API UpdateSiteAddressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSiteAddress"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const { return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    template<typename SiteIdT = Aws::String>
    void SetSiteId(SiteIdT&& value) { m_siteIdHasBeenSet = true; m_siteId = std::forward<SiteIdT>(value); }
    template<typename SiteIdT = Aws::String>
    UpdateSiteAddressRequest& WithSiteId(SiteIdT&& value) { SetSiteId(std::forward<SiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the address. </p>
     */
    inline AddressType GetAddressType() const { return m_addressType; }
    inline bool AddressTypeHasBeenSet() const { return m_addressTypeHasBeenSet; }
    inline void SetAddressType(AddressType value) { m_addressTypeHasBeenSet = true; m_addressType = value; }
    inline UpdateSiteAddressRequest& WithAddressType(AddressType value) { SetAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The address for the site. </p>
     */
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    UpdateSiteAddressRequest& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    AddressType m_addressType{AddressType::NOT_SET};
    bool m_addressTypeHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
