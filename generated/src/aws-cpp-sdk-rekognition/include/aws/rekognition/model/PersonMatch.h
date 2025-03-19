/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/PersonDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/FaceMatch.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Information about a person whose face matches a face(s) in an Amazon
   * Rekognition collection. Includes information about the faces in the Amazon
   * Rekognition collection (<a>FaceMatch</a>), information about the person
   * (<a>PersonDetail</a>), and the time stamp for when the person was detected in a
   * video. An array of <code>PersonMatch</code> objects is returned by
   * <a>GetFaceSearch</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/PersonMatch">AWS
   * API Reference</a></p>
   */
  class PersonMatch
  {
  public:
    AWS_REKOGNITION_API PersonMatch() = default;
    AWS_REKOGNITION_API PersonMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API PersonMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time, in milliseconds from the beginning of the video, that the person
     * was matched in the video.</p>
     */
    inline long long GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline PersonMatch& WithTimestamp(long long value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the matched person.</p>
     */
    inline const PersonDetail& GetPerson() const { return m_person; }
    inline bool PersonHasBeenSet() const { return m_personHasBeenSet; }
    template<typename PersonT = PersonDetail>
    void SetPerson(PersonT&& value) { m_personHasBeenSet = true; m_person = std::forward<PersonT>(value); }
    template<typename PersonT = PersonDetail>
    PersonMatch& WithPerson(PersonT&& value) { SetPerson(std::forward<PersonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const { return m_faceMatches; }
    inline bool FaceMatchesHasBeenSet() const { return m_faceMatchesHasBeenSet; }
    template<typename FaceMatchesT = Aws::Vector<FaceMatch>>
    void SetFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches = std::forward<FaceMatchesT>(value); }
    template<typename FaceMatchesT = Aws::Vector<FaceMatch>>
    PersonMatch& WithFaceMatches(FaceMatchesT&& value) { SetFaceMatches(std::forward<FaceMatchesT>(value)); return *this;}
    template<typename FaceMatchesT = FaceMatch>
    PersonMatch& AddFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches.emplace_back(std::forward<FaceMatchesT>(value)); return *this; }
    ///@}
  private:

    long long m_timestamp{0};
    bool m_timestampHasBeenSet = false;

    PersonDetail m_person;
    bool m_personHasBeenSet = false;

    Aws::Vector<FaceMatch> m_faceMatches;
    bool m_faceMatchesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
