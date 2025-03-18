/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Duration.h>
#include <aws/pinpoint/model/RecencyType.h>
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
   * <p>Specifies criteria for including or excluding endpoints from a segment based
   * on how recently an endpoint was active.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RecencyDimension">AWS
   * API Reference</a></p>
   */
  class RecencyDimension
  {
  public:
    AWS_PINPOINT_API RecencyDimension() = default;
    AWS_PINPOINT_API RecencyDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RecencyDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The duration to use when determining whether an endpoint is active or
     * inactive.</p>
     */
    inline Duration GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(Duration value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RecencyDimension& WithDuration(Duration value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of recency dimension to use for the segment. Valid values are:
     * ACTIVE, endpoints that were active within the specified duration are included in
     * the segment; and, INACTIVE, endpoints that weren't active within the specified
     * duration are included in the segment.</p>
     */
    inline RecencyType GetRecencyType() const { return m_recencyType; }
    inline bool RecencyTypeHasBeenSet() const { return m_recencyTypeHasBeenSet; }
    inline void SetRecencyType(RecencyType value) { m_recencyTypeHasBeenSet = true; m_recencyType = value; }
    inline RecencyDimension& WithRecencyType(RecencyType value) { SetRecencyType(value); return *this;}
    ///@}
  private:

    Duration m_duration{Duration::NOT_SET};
    bool m_durationHasBeenSet = false;

    RecencyType m_recencyType{RecencyType::NOT_SET};
    bool m_recencyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
