﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore/model/MethodName.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>A rule for a CORS policy. You can add up to 100 rules to a CORS policy. If
   * more than one rule applies, the service uses the first applicable rule
   * listed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/CorsRule">AWS
   * API Reference</a></p>
   */
  class CorsRule
  {
  public:
    AWS_MEDIASTORE_API CorsRule() = default;
    AWS_MEDIASTORE_API CorsRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API CorsRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOrigins() const { return m_allowedOrigins; }
    inline bool AllowedOriginsHasBeenSet() const { return m_allowedOriginsHasBeenSet; }
    template<typename AllowedOriginsT = Aws::Vector<Aws::String>>
    void SetAllowedOrigins(AllowedOriginsT&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = std::forward<AllowedOriginsT>(value); }
    template<typename AllowedOriginsT = Aws::Vector<Aws::String>>
    CorsRule& WithAllowedOrigins(AllowedOriginsT&& value) { SetAllowedOrigins(std::forward<AllowedOriginsT>(value)); return *this;}
    template<typename AllowedOriginsT = Aws::String>
    CorsRule& AddAllowedOrigins(AllowedOriginsT&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.emplace_back(std::forward<AllowedOriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline const Aws::Vector<MethodName>& GetAllowedMethods() const { return m_allowedMethods; }
    inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }
    template<typename AllowedMethodsT = Aws::Vector<MethodName>>
    void SetAllowedMethods(AllowedMethodsT&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = std::forward<AllowedMethodsT>(value); }
    template<typename AllowedMethodsT = Aws::Vector<MethodName>>
    CorsRule& WithAllowedMethods(AllowedMethodsT&& value) { SetAllowedMethods(std::forward<AllowedMethodsT>(value)); return *this;}
    inline CorsRule& AddAllowedMethods(MethodName value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedHeaders() const { return m_allowedHeaders; }
    inline bool AllowedHeadersHasBeenSet() const { return m_allowedHeadersHasBeenSet; }
    template<typename AllowedHeadersT = Aws::Vector<Aws::String>>
    void SetAllowedHeaders(AllowedHeadersT&& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders = std::forward<AllowedHeadersT>(value); }
    template<typename AllowedHeadersT = Aws::Vector<Aws::String>>
    CorsRule& WithAllowedHeaders(AllowedHeadersT&& value) { SetAllowedHeaders(std::forward<AllowedHeadersT>(value)); return *this;}
    template<typename AllowedHeadersT = Aws::String>
    CorsRule& AddAllowedHeaders(AllowedHeadersT&& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders.emplace_back(std::forward<AllowedHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time in seconds that your browser caches the preflight response for the
     * specified resource.</p> <p>A CORS rule can have only one
     * <code>MaxAgeSeconds</code> element.</p>
     */
    inline int GetMaxAgeSeconds() const { return m_maxAgeSeconds; }
    inline bool MaxAgeSecondsHasBeenSet() const { return m_maxAgeSecondsHasBeenSet; }
    inline void SetMaxAgeSeconds(int value) { m_maxAgeSecondsHasBeenSet = true; m_maxAgeSeconds = value; }
    inline CorsRule& WithMaxAgeSeconds(int value) { SetMaxAgeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const { return m_exposeHeaders; }
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    void SetExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::forward<ExposeHeadersT>(value); }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    CorsRule& WithExposeHeaders(ExposeHeadersT&& value) { SetExposeHeaders(std::forward<ExposeHeadersT>(value)); return *this;}
    template<typename ExposeHeadersT = Aws::String>
    CorsRule& AddExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.emplace_back(std::forward<ExposeHeadersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedOrigins;
    bool m_allowedOriginsHasBeenSet = false;

    Aws::Vector<MethodName> m_allowedMethods;
    bool m_allowedMethodsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedHeaders;
    bool m_allowedHeadersHasBeenSet = false;

    int m_maxAgeSeconds{0};
    bool m_maxAgeSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exposeHeaders;
    bool m_exposeHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
