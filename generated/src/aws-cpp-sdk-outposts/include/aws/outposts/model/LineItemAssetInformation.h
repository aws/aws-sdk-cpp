/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about a line item asset. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/LineItemAssetInformation">AWS
   * API Reference</a></p>
   */
  class LineItemAssetInformation
  {
  public:
    AWS_OUTPOSTS_API LineItemAssetInformation() = default;
    AWS_OUTPOSTS_API LineItemAssetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API LineItemAssetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the asset. An Outpost asset can be a single server within an
     * Outposts rack or an Outposts server configuration.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    LineItemAssetInformation& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMacAddressList() const { return m_macAddressList; }
    inline bool MacAddressListHasBeenSet() const { return m_macAddressListHasBeenSet; }
    template<typename MacAddressListT = Aws::Vector<Aws::String>>
    void SetMacAddressList(MacAddressListT&& value) { m_macAddressListHasBeenSet = true; m_macAddressList = std::forward<MacAddressListT>(value); }
    template<typename MacAddressListT = Aws::Vector<Aws::String>>
    LineItemAssetInformation& WithMacAddressList(MacAddressListT&& value) { SetMacAddressList(std::forward<MacAddressListT>(value)); return *this;}
    template<typename MacAddressListT = Aws::String>
    LineItemAssetInformation& AddMacAddressList(MacAddressListT&& value) { m_macAddressListHasBeenSet = true; m_macAddressList.emplace_back(std::forward<MacAddressListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_macAddressList;
    bool m_macAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
