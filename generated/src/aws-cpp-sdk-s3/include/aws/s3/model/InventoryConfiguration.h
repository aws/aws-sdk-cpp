/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/InventoryDestination.h>
#include <aws/s3/model/InventoryFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/InventoryIncludedObjectVersions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/InventorySchedule.h>
#include <aws/s3/model/InventoryOptionalField.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies the inventory configuration for an Amazon S3 bucket. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTBucketGETInventoryConfig.html">GET
   * Bucket inventory</a> in the <i>Amazon S3 API Reference</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InventoryConfiguration">AWS
   * API Reference</a></p>
   */
  class InventoryConfiguration
  {
  public:
    AWS_S3_API InventoryConfiguration() = default;
    AWS_S3_API InventoryConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API InventoryConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Contains information about where to publish the inventory results.</p>
     */
    inline const InventoryDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = InventoryDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = InventoryDestination>
    InventoryConfiguration& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the inventory is enabled or disabled. If set to
     * <code>True</code>, an inventory list is generated. If set to <code>False</code>,
     * no inventory list is generated.</p>
     */
    inline bool GetIsEnabled() const { return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline InventoryConfiguration& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an inventory filter. The inventory only includes objects that meet
     * the filter's criteria.</p>
     */
    inline const InventoryFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = InventoryFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = InventoryFilter>
    InventoryConfiguration& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID used to identify the inventory configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InventoryConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object versions to include in the inventory list. If set to <code>All</code>,
     * the list includes all the object versions, which adds the version-related fields
     * <code>VersionId</code>, <code>IsLatest</code>, and <code>DeleteMarker</code> to
     * the list. If set to <code>Current</code>, the list does not contain these
     * version-related fields.</p>
     */
    inline InventoryIncludedObjectVersions GetIncludedObjectVersions() const { return m_includedObjectVersions; }
    inline bool IncludedObjectVersionsHasBeenSet() const { return m_includedObjectVersionsHasBeenSet; }
    inline void SetIncludedObjectVersions(InventoryIncludedObjectVersions value) { m_includedObjectVersionsHasBeenSet = true; m_includedObjectVersions = value; }
    inline InventoryConfiguration& WithIncludedObjectVersions(InventoryIncludedObjectVersions value) { SetIncludedObjectVersions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the optional fields that are included in the inventory results.</p>
     */
    inline const Aws::Vector<InventoryOptionalField>& GetOptionalFields() const { return m_optionalFields; }
    inline bool OptionalFieldsHasBeenSet() const { return m_optionalFieldsHasBeenSet; }
    template<typename OptionalFieldsT = Aws::Vector<InventoryOptionalField>>
    void SetOptionalFields(OptionalFieldsT&& value) { m_optionalFieldsHasBeenSet = true; m_optionalFields = std::forward<OptionalFieldsT>(value); }
    template<typename OptionalFieldsT = Aws::Vector<InventoryOptionalField>>
    InventoryConfiguration& WithOptionalFields(OptionalFieldsT&& value) { SetOptionalFields(std::forward<OptionalFieldsT>(value)); return *this;}
    inline InventoryConfiguration& AddOptionalFields(InventoryOptionalField value) { m_optionalFieldsHasBeenSet = true; m_optionalFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the schedule for generating inventory results.</p>
     */
    inline const InventorySchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = InventorySchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = InventorySchedule>
    InventoryConfiguration& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}
  private:

    InventoryDestination m_destination;
    bool m_destinationHasBeenSet = false;

    bool m_isEnabled{false};
    bool m_isEnabledHasBeenSet = false;

    InventoryFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    InventoryIncludedObjectVersions m_includedObjectVersions{InventoryIncludedObjectVersions::NOT_SET};
    bool m_includedObjectVersionsHasBeenSet = false;

    Aws::Vector<InventoryOptionalField> m_optionalFields;
    bool m_optionalFieldsHasBeenSet = false;

    InventorySchedule m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
