﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
   * <p>Inspect all query arguments of the web request. </p> <p>This is used in the
   * <a>FieldToMatch</a> specification for some web request component types. </p>
   * <p>JSON specification: <code>"AllQueryArguments": {}</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AllQueryArguments">AWS
   * API Reference</a></p>
   */
  class AllQueryArguments
  {
  public:
    AWS_WAFV2_API AllQueryArguments() = default;
    AWS_WAFV2_API AllQueryArguments(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AllQueryArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
