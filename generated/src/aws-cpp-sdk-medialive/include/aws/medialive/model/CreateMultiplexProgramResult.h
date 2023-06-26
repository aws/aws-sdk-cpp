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
    AWS_MEDIALIVE_API CreateMultiplexProgramResult();
    AWS_MEDIALIVE_API CreateMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The newly created multiplex program.
     */
    inline const MultiplexProgram& GetMultiplexProgram() const{ return m_multiplexProgram; }

    /**
     * The newly created multiplex program.
     */
    inline void SetMultiplexProgram(const MultiplexProgram& value) { m_multiplexProgram = value; }

    /**
     * The newly created multiplex program.
     */
    inline void SetMultiplexProgram(MultiplexProgram&& value) { m_multiplexProgram = std::move(value); }

    /**
     * The newly created multiplex program.
     */
    inline CreateMultiplexProgramResult& WithMultiplexProgram(const MultiplexProgram& value) { SetMultiplexProgram(value); return *this;}

    /**
     * The newly created multiplex program.
     */
    inline CreateMultiplexProgramResult& WithMultiplexProgram(MultiplexProgram&& value) { SetMultiplexProgram(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMultiplexProgramResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMultiplexProgramResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMultiplexProgramResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MultiplexProgram m_multiplexProgram;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
