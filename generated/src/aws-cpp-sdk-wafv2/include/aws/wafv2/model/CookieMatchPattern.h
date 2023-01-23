/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/All.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The filter to use to identify the subset of cookies to inspect in a web
   * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
   * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
   * JSON: <code>"MatchPattern": { "IncludedCookies": {"KeyToInclude1",
   * "KeyToInclude2", "KeyToInclude3"} }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CookieMatchPattern">AWS
   * API Reference</a></p>
   */
  class CookieMatchPattern
  {
  public:
    AWS_WAFV2_API CookieMatchPattern();
    AWS_WAFV2_API CookieMatchPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CookieMatchPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Inspect all cookies. </p>
     */
    inline const All& GetAll() const{ return m_all; }

    /**
     * <p>Inspect all cookies. </p>
     */
    inline bool AllHasBeenSet() const { return m_allHasBeenSet; }

    /**
     * <p>Inspect all cookies. </p>
     */
    inline void SetAll(const All& value) { m_allHasBeenSet = true; m_all = value; }

    /**
     * <p>Inspect all cookies. </p>
     */
    inline void SetAll(All&& value) { m_allHasBeenSet = true; m_all = std::move(value); }

    /**
     * <p>Inspect all cookies. </p>
     */
    inline CookieMatchPattern& WithAll(const All& value) { SetAll(value); return *this;}

    /**
     * <p>Inspect all cookies. </p>
     */
    inline CookieMatchPattern& WithAll(All&& value) { SetAll(std::move(value)); return *this;}


    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedCookies() const{ return m_includedCookies; }

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline bool IncludedCookiesHasBeenSet() const { return m_includedCookiesHasBeenSet; }

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline void SetIncludedCookies(const Aws::Vector<Aws::String>& value) { m_includedCookiesHasBeenSet = true; m_includedCookies = value; }

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline void SetIncludedCookies(Aws::Vector<Aws::String>&& value) { m_includedCookiesHasBeenSet = true; m_includedCookies = std::move(value); }

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline CookieMatchPattern& WithIncludedCookies(const Aws::Vector<Aws::String>& value) { SetIncludedCookies(value); return *this;}

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline CookieMatchPattern& WithIncludedCookies(Aws::Vector<Aws::String>&& value) { SetIncludedCookies(std::move(value)); return *this;}

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline CookieMatchPattern& AddIncludedCookies(const Aws::String& value) { m_includedCookiesHasBeenSet = true; m_includedCookies.push_back(value); return *this; }

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline CookieMatchPattern& AddIncludedCookies(Aws::String&& value) { m_includedCookiesHasBeenSet = true; m_includedCookies.push_back(std::move(value)); return *this; }

    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline CookieMatchPattern& AddIncludedCookies(const char* value) { m_includedCookiesHasBeenSet = true; m_includedCookies.push_back(value); return *this; }


    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedCookies() const{ return m_excludedCookies; }

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline bool ExcludedCookiesHasBeenSet() const { return m_excludedCookiesHasBeenSet; }

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline void SetExcludedCookies(const Aws::Vector<Aws::String>& value) { m_excludedCookiesHasBeenSet = true; m_excludedCookies = value; }

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline void SetExcludedCookies(Aws::Vector<Aws::String>&& value) { m_excludedCookiesHasBeenSet = true; m_excludedCookies = std::move(value); }

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline CookieMatchPattern& WithExcludedCookies(const Aws::Vector<Aws::String>& value) { SetExcludedCookies(value); return *this;}

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline CookieMatchPattern& WithExcludedCookies(Aws::Vector<Aws::String>&& value) { SetExcludedCookies(std::move(value)); return *this;}

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline CookieMatchPattern& AddExcludedCookies(const Aws::String& value) { m_excludedCookiesHasBeenSet = true; m_excludedCookies.push_back(value); return *this; }

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline CookieMatchPattern& AddExcludedCookies(Aws::String&& value) { m_excludedCookiesHasBeenSet = true; m_excludedCookies.push_back(std::move(value)); return *this; }

    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline CookieMatchPattern& AddExcludedCookies(const char* value) { m_excludedCookiesHasBeenSet = true; m_excludedCookies.push_back(value); return *this; }

  private:

    All m_all;
    bool m_allHasBeenSet = false;

    Aws::Vector<Aws::String> m_includedCookies;
    bool m_includedCookiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedCookies;
    bool m_excludedCookiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
