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
    AWS_OUTPOSTS_API AssetInfo();
    AWS_OUTPOSTS_API AssetInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API AssetInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the asset. </p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline AssetInfo& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AssetInfo& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AssetInfo& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rack ID of the asset. </p>
     */
    inline const Aws::String& GetRackId() const{ return m_rackId; }
    inline bool RackIdHasBeenSet() const { return m_rackIdHasBeenSet; }
    inline void SetRackId(const Aws::String& value) { m_rackIdHasBeenSet = true; m_rackId = value; }
    inline void SetRackId(Aws::String&& value) { m_rackIdHasBeenSet = true; m_rackId = std::move(value); }
    inline void SetRackId(const char* value) { m_rackIdHasBeenSet = true; m_rackId.assign(value); }
    inline AssetInfo& WithRackId(const Aws::String& value) { SetRackId(value); return *this;}
    inline AssetInfo& WithRackId(Aws::String&& value) { SetRackId(std::move(value)); return *this;}
    inline AssetInfo& WithRackId(const char* value) { SetRackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the asset. </p>
     */
    inline const AssetType& GetAssetType() const{ return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    inline void SetAssetType(const AssetType& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline void SetAssetType(AssetType&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }
    inline AssetInfo& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}
    inline AssetInfo& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about compute hardware assets. </p>
     */
    inline const ComputeAttributes& GetComputeAttributes() const{ return m_computeAttributes; }
    inline bool ComputeAttributesHasBeenSet() const { return m_computeAttributesHasBeenSet; }
    inline void SetComputeAttributes(const ComputeAttributes& value) { m_computeAttributesHasBeenSet = true; m_computeAttributes = value; }
    inline void SetComputeAttributes(ComputeAttributes&& value) { m_computeAttributesHasBeenSet = true; m_computeAttributes = std::move(value); }
    inline AssetInfo& WithComputeAttributes(const ComputeAttributes& value) { SetComputeAttributes(value); return *this;}
    inline AssetInfo& WithComputeAttributes(ComputeAttributes&& value) { SetComputeAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The position of an asset in a rack. </p>
     */
    inline const AssetLocation& GetAssetLocation() const{ return m_assetLocation; }
    inline bool AssetLocationHasBeenSet() const { return m_assetLocationHasBeenSet; }
    inline void SetAssetLocation(const AssetLocation& value) { m_assetLocationHasBeenSet = true; m_assetLocation = value; }
    inline void SetAssetLocation(AssetLocation&& value) { m_assetLocationHasBeenSet = true; m_assetLocation = std::move(value); }
    inline AssetInfo& WithAssetLocation(const AssetLocation& value) { SetAssetLocation(value); return *this;}
    inline AssetInfo& WithAssetLocation(AssetLocation&& value) { SetAssetLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_rackId;
    bool m_rackIdHasBeenSet = false;

    AssetType m_assetType;
    bool m_assetTypeHasBeenSet = false;

    ComputeAttributes m_computeAttributes;
    bool m_computeAttributesHasBeenSet = false;

    AssetLocation m_assetLocation;
    bool m_assetLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
