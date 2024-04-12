/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/SignalMapSummary.h>
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
   * Placeholder documentation for ListSignalMapsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListSignalMapsResponse">AWS
   * API Reference</a></p>
   */
  class ListSignalMapsResult
  {
  public:
    AWS_MEDIALIVE_API ListSignalMapsResult();
    AWS_MEDIALIVE_API ListSignalMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListSignalMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListSignalMapsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListSignalMapsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListSignalMapsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<SignalMapSummary>& GetSignalMaps() const{ return m_signalMaps; }

    
    inline void SetSignalMaps(const Aws::Vector<SignalMapSummary>& value) { m_signalMaps = value; }

    
    inline void SetSignalMaps(Aws::Vector<SignalMapSummary>&& value) { m_signalMaps = std::move(value); }

    
    inline ListSignalMapsResult& WithSignalMaps(const Aws::Vector<SignalMapSummary>& value) { SetSignalMaps(value); return *this;}

    
    inline ListSignalMapsResult& WithSignalMaps(Aws::Vector<SignalMapSummary>&& value) { SetSignalMaps(std::move(value)); return *this;}

    
    inline ListSignalMapsResult& AddSignalMaps(const SignalMapSummary& value) { m_signalMaps.push_back(value); return *this; }

    
    inline ListSignalMapsResult& AddSignalMaps(SignalMapSummary&& value) { m_signalMaps.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSignalMapsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSignalMapsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSignalMapsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SignalMapSummary> m_signalMaps;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
