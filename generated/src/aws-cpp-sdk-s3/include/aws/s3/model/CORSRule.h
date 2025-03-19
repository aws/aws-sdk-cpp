/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies a cross-origin access rule for an Amazon S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CORSRule">AWS API
   * Reference</a></p>
   */
  class CORSRule
  {
  public:
    AWS_S3_API CORSRule() = default;
    AWS_S3_API CORSRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CORSRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline const Aws::String& GetID() const { return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    template<typename IDT = Aws::String>
    void SetID(IDT&& value) { m_iDHasBeenSet = true; m_iD = std::forward<IDT>(value); }
    template<typename IDT = Aws::String>
    CORSRule& WithID(IDT&& value) { SetID(std::forward<IDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Headers that are specified in the <code>Access-Control-Request-Headers</code>
     * header. These headers are allowed in a preflight OPTIONS request. In response to
     * any preflight OPTIONS request, Amazon S3 returns any requested headers that are
     * allowed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedHeaders() const { return m_allowedHeaders; }
    inline bool AllowedHeadersHasBeenSet() const { return m_allowedHeadersHasBeenSet; }
    template<typename AllowedHeadersT = Aws::Vector<Aws::String>>
    void SetAllowedHeaders(AllowedHeadersT&& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders = std::forward<AllowedHeadersT>(value); }
    template<typename AllowedHeadersT = Aws::Vector<Aws::String>>
    CORSRule& WithAllowedHeaders(AllowedHeadersT&& value) { SetAllowedHeaders(std::forward<AllowedHeadersT>(value)); return *this;}
    template<typename AllowedHeadersT = Aws::String>
    CORSRule& AddAllowedHeaders(AllowedHeadersT&& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders.emplace_back(std::forward<AllowedHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An HTTP method that you allow the origin to execute. Valid values are
     * <code>GET</code>, <code>PUT</code>, <code>HEAD</code>, <code>POST</code>, and
     * <code>DELETE</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedMethods() const { return m_allowedMethods; }
    inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }
    template<typename AllowedMethodsT = Aws::Vector<Aws::String>>
    void SetAllowedMethods(AllowedMethodsT&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = std::forward<AllowedMethodsT>(value); }
    template<typename AllowedMethodsT = Aws::Vector<Aws::String>>
    CORSRule& WithAllowedMethods(AllowedMethodsT&& value) { SetAllowedMethods(std::forward<AllowedMethodsT>(value)); return *this;}
    template<typename AllowedMethodsT = Aws::String>
    CORSRule& AddAllowedMethods(AllowedMethodsT&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods.emplace_back(std::forward<AllowedMethodsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more origins you want customers to be able to access the bucket
     * from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOrigins() const { return m_allowedOrigins; }
    inline bool AllowedOriginsHasBeenSet() const { return m_allowedOriginsHasBeenSet; }
    template<typename AllowedOriginsT = Aws::Vector<Aws::String>>
    void SetAllowedOrigins(AllowedOriginsT&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = std::forward<AllowedOriginsT>(value); }
    template<typename AllowedOriginsT = Aws::Vector<Aws::String>>
    CORSRule& WithAllowedOrigins(AllowedOriginsT&& value) { SetAllowedOrigins(std::forward<AllowedOriginsT>(value)); return *this;}
    template<typename AllowedOriginsT = Aws::String>
    CORSRule& AddAllowedOrigins(AllowedOriginsT&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.emplace_back(std::forward<AllowedOriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more headers in the response that you want customers to be able to
     * access from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const { return m_exposeHeaders; }
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    void SetExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::forward<ExposeHeadersT>(value); }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    CORSRule& WithExposeHeaders(ExposeHeadersT&& value) { SetExposeHeaders(std::forward<ExposeHeadersT>(value)); return *this;}
    template<typename ExposeHeadersT = Aws::String>
    CORSRule& AddExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.emplace_back(std::forward<ExposeHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time in seconds that your browser is to cache the preflight response for
     * the specified resource.</p>
     */
    inline int GetMaxAgeSeconds() const { return m_maxAgeSeconds; }
    inline bool MaxAgeSecondsHasBeenSet() const { return m_maxAgeSecondsHasBeenSet; }
    inline void SetMaxAgeSeconds(int value) { m_maxAgeSecondsHasBeenSet = true; m_maxAgeSeconds = value; }
    inline CORSRule& WithMaxAgeSeconds(int value) { SetMaxAgeSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedHeaders;
    bool m_allowedHeadersHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedMethods;
    bool m_allowedMethodsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedOrigins;
    bool m_allowedOriginsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exposeHeaders;
    bool m_exposeHeadersHasBeenSet = false;

    int m_maxAgeSeconds{0};
    bool m_maxAgeSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
