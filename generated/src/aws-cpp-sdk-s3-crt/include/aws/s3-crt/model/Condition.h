﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>A container for describing a condition that must be met for the specified
   * redirect to apply. For example, 1. If request is for pages in the
   * <code>/docs</code> folder, redirect to the <code>/documents</code> folder. 2. If
   * request results in HTTP error 4xx, redirect request to another host where you
   * might process the error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Condition">AWS API
   * Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_S3CRT_API Condition() = default;
    AWS_S3CRT_API Condition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API Condition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The HTTP error code when the redirect is applied. In the event of an error,
     * if the error code equals this value, then the specified redirect is applied.
     * Required when parent element <code>Condition</code> is specified and sibling
     * <code>KeyPrefixEquals</code> is not specified. If both are specified, then both
     * must be true for the redirect to be applied.</p>
     */
    inline const Aws::String& GetHttpErrorCodeReturnedEquals() const { return m_httpErrorCodeReturnedEquals; }
    inline bool HttpErrorCodeReturnedEqualsHasBeenSet() const { return m_httpErrorCodeReturnedEqualsHasBeenSet; }
    template<typename HttpErrorCodeReturnedEqualsT = Aws::String>
    void SetHttpErrorCodeReturnedEquals(HttpErrorCodeReturnedEqualsT&& value) { m_httpErrorCodeReturnedEqualsHasBeenSet = true; m_httpErrorCodeReturnedEquals = std::forward<HttpErrorCodeReturnedEqualsT>(value); }
    template<typename HttpErrorCodeReturnedEqualsT = Aws::String>
    Condition& WithHttpErrorCodeReturnedEquals(HttpErrorCodeReturnedEqualsT&& value) { SetHttpErrorCodeReturnedEquals(std::forward<HttpErrorCodeReturnedEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key name prefix when the redirect is applied. For example, to
     * redirect requests for <code>ExamplePage.html</code>, the key prefix will be
     * <code>ExamplePage.html</code>. To redirect request for all pages with the prefix
     * <code>docs/</code>, the key prefix will be <code>/docs</code>, which identifies
     * all objects in the <code>docs/</code> folder. Required when the parent element
     * <code>Condition</code> is specified and sibling
     * <code>HttpErrorCodeReturnedEquals</code> is not specified. If both conditions
     * are specified, both must be true for the redirect to be applied.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline const Aws::String& GetKeyPrefixEquals() const { return m_keyPrefixEquals; }
    inline bool KeyPrefixEqualsHasBeenSet() const { return m_keyPrefixEqualsHasBeenSet; }
    template<typename KeyPrefixEqualsT = Aws::String>
    void SetKeyPrefixEquals(KeyPrefixEqualsT&& value) { m_keyPrefixEqualsHasBeenSet = true; m_keyPrefixEquals = std::forward<KeyPrefixEqualsT>(value); }
    template<typename KeyPrefixEqualsT = Aws::String>
    Condition& WithKeyPrefixEquals(KeyPrefixEqualsT&& value) { SetKeyPrefixEquals(std::forward<KeyPrefixEqualsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpErrorCodeReturnedEquals;
    bool m_httpErrorCodeReturnedEqualsHasBeenSet = false;

    Aws::String m_keyPrefixEquals;
    bool m_keyPrefixEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
