/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>Represents a single asset file associated with a WhatsApp Flow, including a
 * presigned download URL.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaFlowAsset">AWS
 * API Reference</a></p>
 */
class MetaFlowAsset {
 public:
  AWS_SOCIALMESSAGING_API MetaFlowAsset() = default;
  AWS_SOCIALMESSAGING_API MetaFlowAsset(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API MetaFlowAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filename of the asset (for example, flow.json).</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MetaFlowAsset& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of asset. Currently the only supported value is FLOW_JSON.</p>
   */
  inline const Aws::String& GetAssetType() const { return m_assetType; }
  inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
  template <typename AssetTypeT = Aws::String>
  void SetAssetType(AssetTypeT&& value) {
    m_assetTypeHasBeenSet = true;
    m_assetType = std::forward<AssetTypeT>(value);
  }
  template <typename AssetTypeT = Aws::String>
  MetaFlowAsset& WithAssetType(AssetTypeT&& value) {
    SetAssetType(std::forward<AssetTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A presigned URL from Meta for downloading the asset. The URL expires after a
   * short period.</p>
   */
  inline const Aws::String& GetDownloadUrl() const { return m_downloadUrl; }
  inline bool DownloadUrlHasBeenSet() const { return m_downloadUrlHasBeenSet; }
  template <typename DownloadUrlT = Aws::String>
  void SetDownloadUrl(DownloadUrlT&& value) {
    m_downloadUrlHasBeenSet = true;
    m_downloadUrl = std::forward<DownloadUrlT>(value);
  }
  template <typename DownloadUrlT = Aws::String>
  MetaFlowAsset& WithDownloadUrl(DownloadUrlT&& value) {
    SetDownloadUrl(std::forward<DownloadUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_assetType;

  Aws::String m_downloadUrl;
  bool m_nameHasBeenSet = false;
  bool m_assetTypeHasBeenSet = false;
  bool m_downloadUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
