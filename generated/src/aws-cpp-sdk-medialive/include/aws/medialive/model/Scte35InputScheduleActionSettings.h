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
    AWS_MEDIALIVE_API Scte35InputScheduleActionSettings();
    AWS_MEDIALIVE_API Scte35InputScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35InputScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline const Aws::String& GetInputAttachmentNameReference() const{ return m_inputAttachmentNameReference; }

    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline bool InputAttachmentNameReferenceHasBeenSet() const { return m_inputAttachmentNameReferenceHasBeenSet; }

    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline void SetInputAttachmentNameReference(const Aws::String& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = value; }

    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline void SetInputAttachmentNameReference(Aws::String&& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = std::move(value); }

    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline void SetInputAttachmentNameReference(const char* value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference.assign(value); }

    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline Scte35InputScheduleActionSettings& WithInputAttachmentNameReference(const Aws::String& value) { SetInputAttachmentNameReference(value); return *this;}

    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline Scte35InputScheduleActionSettings& WithInputAttachmentNameReference(Aws::String&& value) { SetInputAttachmentNameReference(std::move(value)); return *this;}

    /**
     * In fixed mode, enter the name of the input attachment that you want to use as a
     * SCTE-35 input. (Don't enter the ID of the input.)"
     */
    inline Scte35InputScheduleActionSettings& WithInputAttachmentNameReference(const char* value) { SetInputAttachmentNameReference(value); return *this;}


    /**
     * Whether the SCTE-35 input should be the active input or a fixed input.
     */
    inline const Scte35InputMode& GetMode() const{ return m_mode; }

    /**
     * Whether the SCTE-35 input should be the active input or a fixed input.
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * Whether the SCTE-35 input should be the active input or a fixed input.
     */
    inline void SetMode(const Scte35InputMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * Whether the SCTE-35 input should be the active input or a fixed input.
     */
    inline void SetMode(Scte35InputMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * Whether the SCTE-35 input should be the active input or a fixed input.
     */
    inline Scte35InputScheduleActionSettings& WithMode(const Scte35InputMode& value) { SetMode(value); return *this;}

    /**
     * Whether the SCTE-35 input should be the active input or a fixed input.
     */
    inline Scte35InputScheduleActionSettings& WithMode(Scte35InputMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    Aws::String m_inputAttachmentNameReference;
    bool m_inputAttachmentNameReferenceHasBeenSet = false;

    Scte35InputMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
