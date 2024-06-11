﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ResponseContentType.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The response body to use in a custom response to a web request. This is
   * referenced by key from <a>CustomResponse</a>
   * <code>CustomResponseBodyKey</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CustomResponseBody">AWS
   * API Reference</a></p>
   */
  class CustomResponseBody
  {
  public:
    AWS_WAFV2_API CustomResponseBody();
    AWS_WAFV2_API CustomResponseBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CustomResponseBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of content in the payload that you are defining in the
     * <code>Content</code> string.</p>
     */
    inline const ResponseContentType& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const ResponseContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(ResponseContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline CustomResponseBody& WithContentType(const ResponseContentType& value) { SetContentType(value); return *this;}
    inline CustomResponseBody& WithContentType(ResponseContentType&& value) { SetContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payload of the custom response. </p> <p>You can use JSON escape strings
     * in JSON content. To do this, you must specify JSON content in the
     * <code>ContentType</code> setting. </p> <p>For information about the limits on
     * count and size for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline CustomResponseBody& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline CustomResponseBody& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline CustomResponseBody& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}
  private:

    ResponseContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
