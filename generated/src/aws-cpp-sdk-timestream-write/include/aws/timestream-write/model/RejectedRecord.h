/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> Represents records that were not successfully inserted into Timestream due
   * to data validation issues that must be resolved before reinserting time-series
   * data into the system. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/RejectedRecord">AWS
   * API Reference</a></p>
   */
  class RejectedRecord
  {
  public:
    AWS_TIMESTREAMWRITE_API RejectedRecord() = default;
    AWS_TIMESTREAMWRITE_API RejectedRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API RejectedRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The index of the record in the input request for WriteRecords. Indexes begin
     * with 0. </p>
     */
    inline int GetRecordIndex() const { return m_recordIndex; }
    inline bool RecordIndexHasBeenSet() const { return m_recordIndexHasBeenSet; }
    inline void SetRecordIndex(int value) { m_recordIndexHasBeenSet = true; m_recordIndex = value; }
    inline RejectedRecord& WithRecordIndex(int value) { SetRecordIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason why a record was not successfully inserted into Timestream.
     * Possible causes of failure include: </p> <ul> <li> <p>Records with duplicate
     * data where there are multiple records with the same dimensions, timestamps, and
     * measure names but: </p> <ul> <li> <p>Measure values are different</p> </li> <li>
     * <p>Version is not present in the request, <i>or</i> the value of version in the
     * new record is equal to or lower than the existing value</p> </li> </ul> <p>If
     * Timestream rejects data for this case, the <code>ExistingVersion</code> field in
     * the <code>RejectedRecords</code> response will indicate the current record’s
     * version. To force an update, you can resend the request with a version for the
     * record set to a value greater than the <code>ExistingVersion</code>.</p> </li>
     * <li> <p> Records with timestamps that lie outside the retention duration of the
     * memory store. </p>  <p>When the retention window is updated, you will
     * receive a <code>RejectedRecords</code> exception if you immediately try to
     * ingest data within the new window. To avoid a <code>RejectedRecords</code>
     * exception, wait until the duration of the new window to ingest new data. For
     * further information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/best-practices.html#configuration">
     * Best Practices for Configuring Timestream</a> and <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">the
     * explanation of how storage works in Timestream</a>.</p>  </li> <li> <p>
     * Records with dimensions or measures that exceed the Timestream defined limits.
     * </p> </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
     * Management</a> in the Timestream Developer Guide. </p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    RejectedRecord& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The existing version of the record. This value is populated in scenarios
     * where an identical record exists with a higher version than the version in the
     * write request.</p>
     */
    inline long long GetExistingVersion() const { return m_existingVersion; }
    inline bool ExistingVersionHasBeenSet() const { return m_existingVersionHasBeenSet; }
    inline void SetExistingVersion(long long value) { m_existingVersionHasBeenSet = true; m_existingVersion = value; }
    inline RejectedRecord& WithExistingVersion(long long value) { SetExistingVersion(value); return *this;}
    ///@}
  private:

    int m_recordIndex{0};
    bool m_recordIndexHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    long long m_existingVersion{0};
    bool m_existingVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
