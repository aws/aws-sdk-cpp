/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Tag.h>
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
   * <p>Information for a release of the mobile SDK, including release notes and
   * tags.</p> <p>The mobile SDK is not generally available. Customers who have
   * access to the mobile SDK can use it to establish and manage WAF tokens for use
   * in HTTP(S) requests from a mobile device to WAF. For more information, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
   * client application integration</a> in the <i>WAF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/MobileSdkRelease">AWS
   * API Reference</a></p>
   */
  class MobileSdkRelease
  {
  public:
    AWS_WAFV2_API MobileSdkRelease();
    AWS_WAFV2_API MobileSdkRelease(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API MobileSdkRelease& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MobileSdkRelease& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}

    /**
     * <p>The release version. </p>
     */
    inline MobileSdkRelease& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}

    /**
     * <p>The release version. </p>
     */
    inline MobileSdkRelease& WithReleaseVersion(const char* value) { SetReleaseVersion(value); return *this;}


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
    inline MobileSdkRelease& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the release. </p>
     */
    inline MobileSdkRelease& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>Notes describing the release.</p>
     */
    inline const Aws::String& GetReleaseNotes() const{ return m_releaseNotes; }

    /**
     * <p>Notes describing the release.</p>
     */
    inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }

    /**
     * <p>Notes describing the release.</p>
     */
    inline void SetReleaseNotes(const Aws::String& value) { m_releaseNotesHasBeenSet = true; m_releaseNotes = value; }

    /**
     * <p>Notes describing the release.</p>
     */
    inline void SetReleaseNotes(Aws::String&& value) { m_releaseNotesHasBeenSet = true; m_releaseNotes = std::move(value); }

    /**
     * <p>Notes describing the release.</p>
     */
    inline void SetReleaseNotes(const char* value) { m_releaseNotesHasBeenSet = true; m_releaseNotes.assign(value); }

    /**
     * <p>Notes describing the release.</p>
     */
    inline MobileSdkRelease& WithReleaseNotes(const Aws::String& value) { SetReleaseNotes(value); return *this;}

    /**
     * <p>Notes describing the release.</p>
     */
    inline MobileSdkRelease& WithReleaseNotes(Aws::String&& value) { SetReleaseNotes(std::move(value)); return *this;}

    /**
     * <p>Notes describing the release.</p>
     */
    inline MobileSdkRelease& WithReleaseNotes(const char* value) { SetReleaseNotes(value); return *this;}


    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline MobileSdkRelease& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline MobileSdkRelease& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline MobileSdkRelease& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline MobileSdkRelease& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_releaseNotes;
    bool m_releaseNotesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
