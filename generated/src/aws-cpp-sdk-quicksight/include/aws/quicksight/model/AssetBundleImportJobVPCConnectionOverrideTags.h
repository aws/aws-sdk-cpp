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
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideTags();
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVPCConnectionIds() const{ return m_vPCConnectionIds; }

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline bool VPCConnectionIdsHasBeenSet() const { return m_vPCConnectionIdsHasBeenSet; }

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline void SetVPCConnectionIds(const Aws::Vector<Aws::String>& value) { m_vPCConnectionIdsHasBeenSet = true; m_vPCConnectionIds = value; }

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline void SetVPCConnectionIds(Aws::Vector<Aws::String>&& value) { m_vPCConnectionIdsHasBeenSet = true; m_vPCConnectionIds = std::move(value); }

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& WithVPCConnectionIds(const Aws::Vector<Aws::String>& value) { SetVPCConnectionIds(value); return *this;}

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& WithVPCConnectionIds(Aws::Vector<Aws::String>&& value) { SetVPCConnectionIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& AddVPCConnectionIds(const Aws::String& value) { m_vPCConnectionIdsHasBeenSet = true; m_vPCConnectionIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& AddVPCConnectionIds(Aws::String&& value) { m_vPCConnectionIdsHasBeenSet = true; m_vPCConnectionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC connection IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all VPC connections in this asset bundle.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& AddVPCConnectionIds(const char* value) { m_vPCConnectionIdsHasBeenSet = true; m_vPCConnectionIds.push_back(value); return *this; }


    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags for the VPC connections that you want to apply overrides
     * to.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideTags& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_vPCConnectionIds;
    bool m_vPCConnectionIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
