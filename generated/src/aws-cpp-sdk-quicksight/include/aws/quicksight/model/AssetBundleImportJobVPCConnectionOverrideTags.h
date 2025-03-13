/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Tag.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An object that contains a list of tags to be assigned to a list of VPC
   * connection IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobVPCConnectionOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobVPCConnectionOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideTags() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVPCConnectionIds() const { return m_vPCConnectionIds; }
    inline bool VPCConnectionIdsHasBeenSet() const { return m_vPCConnectionIdsHasBeenSet; }
    template<typename VPCConnectionIdsT = Aws::Vector<Aws::String>>
    void SetVPCConnectionIds(VPCConnectionIdsT&& value) { m_vPCConnectionIdsHasBeenSet = true; m_vPCConnectionIds = std::forward<VPCConnectionIdsT>(value); }
    template<typename VPCConnectionIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobVPCConnectionOverrideTags& WithVPCConnectionIds(VPCConnectionIdsT&& value) { SetVPCConnectionIds(std::forward<VPCConnectionIdsT>(value)); return *this;}
    template<typename VPCConnectionIdsT = Aws::String>
    AssetBundleImportJobVPCConnectionOverrideTags& AddVPCConnectionIds(VPCConnectionIdsT&& value) { m_vPCConnectionIdsHasBeenSet = true; m_vPCConnectionIds.emplace_back(std::forward<VPCConnectionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssetBundleImportJobVPCConnectionOverrideTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssetBundleImportJobVPCConnectionOverrideTags& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_vPCConnectionIds;
    bool m_vPCConnectionIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
