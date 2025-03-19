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
    AWS_S3CONTROL_API StorageLensGroupLevel() = default;
    AWS_S3CONTROL_API StorageLensGroupLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
     * Lens group aggregation. If this value is left null, then all Storage Lens groups
     * are selected. </p>
     */
    inline const StorageLensGroupLevelSelectionCriteria& GetSelectionCriteria() const { return m_selectionCriteria; }
    inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }
    template<typename SelectionCriteriaT = StorageLensGroupLevelSelectionCriteria>
    void SetSelectionCriteria(SelectionCriteriaT&& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = std::forward<SelectionCriteriaT>(value); }
    template<typename SelectionCriteriaT = StorageLensGroupLevelSelectionCriteria>
    StorageLensGroupLevel& WithSelectionCriteria(SelectionCriteriaT&& value) { SetSelectionCriteria(std::forward<SelectionCriteriaT>(value)); return *this;}
    ///@}
  private:

    StorageLensGroupLevelSelectionCriteria m_selectionCriteria;
    bool m_selectionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
