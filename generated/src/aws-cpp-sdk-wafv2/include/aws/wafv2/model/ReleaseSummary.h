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
    AWS_WAFV2_API ReleaseSummary();
    AWS_WAFV2_API ReleaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ReleaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The release version. </p>
     */
    inline const Aws::String& GetReleaseVersion() const{ return m_releaseVersion; }

    /**
     * <p>The release version. </p>
     */
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }

    /**
     * <p>The release version. </p>
     */
    inline void SetReleaseVersion(const Aws::String& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = value; }

    /**
     * <p>The release version. </p>
     */
    inline void SetReleaseVersion(Aws::String&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::move(value); }

    /**
     * <p>The release version. </p>
     */
    inline void SetReleaseVersion(const char* value) { m_releaseVersionHasBeenSet = true; m_releaseVersion.assign(value); }

    /**
     * <p>The release version. </p>
     */
    inline ReleaseSummary& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}

    /**
     * <p>The release version. </p>
     */
    inline ReleaseSummary& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}

    /**
     * <p>The release version. </p>
     */
    inline ReleaseSummary& WithReleaseVersion(const char* value) { SetReleaseVersion(value); return *this;}


    /**
     * <p>The timestamp of the release. </p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the release. </p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the release. </p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the release. </p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the release. </p>
     */
    inline ReleaseSummary& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the release. </p>
     */
    inline ReleaseSummary& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
