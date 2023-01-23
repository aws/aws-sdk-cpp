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
    AWS_OUTPOSTS_API LineItemAssetInformation();
    AWS_OUTPOSTS_API LineItemAssetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API LineItemAssetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the asset. </p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p> The ID of the asset. </p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p> The ID of the asset. </p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p> The ID of the asset. </p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p> The ID of the asset. </p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p> The ID of the asset. </p>
     */
    inline LineItemAssetInformation& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p> The ID of the asset. </p>
     */
    inline LineItemAssetInformation& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the asset. </p>
     */
    inline LineItemAssetInformation& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMacAddressList() const{ return m_macAddressList; }

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline bool MacAddressListHasBeenSet() const { return m_macAddressListHasBeenSet; }

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline void SetMacAddressList(const Aws::Vector<Aws::String>& value) { m_macAddressListHasBeenSet = true; m_macAddressList = value; }

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline void SetMacAddressList(Aws::Vector<Aws::String>&& value) { m_macAddressListHasBeenSet = true; m_macAddressList = std::move(value); }

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline LineItemAssetInformation& WithMacAddressList(const Aws::Vector<Aws::String>& value) { SetMacAddressList(value); return *this;}

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline LineItemAssetInformation& WithMacAddressList(Aws::Vector<Aws::String>&& value) { SetMacAddressList(std::move(value)); return *this;}

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline LineItemAssetInformation& AddMacAddressList(const Aws::String& value) { m_macAddressListHasBeenSet = true; m_macAddressList.push_back(value); return *this; }

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline LineItemAssetInformation& AddMacAddressList(Aws::String&& value) { m_macAddressListHasBeenSet = true; m_macAddressList.push_back(std::move(value)); return *this; }

    /**
     * <p> The MAC addresses of the asset. </p>
     */
    inline LineItemAssetInformation& AddMacAddressList(const char* value) { m_macAddressListHasBeenSet = true; m_macAddressList.push_back(value); return *this; }

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_macAddressList;
    bool m_macAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
