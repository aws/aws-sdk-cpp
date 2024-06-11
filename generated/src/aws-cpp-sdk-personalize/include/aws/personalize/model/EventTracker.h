/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides information about an event tracker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/EventTracker">AWS
   * API Reference</a></p>
   */
  class EventTracker
  {
  public:
    AWS_PERSONALIZE_API EventTracker();
    AWS_PERSONALIZE_API EventTracker(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API EventTracker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the event tracker.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EventTracker& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EventTracker& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EventTracker& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline const Aws::String& GetEventTrackerArn() const{ return m_eventTrackerArn; }
    inline bool EventTrackerArnHasBeenSet() const { return m_eventTrackerArnHasBeenSet; }
    inline void SetEventTrackerArn(const Aws::String& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = value; }
    inline void SetEventTrackerArn(Aws::String&& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = std::move(value); }
    inline void SetEventTrackerArn(const char* value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn.assign(value); }
    inline EventTracker& WithEventTrackerArn(const Aws::String& value) { SetEventTrackerArn(value); return *this;}
    inline EventTracker& WithEventTrackerArn(Aws::String&& value) { SetEventTrackerArn(std::move(value)); return *this;}
    inline EventTracker& WithEventTrackerArn(const char* value) { SetEventTrackerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns the event tracker.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline EventTracker& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline EventTracker& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline EventTracker& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline const Aws::String& GetTrackingId() const{ return m_trackingId; }
    inline bool TrackingIdHasBeenSet() const { return m_trackingIdHasBeenSet; }
    inline void SetTrackingId(const Aws::String& value) { m_trackingIdHasBeenSet = true; m_trackingId = value; }
    inline void SetTrackingId(Aws::String&& value) { m_trackingIdHasBeenSet = true; m_trackingId = std::move(value); }
    inline void SetTrackingId(const char* value) { m_trackingIdHasBeenSet = true; m_trackingId.assign(value); }
    inline EventTracker& WithTrackingId(const Aws::String& value) { SetTrackingId(value); return *this;}
    inline EventTracker& WithTrackingId(Aws::String&& value) { SetTrackingId(std::move(value)); return *this;}
    inline EventTracker& WithTrackingId(const char* value) { SetTrackingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that receives the event
     * data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }
    inline EventTracker& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline EventTracker& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline EventTracker& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the event tracker.</p> <p>An event tracker can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline EventTracker& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline EventTracker& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline EventTracker& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the event tracker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline EventTracker& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline EventTracker& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the event tracker was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline EventTracker& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline EventTracker& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_eventTrackerArn;
    bool m_eventTrackerArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_trackingId;
    bool m_trackingIdHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
