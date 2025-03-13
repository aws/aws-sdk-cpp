/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/Address.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/taxsettings/model/AddressRoleType.h>
#include <aws/taxsettings/model/Jurisdiction.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p> The meta data information associated with the account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/AccountMetaData">AWS
   * API Reference</a></p>
   */
  class AccountMetaData
  {
  public:
    AWS_TAXSETTINGS_API AccountMetaData() = default;
    AWS_TAXSETTINGS_API AccountMetaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API AccountMetaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services accounts name. </p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    AccountMetaData& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    AccountMetaData& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Address roles associated with the account containing country code
     * information. </p>
     */
    inline const Aws::Map<AddressRoleType, Jurisdiction>& GetAddressRoleMap() const { return m_addressRoleMap; }
    inline bool AddressRoleMapHasBeenSet() const { return m_addressRoleMapHasBeenSet; }
    template<typename AddressRoleMapT = Aws::Map<AddressRoleType, Jurisdiction>>
    void SetAddressRoleMap(AddressRoleMapT&& value) { m_addressRoleMapHasBeenSet = true; m_addressRoleMap = std::forward<AddressRoleMapT>(value); }
    template<typename AddressRoleMapT = Aws::Map<AddressRoleType, Jurisdiction>>
    AccountMetaData& WithAddressRoleMap(AddressRoleMapT&& value) { SetAddressRoleMap(std::forward<AddressRoleMapT>(value)); return *this;}
    inline AccountMetaData& AddAddressRoleMap(AddressRoleType key, Jurisdiction value) {
      m_addressRoleMapHasBeenSet = true; m_addressRoleMap.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The type of address associated with the legal profile. </p>
     */
    inline AddressRoleType GetAddressType() const { return m_addressType; }
    inline bool AddressTypeHasBeenSet() const { return m_addressTypeHasBeenSet; }
    inline void SetAddressType(AddressRoleType value) { m_addressTypeHasBeenSet = true; m_addressType = value; }
    inline AccountMetaData& WithAddressType(AddressRoleType value) { SetAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Seller information associated with the account. </p>
     */
    inline const Aws::String& GetSeller() const { return m_seller; }
    inline bool SellerHasBeenSet() const { return m_sellerHasBeenSet; }
    template<typename SellerT = Aws::String>
    void SetSeller(SellerT&& value) { m_sellerHasBeenSet = true; m_seller = std::forward<SellerT>(value); }
    template<typename SellerT = Aws::String>
    AccountMetaData& WithSeller(SellerT&& value) { SetSeller(std::forward<SellerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::Map<AddressRoleType, Jurisdiction> m_addressRoleMap;
    bool m_addressRoleMapHasBeenSet = false;

    AddressRoleType m_addressType{AddressRoleType::NOT_SET};
    bool m_addressTypeHasBeenSet = false;

    Aws::String m_seller;
    bool m_sellerHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
