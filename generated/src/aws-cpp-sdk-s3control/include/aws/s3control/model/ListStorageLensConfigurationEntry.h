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
    AWS_S3CONTROL_API ListStorageLensConfigurationEntry();
    AWS_S3CONTROL_API ListStorageLensConfigurationEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListStorageLensConfigurationEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline ListStorageLensConfigurationEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline ListStorageLensConfigurationEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A container for the S3 Storage Lens configuration ID.</p>
     */
    inline ListStorageLensConfigurationEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline const Aws::String& GetStorageLensArn() const{ return m_storageLensArn; }

    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline bool StorageLensArnHasBeenSet() const { return m_storageLensArnHasBeenSet; }

    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline void SetStorageLensArn(const Aws::String& value) { m_storageLensArnHasBeenSet = true; m_storageLensArn = value; }

    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline void SetStorageLensArn(Aws::String&& value) { m_storageLensArnHasBeenSet = true; m_storageLensArn = std::move(value); }

    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline void SetStorageLensArn(const char* value) { m_storageLensArnHasBeenSet = true; m_storageLensArn.assign(value); }

    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline ListStorageLensConfigurationEntry& WithStorageLensArn(const Aws::String& value) { SetStorageLensArn(value); return *this;}

    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline ListStorageLensConfigurationEntry& WithStorageLensArn(Aws::String&& value) { SetStorageLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the S3 Storage Lens configuration. This property is read-only.</p>
     */
    inline ListStorageLensConfigurationEntry& WithStorageLensArn(const char* value) { SetStorageLensArn(value); return *this;}


    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline ListStorageLensConfigurationEntry& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline ListStorageLensConfigurationEntry& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>A container for the S3 Storage Lens home Region. Your metrics data is stored
     * and retained in your designated S3 Storage Lens home Region.</p>
     */
    inline ListStorageLensConfigurationEntry& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled. This
     * property is required.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled. This
     * property is required.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled. This
     * property is required.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled. This
     * property is required.</p>
     */
    inline ListStorageLensConfigurationEntry& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_storageLensArn;
    bool m_storageLensArnHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
