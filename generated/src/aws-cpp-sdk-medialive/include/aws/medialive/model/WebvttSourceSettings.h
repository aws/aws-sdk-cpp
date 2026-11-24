/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Webvtt Source Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/WebvttSourceSettings">AWS
 * API Reference</a></p>
 */
class WebvttSourceSettings {
 public:
  AWS_MEDIALIVE_API WebvttSourceSettings() = default;
  AWS_MEDIALIVE_API WebvttSourceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API WebvttSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Optional. The "GROUP-ID" attribute of the #EXT-X-MEDIA subtitle rendition to use
   * from the HLS source. Specify it
together with name; the pair must exactly match
   * one rendition, otherwise this caption selector produces no
captions. If neither
   * groupId nor name is specified, MediaLive selects the rendition whose LANGUAGE
   * matches the
caption selector's language code (case-insensitive), then the
   * DEFAULT=YES rendition, then the first subtitle
rendition listed in the master
   * playlist.
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  WebvttSourceSettings& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Optional. The "NAME" attribute of the #EXT-X-MEDIA subtitle rendition to use
   * from the HLS source. Specify it
together with groupId; the pair must exactly
   * match one rendition, otherwise this caption selector produces no
captions. If
   * neither groupId nor name is specified, MediaLive selects the rendition whose
   * LANGUAGE matches the
caption selector's language code (case-insensitive), then
   * the DEFAULT=YES rendition, then the first subtitle
rendition listed in the
   * master playlist.
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  WebvttSourceSettings& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groupId;

  Aws::String m_name;
  bool m_groupIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
