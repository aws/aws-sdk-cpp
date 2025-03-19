/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_MEDIATAILOR_API AudienceMedia() = default;
    AWS_MEDIATAILOR_API AudienceMedia(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AudienceMedia& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Audience defined in AudienceMedia.</p>
     */
    inline const Aws::String& GetAudience() const { return m_audience; }
    inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }
    template<typename AudienceT = Aws::String>
    void SetAudience(AudienceT&& value) { m_audienceHasBeenSet = true; m_audience = std::forward<AudienceT>(value); }
    template<typename AudienceT = Aws::String>
    AudienceMedia& WithAudience(AudienceT&& value) { SetAudience(std::forward<AudienceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of AlternateMedia defined in AudienceMedia.</p>
     */
    inline const Aws::Vector<AlternateMedia>& GetAlternateMedia() const { return m_alternateMedia; }
    inline bool AlternateMediaHasBeenSet() const { return m_alternateMediaHasBeenSet; }
    template<typename AlternateMediaT = Aws::Vector<AlternateMedia>>
    void SetAlternateMedia(AlternateMediaT&& value) { m_alternateMediaHasBeenSet = true; m_alternateMedia = std::forward<AlternateMediaT>(value); }
    template<typename AlternateMediaT = Aws::Vector<AlternateMedia>>
    AudienceMedia& WithAlternateMedia(AlternateMediaT&& value) { SetAlternateMedia(std::forward<AlternateMediaT>(value)); return *this;}
    template<typename AlternateMediaT = AlternateMedia>
    AudienceMedia& AddAlternateMedia(AlternateMediaT&& value) { m_alternateMediaHasBeenSet = true; m_alternateMedia.emplace_back(std::forward<AlternateMediaT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_audience;
    bool m_audienceHasBeenSet = false;

    Aws::Vector<AlternateMedia> m_alternateMedia;
    bool m_alternateMediaHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
