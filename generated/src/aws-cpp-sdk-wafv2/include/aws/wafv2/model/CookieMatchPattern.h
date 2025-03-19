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
   * JSON: <code>"MatchPattern": { "IncludedCookies": [ "session-id-time",
   * "session-id" ] }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CookieMatchPattern">AWS
   * API Reference</a></p>
   */
  class CookieMatchPattern
  {
  public:
    AWS_WAFV2_API CookieMatchPattern() = default;
    AWS_WAFV2_API CookieMatchPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CookieMatchPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Inspect all cookies. </p>
     */
    inline const All& GetAll() const { return m_all; }
    inline bool AllHasBeenSet() const { return m_allHasBeenSet; }
    template<typename AllT = All>
    void SetAll(AllT&& value) { m_allHasBeenSet = true; m_all = std::forward<AllT>(value); }
    template<typename AllT = All>
    CookieMatchPattern& WithAll(AllT&& value) { SetAll(std::forward<AllT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect only the cookies that have a key that matches one of the strings
     * specified here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedCookies() const { return m_includedCookies; }
    inline bool IncludedCookiesHasBeenSet() const { return m_includedCookiesHasBeenSet; }
    template<typename IncludedCookiesT = Aws::Vector<Aws::String>>
    void SetIncludedCookies(IncludedCookiesT&& value) { m_includedCookiesHasBeenSet = true; m_includedCookies = std::forward<IncludedCookiesT>(value); }
    template<typename IncludedCookiesT = Aws::Vector<Aws::String>>
    CookieMatchPattern& WithIncludedCookies(IncludedCookiesT&& value) { SetIncludedCookies(std::forward<IncludedCookiesT>(value)); return *this;}
    template<typename IncludedCookiesT = Aws::String>
    CookieMatchPattern& AddIncludedCookies(IncludedCookiesT&& value) { m_includedCookiesHasBeenSet = true; m_includedCookies.emplace_back(std::forward<IncludedCookiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Inspect only the cookies whose keys don't match any of the strings specified
     * here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedCookies() const { return m_excludedCookies; }
    inline bool ExcludedCookiesHasBeenSet() const { return m_excludedCookiesHasBeenSet; }
    template<typename ExcludedCookiesT = Aws::Vector<Aws::String>>
    void SetExcludedCookies(ExcludedCookiesT&& value) { m_excludedCookiesHasBeenSet = true; m_excludedCookies = std::forward<ExcludedCookiesT>(value); }
    template<typename ExcludedCookiesT = Aws::Vector<Aws::String>>
    CookieMatchPattern& WithExcludedCookies(ExcludedCookiesT&& value) { SetExcludedCookies(std::forward<ExcludedCookiesT>(value)); return *this;}
    template<typename ExcludedCookiesT = Aws::String>
    CookieMatchPattern& AddExcludedCookies(ExcludedCookiesT&& value) { m_excludedCookiesHasBeenSet = true; m_excludedCookies.emplace_back(std::forward<ExcludedCookiesT>(value)); return *this; }
    ///@}
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
