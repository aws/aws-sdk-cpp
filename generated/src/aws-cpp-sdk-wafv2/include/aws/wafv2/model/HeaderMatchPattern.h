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
   * JSON: <code>"MatchPattern": { "ExcludedHeaders": [ "KeyToExclude1",
   * "KeyToExclude2" ] }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/HeaderMatchPattern">AWS
   * API Reference</a></p>
   */
  class HeaderMatchPattern
  {
  public:
    AWS_WAFV2_API HeaderMatchPattern() = default;
    AWS_WAFV2_API HeaderMatchPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API HeaderMatchPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Inspect all headers. </p>
     */
    inline const All& GetAll() const { return m_all; }
    inline bool AllHasBeenSet() const { return m_allHasBeenSet; }
    template<typename AllT = All>
    void SetAll(AllT&& value) { m_allHasBeenSet = true; m_all = std::forward<AllT>(value); }
    template<typename AllT = All>
    HeaderMatchPattern& WithAll(AllT&& value) { SetAll(std::forward<AllT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect only the headers that have a key that matches one of the strings
     * specified here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedHeaders() const { return m_includedHeaders; }
    inline bool IncludedHeadersHasBeenSet() const { return m_includedHeadersHasBeenSet; }
    template<typename IncludedHeadersT = Aws::Vector<Aws::String>>
    void SetIncludedHeaders(IncludedHeadersT&& value) { m_includedHeadersHasBeenSet = true; m_includedHeaders = std::forward<IncludedHeadersT>(value); }
    template<typename IncludedHeadersT = Aws::Vector<Aws::String>>
    HeaderMatchPattern& WithIncludedHeaders(IncludedHeadersT&& value) { SetIncludedHeaders(std::forward<IncludedHeadersT>(value)); return *this;}
    template<typename IncludedHeadersT = Aws::String>
    HeaderMatchPattern& AddIncludedHeaders(IncludedHeadersT&& value) { m_includedHeadersHasBeenSet = true; m_includedHeaders.emplace_back(std::forward<IncludedHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Inspect only the headers whose keys don't match any of the strings specified
     * here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedHeaders() const { return m_excludedHeaders; }
    inline bool ExcludedHeadersHasBeenSet() const { return m_excludedHeadersHasBeenSet; }
    template<typename ExcludedHeadersT = Aws::Vector<Aws::String>>
    void SetExcludedHeaders(ExcludedHeadersT&& value) { m_excludedHeadersHasBeenSet = true; m_excludedHeaders = std::forward<ExcludedHeadersT>(value); }
    template<typename ExcludedHeadersT = Aws::Vector<Aws::String>>
    HeaderMatchPattern& WithExcludedHeaders(ExcludedHeadersT&& value) { SetExcludedHeaders(std::forward<ExcludedHeadersT>(value)); return *this;}
    template<typename ExcludedHeadersT = Aws::String>
    HeaderMatchPattern& AddExcludedHeaders(ExcludedHeadersT&& value) { m_excludedHeadersHasBeenSet = true; m_excludedHeaders.emplace_back(std::forward<ExcludedHeadersT>(value)); return *this; }
    ///@}
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
