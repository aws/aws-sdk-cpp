/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Polly
{
namespace Model
{
  class SynthesizeSpeechResult
  {
  public:
    AWS_POLLY_API SynthesizeSpeechResult() = default;
    AWS_POLLY_API SynthesizeSpeechResult(SynthesizeSpeechResult&&) = default;
    AWS_POLLY_API SynthesizeSpeechResult& operator=(SynthesizeSpeechResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    SynthesizeSpeechResult(const SynthesizeSpeechResult&) = delete;
    SynthesizeSpeechResult& operator=(const SynthesizeSpeechResult&) = delete;


    AWS_POLLY_API SynthesizeSpeechResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_POLLY_API SynthesizeSpeechResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p> Stream containing the synthesized speech. </p>
     */
    inline Aws::IOStream& GetAudioStream() const { return m_audioStream.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm in a signed 16-bit, 1 channel
     * (mono), little-endian format. </p> </li> <li> <p>If you request
     * <code>json</code> as the <code>OutputFormat</code>, the <code>ContentType</code>
     * returned is application/x-json-stream.</p> </li> </ul> <p> </p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    SynthesizeSpeechResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of characters synthesized.</p>
     */
    inline int GetRequestCharacters() const { return m_requestCharacters; }
    inline void SetRequestCharacters(int value) { m_requestCharactersHasBeenSet = true; m_requestCharacters = value; }
    inline SynthesizeSpeechResult& WithRequestCharacters(int value) { SetRequestCharacters(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SynthesizeSpeechResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_audioStream{};
    bool m_audioStreamHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    int m_requestCharacters{0};
    bool m_requestCharactersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
