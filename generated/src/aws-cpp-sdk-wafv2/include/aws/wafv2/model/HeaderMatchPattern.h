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
   * <p>The filter to use to identify the subset of headers to inspect in a web
   * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
   * <code>IncludedHeaders</code>, or <code>ExcludedHeaders</code>.</p> <p>Example
   * JSON: <code>"MatchPattern": { "ExcludedHeaders": {"KeyToExclude1",
   * "KeyToExclude2"} }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/HeaderMatchPattern">AWS
   * API Reference</a></p>
   */
  class HeaderMatchPattern
  {
  public:
    AWS_WAFV2_API HeaderMatchPattern();
    AWS_WAFV2_API HeaderMatchPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API HeaderMatchPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Inspect all headers. </p>
     */
    inline const All& GetAll() const{ return m_all; }

    /**
     * <p>Inspect all headers. </p>
     */
    inline bool AllHasBeenSet() const { return m_allHasBeenSet; }

    /**
     * <p>Inspect all headers. </p>
     */
    inline void SetAll(const All& value) { m_allHasBeenSet = true; m_all = value; }

    /**
     * <p>Inspect all headers. </p>
     */
    inline void SetAll(All&& value) { m_allHasBeenSet = true; m_all = std::move(value); }

    /**
     * <p>Inspect all headers. </p>
     */
    inline HeaderMatchPattern& WithAll(const All& value) { SetAll(value); return *this;}

    /**
     * <p>Inspect all headers. </p>
     */
    inline HeaderMatchPattern& WithAll(All&& value) { SetAll(std::move(value)); return *this;}


    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedHeaders() const{ return m_includedHeaders; }

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline bool IncludedHeadersHasBeenSet() const { return m_includedHeadersHasBeenSet; }

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline void SetIncludedHeaders(const Aws::Vector<Aws::String>& value) { m_includedHeadersHasBeenSet = true; m_includedHeaders = value; }

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline void SetIncludedHeaders(Aws::Vector<Aws::String>&& value) { m_includedHeadersHasBeenSet = true; m_includedHeaders = std::move(value); }

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline HeaderMatchPattern& WithIncludedHeaders(const Aws::Vector<Aws::String>& value) { SetIncludedHeaders(value); return *this;}

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline HeaderMatchPattern& WithIncludedHeaders(Aws::Vector<Aws::String>&& value) { SetIncludedHeaders(std::move(value)); return *this;}

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline HeaderMatchPattern& AddIncludedHeaders(const Aws::String& value) { m_includedHeadersHasBeenSet = true; m_includedHeaders.push_back(value); return *this; }

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline HeaderMatchPattern& AddIncludedHeaders(Aws::String&& value) { m_includedHeadersHasBeenSet = true; m_includedHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline HeaderMatchPattern& AddIncludedHeaders(const char* value) { m_includedHeadersHasBeenSet = true; m_includedHeaders.push_back(value); return *this; }


    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedHeaders() const{ return m_excludedHeaders; }

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline bool ExcludedHeadersHasBeenSet() const { return m_excludedHeadersHasBeenSet; }

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline void SetExcludedHeaders(const Aws::Vector<Aws::String>& value) { m_excludedHeadersHasBeenSet = true; m_excludedHeaders = value; }

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline void SetExcludedHeaders(Aws::Vector<Aws::String>&& value) { m_excludedHeadersHasBeenSet = true; m_excludedHeaders = std::move(value); }

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline HeaderMatchPattern& WithExcludedHeaders(const Aws::Vector<Aws::String>& value) { SetExcludedHeaders(value); return *this;}

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline HeaderMatchPattern& WithExcludedHeaders(Aws::Vector<Aws::String>&& value) { SetExcludedHeaders(std::move(value)); return *this;}

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline HeaderMatchPattern& AddExcludedHeaders(const Aws::String& value) { m_excludedHeadersHasBeenSet = true; m_excludedHeaders.push_back(value); return *this; }

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline HeaderMatchPattern& AddExcludedHeaders(Aws::String&& value) { m_excludedHeadersHasBeenSet = true; m_excludedHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline HeaderMatchPattern& AddExcludedHeaders(const char* value) { m_excludedHeadersHasBeenSet = true; m_excludedHeaders.push_back(value); return *this; }

  private:

    All m_all;
    bool m_allHasBeenSet = false;

    Aws::Vector<Aws::String> m_includedHeaders;
    bool m_includedHeadersHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedHeaders;
    bool m_excludedHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
