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
   * The metadata of a single transport stream program.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TransportStreamProgram">AWS
   * API Reference</a></p>
   */
  class TransportStreamProgram
  {
  public:
    AWS_MEDIACONNECT_API TransportStreamProgram();
    AWS_MEDIACONNECT_API TransportStreamProgram(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API TransportStreamProgram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Program Clock Reference (PCR) Packet ID (PID) as it is reported in the
     * Program Association Table.
     */
    inline int GetPcrPid() const{ return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }
    inline TransportStreamProgram& WithPcrPid(int value) { SetPcrPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The program name as it is reported in the Program Association Table.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }
    inline TransportStreamProgram& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline TransportStreamProgram& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline TransportStreamProgram& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}

    ///@{
    /**
     * The program number as it is reported in the Program Association Table.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline TransportStreamProgram& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * The program Packet ID (PID) as it is reported in the Program Association Table.
     */
    inline int GetProgramPid() const{ return m_programPid; }
    inline bool ProgramPidHasBeenSet() const { return m_programPidHasBeenSet; }
    inline void SetProgramPid(int value) { m_programPidHasBeenSet = true; m_programPid = value; }
    inline TransportStreamProgram& WithProgramPid(int value) { SetProgramPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The list of elementary transport streams in the program. The list includes
     * video, audio, and data streams.
     */
    inline const Aws::Vector<TransportStream>& GetStreams() const{ return m_streams; }
    inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
    inline void SetStreams(const Aws::Vector<TransportStream>& value) { m_streamsHasBeenSet = true; m_streams = value; }
    inline void SetStreams(Aws::Vector<TransportStream>&& value) { m_streamsHasBeenSet = true; m_streams = std::move(value); }
    inline TransportStreamProgram& WithStreams(const Aws::Vector<TransportStream>& value) { SetStreams(value); return *this;}
    inline TransportStreamProgram& WithStreams(Aws::Vector<TransportStream>&& value) { SetStreams(std::move(value)); return *this;}
    inline TransportStreamProgram& AddStreams(const TransportStream& value) { m_streamsHasBeenSet = true; m_streams.push_back(value); return *this; }
    inline TransportStreamProgram& AddStreams(TransportStream&& value) { m_streamsHasBeenSet = true; m_streams.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_pcrPid;
    bool m_pcrPidHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    int m_programNumber;
    bool m_programNumberHasBeenSet = false;

    int m_programPid;
    bool m_programPidHasBeenSet = false;

    Aws::Vector<TransportStream> m_streams;
    bool m_streamsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
