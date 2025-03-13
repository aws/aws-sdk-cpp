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
    AWS_SWF_API MarkerRecordedEventAttributes() = default;
    AWS_SWF_API MarkerRecordedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API MarkerRecordedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the marker.</p>
     */
    inline const Aws::String& GetMarkerName() const { return m_markerName; }
    inline bool MarkerNameHasBeenSet() const { return m_markerNameHasBeenSet; }
    template<typename MarkerNameT = Aws::String>
    void SetMarkerName(MarkerNameT&& value) { m_markerNameHasBeenSet = true; m_markerName = std::forward<MarkerNameT>(value); }
    template<typename MarkerNameT = Aws::String>
    MarkerRecordedEventAttributes& WithMarkerName(MarkerNameT&& value) { SetMarkerName(std::forward<MarkerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the marker.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    MarkerRecordedEventAttributes& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarker</code> decision that
     * requested this marker. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const { return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline MarkerRecordedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_markerName;
    bool m_markerNameHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    long long m_decisionTaskCompletedEventId{0};
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
