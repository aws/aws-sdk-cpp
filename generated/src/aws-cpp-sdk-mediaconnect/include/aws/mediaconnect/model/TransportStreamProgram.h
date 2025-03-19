/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/TransportStream.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The metadata of a single transport stream program.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TransportStreamProgram">AWS
   * API Reference</a></p>
   */
  class TransportStreamProgram
  {
  public:
    AWS_MEDIACONNECT_API TransportStreamProgram() = default;
    AWS_MEDIACONNECT_API TransportStreamProgram(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API TransportStreamProgram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Program Clock Reference (PCR) Packet ID (PID) as it is reported in the
     * Program Association Table.</p>
     */
    inline int GetPcrPid() const { return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }
    inline TransportStreamProgram& WithPcrPid(int value) { SetPcrPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The program name as it is reported in the Program Association Table.</p>
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    TransportStreamProgram& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The program number as it is reported in the Program Association Table.</p>
     */
    inline int GetProgramNumber() const { return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline TransportStreamProgram& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The program Packet ID (PID) as it is reported in the Program Association
     * Table.</p>
     */
    inline int GetProgramPid() const { return m_programPid; }
    inline bool ProgramPidHasBeenSet() const { return m_programPidHasBeenSet; }
    inline void SetProgramPid(int value) { m_programPidHasBeenSet = true; m_programPid = value; }
    inline TransportStreamProgram& WithProgramPid(int value) { SetProgramPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of elementary transport streams in the program. The list includes
     * video, audio, and data streams.</p>
     */
    inline const Aws::Vector<TransportStream>& GetStreams() const { return m_streams; }
    inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
    template<typename StreamsT = Aws::Vector<TransportStream>>
    void SetStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams = std::forward<StreamsT>(value); }
    template<typename StreamsT = Aws::Vector<TransportStream>>
    TransportStreamProgram& WithStreams(StreamsT&& value) { SetStreams(std::forward<StreamsT>(value)); return *this;}
    template<typename StreamsT = TransportStream>
    TransportStreamProgram& AddStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams.emplace_back(std::forward<StreamsT>(value)); return *this; }
    ///@}
  private:

    int m_pcrPid{0};
    bool m_pcrPidHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    int m_programNumber{0};
    bool m_programNumberHasBeenSet = false;

    int m_programPid{0};
    bool m_programPidHasBeenSet = false;

    Aws::Vector<TransportStream> m_streams;
    bool m_streamsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
