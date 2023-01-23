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
    AWS_REDSHIFT_API SnapshotSortingEntity();
    AWS_REDSHIFT_API SnapshotSortingEntity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API SnapshotSortingEntity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The category for sorting the snapshots.</p>
     */
    inline const SnapshotAttributeToSortBy& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The category for sorting the snapshots.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The category for sorting the snapshots.</p>
     */
    inline void SetAttribute(const SnapshotAttributeToSortBy& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The category for sorting the snapshots.</p>
     */
    inline void SetAttribute(SnapshotAttributeToSortBy&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The category for sorting the snapshots.</p>
     */
    inline SnapshotSortingEntity& WithAttribute(const SnapshotAttributeToSortBy& value) { SetAttribute(value); return *this;}

    /**
     * <p>The category for sorting the snapshots.</p>
     */
    inline SnapshotSortingEntity& WithAttribute(SnapshotAttributeToSortBy&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The order for listing the attributes.</p>
     */
    inline const SortByOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order for listing the attributes.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order for listing the attributes.</p>
     */
    inline void SetSortOrder(const SortByOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order for listing the attributes.</p>
     */
    inline void SetSortOrder(SortByOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order for listing the attributes.</p>
     */
    inline SnapshotSortingEntity& WithSortOrder(const SortByOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order for listing the attributes.</p>
     */
    inline SnapshotSortingEntity& WithSortOrder(SortByOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    SnapshotAttributeToSortBy m_attribute;
    bool m_attributeHasBeenSet = false;

    SortByOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
