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
    AWS_WAFV2_API MobileSdkRelease() = default;
    AWS_WAFV2_API MobileSdkRelease(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API MobileSdkRelease& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    MobileSdkRelease& WithReleaseVersion(ReleaseVersionT&& value) { SetReleaseVersion(std::forward<ReleaseVersionT>(value)); return *this;}
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
    MobileSdkRelease& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notes describing the release.</p>
     */
    inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
    inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }
    template<typename ReleaseNotesT = Aws::String>
    void SetReleaseNotes(ReleaseNotesT&& value) { m_releaseNotesHasBeenSet = true; m_releaseNotes = std::forward<ReleaseNotesT>(value); }
    template<typename ReleaseNotesT = Aws::String>
    MobileSdkRelease& WithReleaseNotes(ReleaseNotesT&& value) { SetReleaseNotes(std::forward<ReleaseNotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags that are associated with the release. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    MobileSdkRelease& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    MobileSdkRelease& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_releaseNotes;
    bool m_releaseNotesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
