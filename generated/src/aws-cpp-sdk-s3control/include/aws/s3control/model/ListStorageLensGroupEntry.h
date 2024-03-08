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
   * <p> Each entry contains a Storage Lens group that exists in the specified home
   * Region. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListStorageLensGroupEntry">AWS
   * API Reference</a></p>
   */
  class ListStorageLensGroupEntry
  {
  public:
    AWS_S3CONTROL_API ListStorageLensGroupEntry();
    AWS_S3CONTROL_API ListStorageLensGroupEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListStorageLensGroupEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline ListStorageLensGroupEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline ListStorageLensGroupEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline ListStorageLensGroupEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline const Aws::String& GetStorageLensGroupArn() const{ return m_storageLensGroupArn; }

    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline bool StorageLensGroupArnHasBeenSet() const { return m_storageLensGroupArnHasBeenSet; }

    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline void SetStorageLensGroupArn(const Aws::String& value) { m_storageLensGroupArnHasBeenSet = true; m_storageLensGroupArn = value; }

    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline void SetStorageLensGroupArn(Aws::String&& value) { m_storageLensGroupArnHasBeenSet = true; m_storageLensGroupArn = std::move(value); }

    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline void SetStorageLensGroupArn(const char* value) { m_storageLensGroupArnHasBeenSet = true; m_storageLensGroupArn.assign(value); }

    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline ListStorageLensGroupEntry& WithStorageLensGroupArn(const Aws::String& value) { SetStorageLensGroupArn(value); return *this;}

    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline ListStorageLensGroupEntry& WithStorageLensGroupArn(Aws::String&& value) { SetStorageLensGroupArn(std::move(value)); return *this;}

    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline ListStorageLensGroupEntry& WithStorageLensGroupArn(const char* value) { SetStorageLensGroupArn(value); return *this;}


    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline ListStorageLensGroupEntry& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline ListStorageLensGroupEntry& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline ListStorageLensGroupEntry& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_storageLensGroupArn;
    bool m_storageLensGroupArnHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
