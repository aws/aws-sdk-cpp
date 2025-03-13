/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/Scte35InputMode.h>
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
   * Scte35Input Schedule Action Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35InputScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class Scte35InputScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API Scte35InputScheduleActionSettings() = default;
    AWS_MEDIALIVE_API Scte35InputScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35InputScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline const Aws::String& GetInputAttachmentNameReference() const { return m_inputAttachmentNameReference; }
    inline bool InputAttachmentNameReferenceHasBeenSet() const { return m_inputAttachmentNameReferenceHasBeenSet; }
    template<typename InputAttachmentNameReferenceT = Aws::String>
    void SetInputAttachmentNameReference(InputAttachmentNameReferenceT&& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = std::forward<InputAttachmentNameReferenceT>(value); }
    template<typename InputAttachmentNameReferenceT = Aws::String>
    Scte35InputScheduleActionSettings& WithInputAttachmentNameReference(InputAttachmentNameReferenceT&& value) { SetInputAttachmentNameReference(std::forward<InputAttachmentNameReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Whether the SCTE-35 input should be the active input or a fixed input.
     */
    inline Scte35InputMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(Scte35InputMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline Scte35InputScheduleActionSettings& WithMode(Scte35InputMode value) { SetMode(value); return *this;}
    ///@}
  private:

    Aws::String m_inputAttachmentNameReference;
    bool m_inputAttachmentNameReferenceHasBeenSet = false;

    Scte35InputMode m_mode{Scte35InputMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
