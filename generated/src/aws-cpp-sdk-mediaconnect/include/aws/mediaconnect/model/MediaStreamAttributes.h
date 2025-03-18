﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Fmtp.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Attributes that are related to the media stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamAttributes">AWS
   * API Reference</a></p>
   */
  class MediaStreamAttributes
  {
  public:
    AWS_MEDIACONNECT_API MediaStreamAttributes() = default;
    AWS_MEDIACONNECT_API MediaStreamAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStreamAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A set of parameters that define the media stream.
     */
    inline const Fmtp& GetFmtp() const { return m_fmtp; }
    inline bool FmtpHasBeenSet() const { return m_fmtpHasBeenSet; }
    template<typename FmtpT = Fmtp>
    void SetFmtp(FmtpT&& value) { m_fmtpHasBeenSet = true; m_fmtp = std::forward<FmtpT>(value); }
    template<typename FmtpT = Fmtp>
    MediaStreamAttributes& WithFmtp(FmtpT&& value) { SetFmtp(std::forward<FmtpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline const Aws::String& GetLang() const { return m_lang; }
    inline bool LangHasBeenSet() const { return m_langHasBeenSet; }
    template<typename LangT = Aws::String>
    void SetLang(LangT&& value) { m_langHasBeenSet = true; m_lang = std::forward<LangT>(value); }
    template<typename LangT = Aws::String>
    MediaStreamAttributes& WithLang(LangT&& value) { SetLang(std::forward<LangT>(value)); return *this;}
    ///@}
  private:

    Fmtp m_fmtp;
    bool m_fmtpHasBeenSet = false;

    Aws::String m_lang;
    bool m_langHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
