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
   * Insert user-defined custom ID3 metadata at timecodes that you specify. In each
   * output that you want to include this metadata, you must set ID3 metadata to
   * Passthrough.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TimedMetadataInsertion">AWS
   * API Reference</a></p>
   */
  class TimedMetadataInsertion
  {
  public:
    AWS_MEDIACONVERT_API TimedMetadataInsertion() = default;
    AWS_MEDIACONVERT_API TimedMetadataInsertion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TimedMetadataInsertion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline const Aws::Vector<Id3Insertion>& GetId3Insertions() const { return m_id3Insertions; }
    inline bool Id3InsertionsHasBeenSet() const { return m_id3InsertionsHasBeenSet; }
    template<typename Id3InsertionsT = Aws::Vector<Id3Insertion>>
    void SetId3Insertions(Id3InsertionsT&& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions = std::forward<Id3InsertionsT>(value); }
    template<typename Id3InsertionsT = Aws::Vector<Id3Insertion>>
    TimedMetadataInsertion& WithId3Insertions(Id3InsertionsT&& value) { SetId3Insertions(std::forward<Id3InsertionsT>(value)); return *this;}
    template<typename Id3InsertionsT = Id3Insertion>
    TimedMetadataInsertion& AddId3Insertions(Id3InsertionsT&& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions.emplace_back(std::forward<Id3InsertionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Id3Insertion> m_id3Insertions;
    bool m_id3InsertionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
