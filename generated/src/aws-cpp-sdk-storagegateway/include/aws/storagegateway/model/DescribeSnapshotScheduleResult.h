/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class DescribeSnapshotScheduleResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleResult() = default;
    AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline const Aws::String& GetVolumeARN() const { return m_volumeARN; }
    template<typename VolumeARNT = Aws::String>
    void SetVolumeARN(VolumeARNT&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::forward<VolumeARNT>(value); }
    template<typename VolumeARNT = Aws::String>
    DescribeSnapshotScheduleResult& WithVolumeARN(VolumeARNT&& value) { SetVolumeARN(std::forward<VolumeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline int GetStartAt() const { return m_startAt; }
    inline void SetStartAt(int value) { m_startAtHasBeenSet = true; m_startAt = value; }
    inline DescribeSnapshotScheduleResult& WithStartAt(int value) { SetStartAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours between snapshots.</p>
     */
    inline int GetRecurrenceInHours() const { return m_recurrenceInHours; }
    inline void SetRecurrenceInHours(int value) { m_recurrenceInHoursHasBeenSet = true; m_recurrenceInHours = value; }
    inline DescribeSnapshotScheduleResult& WithRecurrenceInHours(int value) { SetRecurrenceInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeSnapshotScheduleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    DescribeSnapshotScheduleResult& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribeSnapshotScheduleResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribeSnapshotScheduleResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSnapshotScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    int m_startAt{0};
    bool m_startAtHasBeenSet = false;

    int m_recurrenceInHours{0};
    bool m_recurrenceInHoursHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
