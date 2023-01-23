/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/DolbyEProgramSelection.h>
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
   * Audio Dolby EDecode<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioDolbyEDecode">AWS
   * API Reference</a></p>
   */
  class AudioDolbyEDecode
  {
  public:
    AWS_MEDIALIVE_API AudioDolbyEDecode();
    AWS_MEDIALIVE_API AudioDolbyEDecode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioDolbyEDecode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Applies only to Dolby E. Enter the program ID (according to the metadata in the
     * audio) of the Dolby E program to extract from the specified track. One program
     * extracted per audio selector. To select multiple programs, create multiple
     * selectors with the same Track and different Program numbers. “All channels”
     * means to ignore the program IDs and include all the channels in this selector;
     * useful if metadata is known to be incorrect.
     */
    inline const DolbyEProgramSelection& GetProgramSelection() const{ return m_programSelection; }

    /**
     * Applies only to Dolby E. Enter the program ID (according to the metadata in the
     * audio) of the Dolby E program to extract from the specified track. One program
     * extracted per audio selector. To select multiple programs, create multiple
     * selectors with the same Track and different Program numbers. “All channels”
     * means to ignore the program IDs and include all the channels in this selector;
     * useful if metadata is known to be incorrect.
     */
    inline bool ProgramSelectionHasBeenSet() const { return m_programSelectionHasBeenSet; }

    /**
     * Applies only to Dolby E. Enter the program ID (according to the metadata in the
     * audio) of the Dolby E program to extract from the specified track. One program
     * extracted per audio selector. To select multiple programs, create multiple
     * selectors with the same Track and different Program numbers. “All channels”
     * means to ignore the program IDs and include all the channels in this selector;
     * useful if metadata is known to be incorrect.
     */
    inline void SetProgramSelection(const DolbyEProgramSelection& value) { m_programSelectionHasBeenSet = true; m_programSelection = value; }

    /**
     * Applies only to Dolby E. Enter the program ID (according to the metadata in the
     * audio) of the Dolby E program to extract from the specified track. One program
     * extracted per audio selector. To select multiple programs, create multiple
     * selectors with the same Track and different Program numbers. “All channels”
     * means to ignore the program IDs and include all the channels in this selector;
     * useful if metadata is known to be incorrect.
     */
    inline void SetProgramSelection(DolbyEProgramSelection&& value) { m_programSelectionHasBeenSet = true; m_programSelection = std::move(value); }

    /**
     * Applies only to Dolby E. Enter the program ID (according to the metadata in the
     * audio) of the Dolby E program to extract from the specified track. One program
     * extracted per audio selector. To select multiple programs, create multiple
     * selectors with the same Track and different Program numbers. “All channels”
     * means to ignore the program IDs and include all the channels in this selector;
     * useful if metadata is known to be incorrect.
     */
    inline AudioDolbyEDecode& WithProgramSelection(const DolbyEProgramSelection& value) { SetProgramSelection(value); return *this;}

    /**
     * Applies only to Dolby E. Enter the program ID (according to the metadata in the
     * audio) of the Dolby E program to extract from the specified track. One program
     * extracted per audio selector. To select multiple programs, create multiple
     * selectors with the same Track and different Program numbers. “All channels”
     * means to ignore the program IDs and include all the channels in this selector;
     * useful if metadata is known to be incorrect.
     */
    inline AudioDolbyEDecode& WithProgramSelection(DolbyEProgramSelection&& value) { SetProgramSelection(std::move(value)); return *this;}

  private:

    DolbyEProgramSelection m_programSelection;
    bool m_programSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
