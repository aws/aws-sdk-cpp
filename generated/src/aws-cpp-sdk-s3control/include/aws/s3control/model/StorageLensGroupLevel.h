/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/StorageLensGroupLevelSelectionCriteria.h>
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
   * <p> Specifies the Storage Lens groups to include in the Storage Lens group
   * aggregation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensGroupLevel">AWS
   * API Reference</a></p>
   */
  class StorageLensGroupLevel
  {
  public:
    AWS_S3CONTROL_API StorageLensGroupLevel();
    AWS_S3CONTROL_API StorageLensGroupLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
     * Lens group aggregation. If this value is left null, then all Storage Lens groups
     * are selected. </p>
     */
    inline const StorageLensGroupLevelSelectionCriteria& GetSelectionCriteria() const{ return m_selectionCriteria; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
     * Lens group aggregation. If this value is left null, then all Storage Lens groups
     * are selected. </p>
     */
    inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
     * Lens group aggregation. If this value is left null, then all Storage Lens groups
     * are selected. </p>
     */
    inline void SetSelectionCriteria(const StorageLensGroupLevelSelectionCriteria& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = value; }

    /**
     * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
     * Lens group aggregation. If this value is left null, then all Storage Lens groups
     * are selected. </p>
     */
    inline void SetSelectionCriteria(StorageLensGroupLevelSelectionCriteria&& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = std::move(value); }

    /**
     * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
     * Lens group aggregation. If this value is left null, then all Storage Lens groups
     * are selected. </p>
     */
    inline StorageLensGroupLevel& WithSelectionCriteria(const StorageLensGroupLevelSelectionCriteria& value) { SetSelectionCriteria(value); return *this;}

    /**
     * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
     * Lens group aggregation. If this value is left null, then all Storage Lens groups
     * are selected. </p>
     */
    inline StorageLensGroupLevel& WithSelectionCriteria(StorageLensGroupLevelSelectionCriteria&& value) { SetSelectionCriteria(std::move(value)); return *this;}

  private:

    StorageLensGroupLevelSelectionCriteria m_selectionCriteria;
    bool m_selectionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
