﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/PersonDetail.h>
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
   * <p>Details and path tracking information for a single time a person's path is
   * tracked in a video. Amazon Rekognition operations that track people's paths
   * return an array of <code>PersonDetection</code> objects with elements for each
   * time a person's path is tracked in a video. </p> <p>For more information, see
   * GetPersonTracking in the Amazon Rekognition Developer Guide. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/PersonDetection">AWS
   * API Reference</a></p>
   */
  class PersonDetection
  {
  public:
    AWS_REKOGNITION_API PersonDetection() = default;
    AWS_REKOGNITION_API PersonDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API PersonDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time, in milliseconds from the start of the video, that the person's path
     * was tracked. Note that <code>Timestamp</code> is not guaranteed to be accurate
     * to the individual frame where the person's path first appears.</p>
     */
    inline long long GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline PersonDetection& WithTimestamp(long long value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a person whose path was tracked in a video.</p>
     */
    inline const PersonDetail& GetPerson() const { return m_person; }
    inline bool PersonHasBeenSet() const { return m_personHasBeenSet; }
    template<typename PersonT = PersonDetail>
    void SetPerson(PersonT&& value) { m_personHasBeenSet = true; m_person = std::forward<PersonT>(value); }
    template<typename PersonT = PersonDetail>
    PersonDetection& WithPerson(PersonT&& value) { SetPerson(std::forward<PersonT>(value)); return *this;}
    ///@}
  private:

    long long m_timestamp{0};
    bool m_timestampHasBeenSet = false;

    PersonDetail m_person;
    bool m_personHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
