/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/RecencyDimension.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies dimension settings for including or excluding endpoints from a
   * segment based on how recently an endpoint was active.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentBehaviors">AWS
   * API Reference</a></p>
   */
  class SegmentBehaviors
  {
  public:
    AWS_PINPOINT_API SegmentBehaviors() = default;
    AWS_PINPOINT_API SegmentBehaviors(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentBehaviors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension settings that are based on how recently an endpoint was
     * active.</p>
     */
    inline const RecencyDimension& GetRecency() const { return m_recency; }
    inline bool RecencyHasBeenSet() const { return m_recencyHasBeenSet; }
    template<typename RecencyT = RecencyDimension>
    void SetRecency(RecencyT&& value) { m_recencyHasBeenSet = true; m_recency = std::forward<RecencyT>(value); }
    template<typename RecencyT = RecencyDimension>
    SegmentBehaviors& WithRecency(RecencyT&& value) { SetRecency(std::forward<RecencyT>(value)); return *this;}
    ///@}
  private:

    RecencyDimension m_recency;
    bool m_recencyHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
