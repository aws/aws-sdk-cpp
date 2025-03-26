/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/IPAddressVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class CreateIPSetRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API CreateIPSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIPSet"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateIPSetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is for a global resource type, such as a Amazon
     * CloudFront distribution. For an Amplify application, use
     * <code>CLOUDFRONT</code>.</p> <p>To work with CloudFront, you must also specify
     * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline CreateIPSetRequest& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateIPSetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline IPAddressVersion GetIPAddressVersion() const { return m_iPAddressVersion; }
    inline bool IPAddressVersionHasBeenSet() const { return m_iPAddressVersionHasBeenSet; }
    inline void SetIPAddressVersion(IPAddressVersion value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = value; }
    inline CreateIPSetRequest& WithIPAddressVersion(IPAddressVersion value) { SetIPAddressVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses that you want WAF to inspect for in incoming requests.
     * All addresses must be specified using Classless Inter-Domain Routing (CIDR)
     * notation. WAF supports all IPv4 and IPv6 CIDR ranges except for <code>/0</code>.
     * </p> <p>Example address strings: </p> <ul> <li> <p>For requests that originated
     * from the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li>
     * <li> <p>For requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>For requests
     * that originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111,
     * specify <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li>
     * <p>For requests that originated from IP addresses
     * 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const { return m_addresses; }
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }
    template<typename AddressesT = Aws::Vector<Aws::String>>
    void SetAddresses(AddressesT&& value) { m_addressesHasBeenSet = true; m_addresses = std::forward<AddressesT>(value); }
    template<typename AddressesT = Aws::Vector<Aws::String>>
    CreateIPSetRequest& WithAddresses(AddressesT&& value) { SetAddresses(std::forward<AddressesT>(value)); return *this;}
    template<typename AddressesT = Aws::String>
    CreateIPSetRequest& AddAddresses(AddressesT&& value) { m_addressesHasBeenSet = true; m_addresses.emplace_back(std::forward<AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateIPSetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateIPSetRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IPAddressVersion m_iPAddressVersion{IPAddressVersion::NOT_SET};
    bool m_iPAddressVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
