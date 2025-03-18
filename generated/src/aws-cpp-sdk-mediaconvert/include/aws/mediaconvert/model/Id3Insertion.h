/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * To insert ID3 tags in your output, specify two values. Use ID3 tag to specify
   * the base 64 encoded string and use Timecode to specify the time when the tag
   * should be inserted. To insert multiple ID3 tags in your output, create multiple
   * instances of ID3 insertion.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Id3Insertion">AWS
   * API Reference</a></p>
   */
  class Id3Insertion
  {
  public:
    AWS_MEDIACONVERT_API Id3Insertion() = default;
    AWS_MEDIACONVERT_API Id3Insertion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Id3Insertion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use ID3 tag to provide a fully formed ID3 tag in base64-encode format.
     */
    inline const Aws::String& GetId3() const { return m_id3; }
    inline bool Id3HasBeenSet() const { return m_id3HasBeenSet; }
    template<typename Id3T = Aws::String>
    void SetId3(Id3T&& value) { m_id3HasBeenSet = true; m_id3 = std::forward<Id3T>(value); }
    template<typename Id3T = Aws::String>
    Id3Insertion& WithId3(Id3T&& value) { SetId3(std::forward<Id3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Provide a Timecode in HH:MM:SS:FF or HH:MM:SS;FF format.
     */
    inline const Aws::String& GetTimecode() const { return m_timecode; }
    inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }
    template<typename TimecodeT = Aws::String>
    void SetTimecode(TimecodeT&& value) { m_timecodeHasBeenSet = true; m_timecode = std::forward<TimecodeT>(value); }
    template<typename TimecodeT = Aws::String>
    Id3Insertion& WithTimecode(TimecodeT&& value) { SetTimecode(std::forward<TimecodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id3;
    bool m_id3HasBeenSet = false;

    Aws::String m_timecode;
    bool m_timecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
