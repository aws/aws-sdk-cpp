/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>High level information for an SDK release. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ReleaseSummary">AWS
   * API Reference</a></p>
   */
  class ReleaseSummary
  {
  public:
    AWS_WAFV2_API ReleaseSummary() = default;
    AWS_WAFV2_API ReleaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ReleaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The release version. </p>
     */
    inline const Aws::String& GetReleaseVersion() const { return m_releaseVersion; }
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }
    template<typename ReleaseVersionT = Aws::String>
    void SetReleaseVersion(ReleaseVersionT&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::forward<ReleaseVersionT>(value); }
    template<typename ReleaseVersionT = Aws::String>
    ReleaseSummary& WithReleaseVersion(ReleaseVersionT&& value) { SetReleaseVersion(std::forward<ReleaseVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the release. </p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    ReleaseSummary& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
