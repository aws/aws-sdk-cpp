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
    AWS_S3CONTROL_API ListStorageLensGroupEntry() = default;
    AWS_S3CONTROL_API ListStorageLensGroupEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListStorageLensGroupEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Contains the name of the Storage Lens group that exists in the specified
     * home Region. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListStorageLensGroupEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the Amazon Resource Name (ARN) of the Storage Lens group. This
     * property is read-only. </p>
     */
    inline const Aws::String& GetStorageLensGroupArn() const { return m_storageLensGroupArn; }
    inline bool StorageLensGroupArnHasBeenSet() const { return m_storageLensGroupArnHasBeenSet; }
    template<typename StorageLensGroupArnT = Aws::String>
    void SetStorageLensGroupArn(StorageLensGroupArnT&& value) { m_storageLensGroupArnHasBeenSet = true; m_storageLensGroupArn = std::forward<StorageLensGroupArnT>(value); }
    template<typename StorageLensGroupArnT = Aws::String>
    ListStorageLensGroupEntry& WithStorageLensGroupArn(StorageLensGroupArnT&& value) { SetStorageLensGroupArn(std::forward<StorageLensGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the Amazon Web Services Region where the Storage Lens group was
     * created. </p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    ListStorageLensGroupEntry& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}
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
