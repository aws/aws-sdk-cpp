/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/WaveHealthStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/WaveProgressStatus.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Wave aggregated status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/WaveAggregatedStatus">AWS
   * API Reference</a></p>
   */
  class WaveAggregatedStatus
  {
  public:
    AWS_MGN_API WaveAggregatedStatus();
    AWS_MGN_API WaveAggregatedStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API WaveAggregatedStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Wave aggregated status health status.</p>
     */
    inline const WaveHealthStatus& GetHealthStatus() const{ return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(const WaveHealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline void SetHealthStatus(WaveHealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }
    inline WaveAggregatedStatus& WithHealthStatus(const WaveHealthStatus& value) { SetHealthStatus(value); return *this;}
    inline WaveAggregatedStatus& WithHealthStatus(WaveHealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave aggregated status last update dateTime.</p>
     */
    inline const Aws::String& GetLastUpdateDateTime() const{ return m_lastUpdateDateTime; }
    inline bool LastUpdateDateTimeHasBeenSet() const { return m_lastUpdateDateTimeHasBeenSet; }
    inline void SetLastUpdateDateTime(const Aws::String& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = value; }
    inline void SetLastUpdateDateTime(Aws::String&& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = std::move(value); }
    inline void SetLastUpdateDateTime(const char* value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime.assign(value); }
    inline WaveAggregatedStatus& WithLastUpdateDateTime(const Aws::String& value) { SetLastUpdateDateTime(value); return *this;}
    inline WaveAggregatedStatus& WithLastUpdateDateTime(Aws::String&& value) { SetLastUpdateDateTime(std::move(value)); return *this;}
    inline WaveAggregatedStatus& WithLastUpdateDateTime(const char* value) { SetLastUpdateDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave aggregated status progress status.</p>
     */
    inline const WaveProgressStatus& GetProgressStatus() const{ return m_progressStatus; }
    inline bool ProgressStatusHasBeenSet() const { return m_progressStatusHasBeenSet; }
    inline void SetProgressStatus(const WaveProgressStatus& value) { m_progressStatusHasBeenSet = true; m_progressStatus = value; }
    inline void SetProgressStatus(WaveProgressStatus&& value) { m_progressStatusHasBeenSet = true; m_progressStatus = std::move(value); }
    inline WaveAggregatedStatus& WithProgressStatus(const WaveProgressStatus& value) { SetProgressStatus(value); return *this;}
    inline WaveAggregatedStatus& WithProgressStatus(WaveProgressStatus&& value) { SetProgressStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DateTime marking when the first source server in the wave started
     * replication.</p>
     */
    inline const Aws::String& GetReplicationStartedDateTime() const{ return m_replicationStartedDateTime; }
    inline bool ReplicationStartedDateTimeHasBeenSet() const { return m_replicationStartedDateTimeHasBeenSet; }
    inline void SetReplicationStartedDateTime(const Aws::String& value) { m_replicationStartedDateTimeHasBeenSet = true; m_replicationStartedDateTime = value; }
    inline void SetReplicationStartedDateTime(Aws::String&& value) { m_replicationStartedDateTimeHasBeenSet = true; m_replicationStartedDateTime = std::move(value); }
    inline void SetReplicationStartedDateTime(const char* value) { m_replicationStartedDateTimeHasBeenSet = true; m_replicationStartedDateTime.assign(value); }
    inline WaveAggregatedStatus& WithReplicationStartedDateTime(const Aws::String& value) { SetReplicationStartedDateTime(value); return *this;}
    inline WaveAggregatedStatus& WithReplicationStartedDateTime(Aws::String&& value) { SetReplicationStartedDateTime(std::move(value)); return *this;}
    inline WaveAggregatedStatus& WithReplicationStartedDateTime(const char* value) { SetReplicationStartedDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave aggregated status total applications amount.</p>
     */
    inline long long GetTotalApplications() const{ return m_totalApplications; }
    inline bool TotalApplicationsHasBeenSet() const { return m_totalApplicationsHasBeenSet; }
    inline void SetTotalApplications(long long value) { m_totalApplicationsHasBeenSet = true; m_totalApplications = value; }
    inline WaveAggregatedStatus& WithTotalApplications(long long value) { SetTotalApplications(value); return *this;}
    ///@}
  private:

    WaveHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_lastUpdateDateTime;
    bool m_lastUpdateDateTimeHasBeenSet = false;

    WaveProgressStatus m_progressStatus;
    bool m_progressStatusHasBeenSet = false;

    Aws::String m_replicationStartedDateTime;
    bool m_replicationStartedDateTimeHasBeenSet = false;

    long long m_totalApplications;
    bool m_totalApplicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
