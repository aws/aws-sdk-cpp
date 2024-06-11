/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>MarkerRecorded</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/MarkerRecordedEventAttributes">AWS
   * API Reference</a></p>
   */
  class MarkerRecordedEventAttributes
  {
  public:
    AWS_SWF_API MarkerRecordedEventAttributes();
    AWS_SWF_API MarkerRecordedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API MarkerRecordedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the marker.</p>
     */
    inline const Aws::String& GetMarkerName() const{ return m_markerName; }
    inline bool MarkerNameHasBeenSet() const { return m_markerNameHasBeenSet; }
    inline void SetMarkerName(const Aws::String& value) { m_markerNameHasBeenSet = true; m_markerName = value; }
    inline void SetMarkerName(Aws::String&& value) { m_markerNameHasBeenSet = true; m_markerName = std::move(value); }
    inline void SetMarkerName(const char* value) { m_markerNameHasBeenSet = true; m_markerName.assign(value); }
    inline MarkerRecordedEventAttributes& WithMarkerName(const Aws::String& value) { SetMarkerName(value); return *this;}
    inline MarkerRecordedEventAttributes& WithMarkerName(Aws::String&& value) { SetMarkerName(std::move(value)); return *this;}
    inline MarkerRecordedEventAttributes& WithMarkerName(const char* value) { SetMarkerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the marker.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }
    inline MarkerRecordedEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline MarkerRecordedEventAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline MarkerRecordedEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarker</code> decision that
     * requested this marker. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline MarkerRecordedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_markerName;
    bool m_markerNameHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
