﻿/**
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
   * <p>The patterns to look for in the JSON body. WAF inspects the results of these
   * pattern matches against the rule inspection criteria. This is used with the
   * <a>FieldToMatch</a> option <code>JsonBody</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/JsonMatchPattern">AWS
   * API Reference</a></p>
   */
  class JsonMatchPattern
  {
  public:
    AWS_WAFV2_API JsonMatchPattern() = default;
    AWS_WAFV2_API JsonMatchPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API JsonMatchPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Match all of the elements. See also <code>MatchScope</code> in
     * <a>JsonBody</a>. </p> <p>You must specify either this setting or the
     * <code>IncludedPaths</code> setting, but not both.</p>
     */
    inline const All& GetAll() const { return m_all; }
    inline bool AllHasBeenSet() const { return m_allHasBeenSet; }
    template<typename AllT = All>
    void SetAll(AllT&& value) { m_allHasBeenSet = true; m_all = std::forward<AllT>(value); }
    template<typename AllT = All>
    JsonMatchPattern& WithAll(AllT&& value) { SetAll(std::forward<AllT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Match only the specified include paths. See also <code>MatchScope</code> in
     * <a>JsonBody</a>. </p> <p>Provide the include paths using JSON Pointer syntax.
     * For example, <code>"IncludedPaths": ["/dogs/0/name", "/dogs/1/name"]</code>. For
     * information about this syntax, see the Internet Engineering Task Force (IETF)
     * documentation <a href="https://tools.ietf.org/html/rfc6901">JavaScript Object
     * Notation (JSON) Pointer</a>. </p> <p>You must specify either this setting or the
     * <code>All</code> setting, but not both.</p>  <p>Don't use this option to
     * include all paths. Instead, use the <code>All</code> setting. </p> 
     */
    inline const Aws::Vector<Aws::String>& GetIncludedPaths() const { return m_includedPaths; }
    inline bool IncludedPathsHasBeenSet() const { return m_includedPathsHasBeenSet; }
    template<typename IncludedPathsT = Aws::Vector<Aws::String>>
    void SetIncludedPaths(IncludedPathsT&& value) { m_includedPathsHasBeenSet = true; m_includedPaths = std::forward<IncludedPathsT>(value); }
    template<typename IncludedPathsT = Aws::Vector<Aws::String>>
    JsonMatchPattern& WithIncludedPaths(IncludedPathsT&& value) { SetIncludedPaths(std::forward<IncludedPathsT>(value)); return *this;}
    template<typename IncludedPathsT = Aws::String>
    JsonMatchPattern& AddIncludedPaths(IncludedPathsT&& value) { m_includedPathsHasBeenSet = true; m_includedPaths.emplace_back(std::forward<IncludedPathsT>(value)); return *this; }
    ///@}
  private:

    All m_all;
    bool m_allHasBeenSet = false;

    Aws::Vector<Aws::String> m_includedPaths;
    bool m_includedPathsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
