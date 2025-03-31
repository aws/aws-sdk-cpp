/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AssetType.h>
#include <aws/outposts/model/ComputeAttributes.h>
#include <aws/outposts/model/AssetLocation.h>
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
   * <p> Information about hardware assets. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/AssetInfo">AWS
   * API Reference</a></p>
   */
  class AssetInfo
  {
  public:
    AWS_OUTPOSTS_API AssetInfo() = default;
    AWS_OUTPOSTS_API AssetInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API AssetInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AssetInfo& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rack ID of the asset. </p>
     */
    inline const Aws::String& GetRackId() const { return m_rackId; }
    inline bool RackIdHasBeenSet() const { return m_rackIdHasBeenSet; }
    template<typename RackIdT = Aws::String>
    void SetRackId(RackIdT&& value) { m_rackIdHasBeenSet = true; m_rackId = std::forward<RackIdT>(value); }
    template<typename RackIdT = Aws::String>
    AssetInfo& WithRackId(RackIdT&& value) { SetRackId(std::forward<RackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the asset. </p>
     */
    inline AssetType GetAssetType() const { return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    inline void SetAssetType(AssetType value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline AssetInfo& WithAssetType(AssetType value) { SetAssetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about compute hardware assets. </p>
     */
    inline const ComputeAttributes& GetComputeAttributes() const { return m_computeAttributes; }
    inline bool ComputeAttributesHasBeenSet() const { return m_computeAttributesHasBeenSet; }
    template<typename ComputeAttributesT = ComputeAttributes>
    void SetComputeAttributes(ComputeAttributesT&& value) { m_computeAttributesHasBeenSet = true; m_computeAttributes = std::forward<ComputeAttributesT>(value); }
    template<typename ComputeAttributesT = ComputeAttributes>
    AssetInfo& WithComputeAttributes(ComputeAttributesT&& value) { SetComputeAttributes(std::forward<ComputeAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The position of an asset in a rack. </p>
     */
    inline const AssetLocation& GetAssetLocation() const { return m_assetLocation; }
    inline bool AssetLocationHasBeenSet() const { return m_assetLocationHasBeenSet; }
    template<typename AssetLocationT = AssetLocation>
    void SetAssetLocation(AssetLocationT&& value) { m_assetLocationHasBeenSet = true; m_assetLocation = std::forward<AssetLocationT>(value); }
    template<typename AssetLocationT = AssetLocation>
    AssetInfo& WithAssetLocation(AssetLocationT&& value) { SetAssetLocation(std::forward<AssetLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_rackId;
    bool m_rackIdHasBeenSet = false;

    AssetType m_assetType{AssetType::NOT_SET};
    bool m_assetTypeHasBeenSet = false;

    ComputeAttributes m_computeAttributes;
    bool m_computeAttributesHasBeenSet = false;

    AssetLocation m_assetLocation;
    bool m_assetLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
