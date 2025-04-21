/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration that tells Elemental MediaTailor how to spread out requests
   * to the ad decision server (ADS). Instead of sending ADS requests for all
   * sessions at the same time, MediaTailor spreads the requests across the amount of
   * time specified in the retrieval window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TrafficShapingRetrievalWindow">AWS
   * API Reference</a></p>
   */
  class TrafficShapingRetrievalWindow
  {
  public:
    AWS_MEDIATAILOR_API TrafficShapingRetrievalWindow() = default;
    AWS_MEDIATAILOR_API TrafficShapingRetrievalWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API TrafficShapingRetrievalWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time, in seconds, that MediaTailor spreads prefetch requests to
     * the ADS. </p>
     */
    inline int GetRetrievalWindowDurationSeconds() const { return m_retrievalWindowDurationSeconds; }
    inline bool RetrievalWindowDurationSecondsHasBeenSet() const { return m_retrievalWindowDurationSecondsHasBeenSet; }
    inline void SetRetrievalWindowDurationSeconds(int value) { m_retrievalWindowDurationSecondsHasBeenSet = true; m_retrievalWindowDurationSeconds = value; }
    inline TrafficShapingRetrievalWindow& WithRetrievalWindowDurationSeconds(int value) { SetRetrievalWindowDurationSeconds(value); return *this;}
    ///@}
  private:

    int m_retrievalWindowDurationSeconds{0};
    bool m_retrievalWindowDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
