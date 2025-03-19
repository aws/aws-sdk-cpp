/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Part of <code>ListStorageLensConfigurationResult</code>. Each entry includes
   * the description of the S3 Storage Lens configuration, its home Region, whether
   * it is enabled, its Amazon Resource Name (ARN), and config ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListStorageLensConfigurationEntry">AWS
   * API Reference</a></p>
   */
  class ListStorageLensConfigurationEntry
  {
  public:
    AWS_S3CONTROL_API ListStorageLensConfigurationEntry() = default;
    AWS_S3CONTROL_API ListStorageLensConfigurationEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListStorageLensConfigurationEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListStorageLensConfigurationEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline const Aws::String& GetStorageLensArn() const { return m_storageLensArn; }
    inline bool StorageLensArnHasBeenSet() const { return m_storageLensArnHasBeenSet; }
    template<typename StorageLensArnT = Aws::String>
    void SetStorageLensArn(StorageLensArnT&& value) { m_storageLensArnHasBeenSet = true; m_storageLensArn = std::forward<StorageLensArnT>(value); }
    template<typename StorageLensArnT = Aws::String>
    ListStorageLensConfigurationEntry& WithStorageLensArn(StorageLensArnT&& value) { SetStorageLensArn(std::forward<StorageLensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    ListStorageLensConfigurationEntry& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled. This
     * property is required.</p>
     */
    inline bool GetIsEnabled() const { return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline ListStorageLensConfigurationEntry& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_storageLensArn;
    bool m_storageLensArnHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    bool m_isEnabled{false};
    bool m_isEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
