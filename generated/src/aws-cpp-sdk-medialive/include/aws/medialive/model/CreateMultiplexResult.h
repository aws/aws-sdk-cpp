/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Multiplex.h>
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
   * Placeholder documentation for CreateMultiplexResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexResponse">AWS
   * API Reference</a></p>
   */
  class CreateMultiplexResult
  {
  public:
    AWS_MEDIALIVE_API CreateMultiplexResult();
    AWS_MEDIALIVE_API CreateMultiplexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateMultiplexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The newly created multiplex.
     */
    inline const Multiplex& GetMultiplex() const{ return m_multiplex; }

    /**
     * The newly created multiplex.
     */
    inline void SetMultiplex(const Multiplex& value) { m_multiplex = value; }

    /**
     * The newly created multiplex.
     */
    inline void SetMultiplex(Multiplex&& value) { m_multiplex = std::move(value); }

    /**
     * The newly created multiplex.
     */
    inline CreateMultiplexResult& WithMultiplex(const Multiplex& value) { SetMultiplex(value); return *this;}

    /**
     * The newly created multiplex.
     */
    inline CreateMultiplexResult& WithMultiplex(Multiplex&& value) { SetMultiplex(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMultiplexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMultiplexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMultiplexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Multiplex m_multiplex;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
