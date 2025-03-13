/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/SnapshotAttributeToSortBy.h>
#include <aws/redshift/model/SortByOrder.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a sorting entity</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SnapshotSortingEntity">AWS
   * API Reference</a></p>
   */
  class SnapshotSortingEntity
  {
  public:
    AWS_REDSHIFT_API SnapshotSortingEntity() = default;
    AWS_REDSHIFT_API SnapshotSortingEntity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API SnapshotSortingEntity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The category for sorting the snapshots.</p>
     */
    inline SnapshotAttributeToSortBy GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(SnapshotAttributeToSortBy value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline SnapshotSortingEntity& WithAttribute(SnapshotAttributeToSortBy value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order for listing the attributes.</p>
     */
    inline SortByOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortByOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SnapshotSortingEntity& WithSortOrder(SortByOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    SnapshotAttributeToSortBy m_attribute{SnapshotAttributeToSortBy::NOT_SET};
    bool m_attributeHasBeenSet = false;

    SortByOrder m_sortOrder{SortByOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
