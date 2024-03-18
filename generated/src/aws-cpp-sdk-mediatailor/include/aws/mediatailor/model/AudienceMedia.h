/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/AlternateMedia.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>An AudienceMedia object contains an Audience and a list of
   * AlternateMedia.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AudienceMedia">AWS
   * API Reference</a></p>
   */
  class AudienceMedia
  {
  public:
    AWS_MEDIATAILOR_API AudienceMedia();
    AWS_MEDIATAILOR_API AudienceMedia(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AudienceMedia& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline const Aws::Vector<AlternateMedia>& GetAlternateMedia() const{ return m_alternateMedia; }

    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline bool AlternateMediaHasBeenSet() const { return m_alternateMediaHasBeenSet; }

    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline void SetAlternateMedia(const Aws::Vector<AlternateMedia>& value) { m_alternateMediaHasBeenSet = true; m_alternateMedia = value; }

    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline void SetAlternateMedia(Aws::Vector<AlternateMedia>&& value) { m_alternateMediaHasBeenSet = true; m_alternateMedia = std::move(value); }

    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline AudienceMedia& WithAlternateMedia(const Aws::Vector<AlternateMedia>& value) { SetAlternateMedia(value); return *this;}

    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline AudienceMedia& WithAlternateMedia(Aws::Vector<AlternateMedia>&& value) { SetAlternateMedia(std::move(value)); return *this;}

    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline AudienceMedia& AddAlternateMedia(const AlternateMedia& value) { m_alternateMediaHasBeenSet = true; m_alternateMedia.push_back(value); return *this; }

    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline AudienceMedia& AddAlternateMedia(AlternateMedia&& value) { m_alternateMediaHasBeenSet = true; m_alternateMedia.push_back(std::move(value)); return *this; }


    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline const Aws::String& GetAudience() const{ return m_audience; }

    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }

    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline void SetAudience(const Aws::String& value) { m_audienceHasBeenSet = true; m_audience = value; }

    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline void SetAudience(Aws::String&& value) { m_audienceHasBeenSet = true; m_audience = std::move(value); }

    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline void SetAudience(const char* value) { m_audienceHasBeenSet = true; m_audience.assign(value); }

    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline AudienceMedia& WithAudience(const Aws::String& value) { SetAudience(value); return *this;}

    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline AudienceMedia& WithAudience(Aws::String&& value) { SetAudience(std::move(value)); return *this;}

    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline AudienceMedia& WithAudience(const char* value) { SetAudience(value); return *this;}

  private:

    Aws::Vector<AlternateMedia> m_alternateMedia;
    bool m_alternateMediaHasBeenSet = false;

    Aws::String m_audience;
    bool m_audienceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
