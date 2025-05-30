﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/CharacterOffsets.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Lists the issues that were identified in your audio segment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/IssueDetected">AWS
   * API Reference</a></p>
   */
  class IssueDetected
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API IssueDetected() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API IssueDetected(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API IssueDetected& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the timestamps that identify when in an audio segment the specified
     * issue occurs.</p>
     */
    inline const CharacterOffsets& GetCharacterOffsets() const { return m_characterOffsets; }
    inline bool CharacterOffsetsHasBeenSet() const { return m_characterOffsetsHasBeenSet; }
    template<typename CharacterOffsetsT = CharacterOffsets>
    void SetCharacterOffsets(CharacterOffsetsT&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = std::forward<CharacterOffsetsT>(value); }
    template<typename CharacterOffsetsT = CharacterOffsets>
    IssueDetected& WithCharacterOffsets(CharacterOffsetsT&& value) { SetCharacterOffsets(std::forward<CharacterOffsetsT>(value)); return *this;}
    ///@}
  private:

    CharacterOffsets m_characterOffsets;
    bool m_characterOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
