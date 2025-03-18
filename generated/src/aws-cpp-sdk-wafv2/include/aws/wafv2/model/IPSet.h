/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/IPAddressVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Contains zero or more IP addresses or blocks of IP addresses specified in
   * Classless Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6
   * CIDR ranges except for /0. For information about CIDR notation, see the
   * Wikipedia entry <a
   * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
   * Inter-Domain Routing</a>. </p> <p>WAF assigns an ARN to each <code>IPSet</code>
   * that you create. To use an IP set in a rule, you provide the ARN to the
   * <a>Rule</a> statement <a>IPSetReferenceStatement</a>. </p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/IPSet">AWS API
   * Reference</a></p>
   */
  class IPSet
  {
  public:
    AWS_WAFV2_API IPSet() = default;
    AWS_WAFV2_API IPSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API IPSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    IPSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    IPSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    IPSet& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
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
    IPSet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline IPAddressVersion GetIPAddressVersion() const { return m_iPAddressVersion; }
    inline bool IPAddressVersionHasBeenSet() const { return m_iPAddressVersionHasBeenSet; }
    inline void SetIPAddressVersion(IPAddressVersion value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = value; }
    inline IPSet& WithIPAddressVersion(IPAddressVersion value) { SetIPAddressVersion(value); return *this;}
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
    IPSet& WithAddresses(AddressesT&& value) { SetAddresses(std::forward<AddressesT>(value)); return *this;}
    template<typename AddressesT = Aws::String>
    IPSet& AddAddresses(AddressesT&& value) { m_addressesHasBeenSet = true; m_addresses.emplace_back(std::forward<AddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IPAddressVersion m_iPAddressVersion{IPAddressVersion::NOT_SET};
    bool m_iPAddressVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
