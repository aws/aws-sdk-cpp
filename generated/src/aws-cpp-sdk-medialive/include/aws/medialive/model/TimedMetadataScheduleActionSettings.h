/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for the action to insert ID3 metadata (as a one-time action) in
   * applicable output groups.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TimedMetadataScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class TimedMetadataScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API TimedMetadataScheduleActionSettings() = default;
    AWS_MEDIALIVE_API TimedMetadataScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TimedMetadataScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Enter a base64 string that contains one or more fully formed ID3 tags.See the
     * ID3 specification: http://id3.org/id3v2.4.0-structure
     */
    inline const Aws::String& GetId3() const { return m_id3; }
    inline bool Id3HasBeenSet() const { return m_id3HasBeenSet; }
    template<typename Id3T = Aws::String>
    void SetId3(Id3T&& value) { m_id3HasBeenSet = true; m_id3 = std::forward<Id3T>(value); }
    template<typename Id3T = Aws::String>
    TimedMetadataScheduleActionSettings& WithId3(Id3T&& value) { SetId3(std::forward<Id3T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id3;
    bool m_id3HasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
