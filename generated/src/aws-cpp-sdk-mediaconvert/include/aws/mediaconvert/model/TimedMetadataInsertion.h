/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Id3Insertion.h>
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
   * Insert user-defined custom ID3 metadata (id3) at timecodes (timecode) that you
   * specify. In each output that you want to include this metadata, you must set ID3
   * metadata (timedMetadata) to Passthrough (PASSTHROUGH).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TimedMetadataInsertion">AWS
   * API Reference</a></p>
   */
  class TimedMetadataInsertion
  {
  public:
    AWS_MEDIACONVERT_API TimedMetadataInsertion();
    AWS_MEDIACONVERT_API TimedMetadataInsertion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TimedMetadataInsertion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline const Aws::Vector<Id3Insertion>& GetId3Insertions() const{ return m_id3Insertions; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline bool Id3InsertionsHasBeenSet() const { return m_id3InsertionsHasBeenSet; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline void SetId3Insertions(const Aws::Vector<Id3Insertion>& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions = value; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline void SetId3Insertions(Aws::Vector<Id3Insertion>&& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions = std::move(value); }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& WithId3Insertions(const Aws::Vector<Id3Insertion>& value) { SetId3Insertions(value); return *this;}

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& WithId3Insertions(Aws::Vector<Id3Insertion>&& value) { SetId3Insertions(std::move(value)); return *this;}

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& AddId3Insertions(const Id3Insertion& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions.push_back(value); return *this; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& AddId3Insertions(Id3Insertion&& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Id3Insertion> m_id3Insertions;
    bool m_id3InsertionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
