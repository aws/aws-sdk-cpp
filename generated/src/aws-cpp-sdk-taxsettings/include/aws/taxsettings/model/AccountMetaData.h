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
    AWS_TAXSETTINGS_API AccountMetaData();
    AWS_TAXSETTINGS_API AccountMetaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API AccountMetaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services accounts name. </p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }
    inline AccountMetaData& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}
    inline AccountMetaData& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}
    inline AccountMetaData& WithAccountName(const char* value) { SetAccountName(value); return *this;}
    ///@}

    ///@{
    
    inline const Address& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline AccountMetaData& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline AccountMetaData& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Address roles associated with the account containing country code
     * information. </p>
     */
    inline const Aws::Map<AddressRoleType, Jurisdiction>& GetAddressRoleMap() const{ return m_addressRoleMap; }
    inline bool AddressRoleMapHasBeenSet() const { return m_addressRoleMapHasBeenSet; }
    inline void SetAddressRoleMap(const Aws::Map<AddressRoleType, Jurisdiction>& value) { m_addressRoleMapHasBeenSet = true; m_addressRoleMap = value; }
    inline void SetAddressRoleMap(Aws::Map<AddressRoleType, Jurisdiction>&& value) { m_addressRoleMapHasBeenSet = true; m_addressRoleMap = std::move(value); }
    inline AccountMetaData& WithAddressRoleMap(const Aws::Map<AddressRoleType, Jurisdiction>& value) { SetAddressRoleMap(value); return *this;}
    inline AccountMetaData& WithAddressRoleMap(Aws::Map<AddressRoleType, Jurisdiction>&& value) { SetAddressRoleMap(std::move(value)); return *this;}
    inline AccountMetaData& AddAddressRoleMap(const AddressRoleType& key, const Jurisdiction& value) { m_addressRoleMapHasBeenSet = true; m_addressRoleMap.emplace(key, value); return *this; }
    inline AccountMetaData& AddAddressRoleMap(AddressRoleType&& key, const Jurisdiction& value) { m_addressRoleMapHasBeenSet = true; m_addressRoleMap.emplace(std::move(key), value); return *this; }
    inline AccountMetaData& AddAddressRoleMap(const AddressRoleType& key, Jurisdiction&& value) { m_addressRoleMapHasBeenSet = true; m_addressRoleMap.emplace(key, std::move(value)); return *this; }
    inline AccountMetaData& AddAddressRoleMap(AddressRoleType&& key, Jurisdiction&& value) { m_addressRoleMapHasBeenSet = true; m_addressRoleMap.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of address associated with the legal profile. </p>
     */
    inline const AddressRoleType& GetAddressType() const{ return m_addressType; }
    inline bool AddressTypeHasBeenSet() const { return m_addressTypeHasBeenSet; }
    inline void SetAddressType(const AddressRoleType& value) { m_addressTypeHasBeenSet = true; m_addressType = value; }
    inline void SetAddressType(AddressRoleType&& value) { m_addressTypeHasBeenSet = true; m_addressType = std::move(value); }
    inline AccountMetaData& WithAddressType(const AddressRoleType& value) { SetAddressType(value); return *this;}
    inline AccountMetaData& WithAddressType(AddressRoleType&& value) { SetAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Seller information associated with the account. </p>
     */
    inline const Aws::String& GetSeller() const{ return m_seller; }
    inline bool SellerHasBeenSet() const { return m_sellerHasBeenSet; }
    inline void SetSeller(const Aws::String& value) { m_sellerHasBeenSet = true; m_seller = value; }
    inline void SetSeller(Aws::String&& value) { m_sellerHasBeenSet = true; m_seller = std::move(value); }
    inline void SetSeller(const char* value) { m_sellerHasBeenSet = true; m_seller.assign(value); }
    inline AccountMetaData& WithSeller(const Aws::String& value) { SetSeller(value); return *this;}
    inline AccountMetaData& WithSeller(Aws::String&& value) { SetSeller(std::move(value)); return *this;}
    inline AccountMetaData& WithSeller(const char* value) { SetSeller(value); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::Map<AddressRoleType, Jurisdiction> m_addressRoleMap;
    bool m_addressRoleMapHasBeenSet = false;

    AddressRoleType m_addressType;
    bool m_addressTypeHasBeenSet = false;

    Aws::String m_seller;
    bool m_sellerHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
