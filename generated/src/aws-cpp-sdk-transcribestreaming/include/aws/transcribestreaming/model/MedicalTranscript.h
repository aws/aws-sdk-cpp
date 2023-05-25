/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalResult.h>
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
   * <p>The <code>MedicalTranscript</code> associated with a <code/>.</p> <p>
   * <code>MedicalTranscript</code> contains <code>Results</code>, which contains a
   * set of transcription results from one or more audio segments, along with
   * additional information per your request parameters.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalTranscript">AWS
   * API Reference</a></p>
   */
  class MedicalTranscript
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscript();
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscript(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline const Aws::Vector<MedicalResult>& GetResults() const{ return m_results; }

    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }

    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline void SetResults(const Aws::Vector<MedicalResult>& value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline void SetResults(Aws::Vector<MedicalResult>&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }

    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline MedicalTranscript& WithResults(const Aws::Vector<MedicalResult>& value) { SetResults(value); return *this;}

    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline MedicalTranscript& WithResults(Aws::Vector<MedicalResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline MedicalTranscript& AddResults(const MedicalResult& value) { m_resultsHasBeenSet = true; m_results.push_back(value); return *this; }

    /**
     * <p>Contains a set of transcription results from one or more audio segments,
     * along with additional information per your request parameters. This can include
     * information relating to alternative transcriptions, channel identification,
     * partial result stabilization, language identification, and other
     * transcription-related data.</p>
     */
    inline MedicalTranscript& AddResults(MedicalResult&& value) { m_resultsHasBeenSet = true; m_results.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MedicalResult> m_results;
    bool m_resultsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
