/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
   * Lens group aggregation. You can only attach Storage Lens groups to your Storage
   * Lens dashboard if they're included in your Storage Lens group aggregation. If
   * this value is left null, then all Storage Lens groups are selected.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensGroupLevelSelectionCriteria">AWS
   * API Reference</a></p>
   */
  class StorageLensGroupLevelSelectionCriteria
  {
  public:
    AWS_S3CONTROL_API StorageLensGroupLevelSelectionCriteria();
    AWS_S3CONTROL_API StorageLensGroupLevelSelectionCriteria(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupLevelSelectionCriteria& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInclude() const{ return m_include; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline void SetInclude(const Aws::Vector<Aws::String>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline void SetInclude(Aws::Vector<Aws::String>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& WithInclude(const Aws::Vector<Aws::String>& value) { SetInclude(value); return *this;}

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& WithInclude(Aws::Vector<Aws::String>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& AddInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& AddInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& AddInclude(const char* value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }


    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExclude() const{ return m_exclude; }

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline void SetExclude(const Aws::Vector<Aws::String>& value) { m_excludeHasBeenSet = true; m_exclude = value; }

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline void SetExclude(Aws::Vector<Aws::String>&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& WithExclude(const Aws::Vector<Aws::String>& value) { SetExclude(value); return *this;}

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& WithExclude(Aws::Vector<Aws::String>&& value) { SetExclude(std::move(value)); return *this;}

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& AddExclude(const Aws::String& value) { m_excludeHasBeenSet = true; m_exclude.push_back(value); return *this; }

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& AddExclude(Aws::String&& value) { m_excludeHasBeenSet = true; m_exclude.push_back(std::move(value)); return *this; }

    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline StorageLensGroupLevelSelectionCriteria& AddExclude(const char* value) { m_excludeHasBeenSet = true; m_exclude.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_include;
    bool m_includeHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclude;
    bool m_excludeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
