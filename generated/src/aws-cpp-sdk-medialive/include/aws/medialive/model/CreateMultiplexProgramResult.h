/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MultiplexProgram.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for CreateMultiplexProgramResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgramResponse">AWS
   * API Reference</a></p>
   */
  class CreateMultiplexProgramResult
  {
  public:
    AWS_MEDIALIVE_API CreateMultiplexProgramResult() = default;
    AWS_MEDIALIVE_API CreateMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The newly created multiplex program.
     */
    inline const MultiplexProgram& GetMultiplexProgram() const { return m_multiplexProgram; }
    template<typename MultiplexProgramT = MultiplexProgram>
    void SetMultiplexProgram(MultiplexProgramT&& value) { m_multiplexProgramHasBeenSet = true; m_multiplexProgram = std::forward<MultiplexProgramT>(value); }
    template<typename MultiplexProgramT = MultiplexProgram>
    CreateMultiplexProgramResult& WithMultiplexProgram(MultiplexProgramT&& value) { SetMultiplexProgram(std::forward<MultiplexProgramT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMultiplexProgramResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MultiplexProgram m_multiplexProgram;
    bool m_multiplexProgramHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
