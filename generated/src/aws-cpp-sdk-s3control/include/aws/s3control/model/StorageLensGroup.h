/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/StorageLensGroupFilter.h>
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
   * <p>A custom grouping of objects that include filters for prefixes, suffixes,
   * object tags, object size, or object age. You can create an S3 Storage Lens group
   * that includes a single filter or multiple filter conditions. To specify multiple
   * filter conditions, you use <code>AND</code> or <code>OR</code> logical
   * operators. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensGroup">AWS
   * API Reference</a></p>
   */
  class StorageLensGroup
  {
  public:
    AWS_S3CONTROL_API StorageLensGroup() = default;
    AWS_S3CONTROL_API StorageLensGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Contains the name of the Storage Lens group. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StorageLensGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the criteria for the Storage Lens group data that is displayed. For
     * multiple filter conditions, the <code>AND</code> or <code>OR</code> logical
     * operator is used.</p>
     */
    inline const StorageLensGroupFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = StorageLensGroupFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = StorageLensGroupFilter>
    StorageLensGroup& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
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
    StorageLensGroup& WithStorageLensGroupArn(StorageLensGroupArnT&& value) { SetStorageLensGroupArn(std::forward<StorageLensGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StorageLensGroupFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_storageLensGroupArn;
    bool m_storageLensGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
