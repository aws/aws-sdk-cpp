﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
   * <p>Inspect one query argument in the web request, identified by name, for
   * example <i>UserName</i> or <i>SalesRegion</i>. The name isn't case sensitive.
   * </p> <p>This is used to indicate the web request component to inspect, in the
   * <a>FieldToMatch</a> specification. </p> <p>Example JSON:
   * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SingleQueryArgument">AWS
   * API Reference</a></p>
   */
  class SingleQueryArgument
  {
  public:
    AWS_WAFV2_API SingleQueryArgument() = default;
    AWS_WAFV2_API SingleQueryArgument(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API SingleQueryArgument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the query argument to inspect.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SingleQueryArgument& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
