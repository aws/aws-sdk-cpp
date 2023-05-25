/**
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
   * <p>Inspect the HTTP method of the web request. The method indicates the type of
   * operation that the request is asking the origin to perform. </p> <p>This is used
   * only in the <a>FieldToMatch</a> specification for some web request component
   * types. </p> <p>JSON specification: <code>"Method": {}</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Method">AWS API
   * Reference</a></p>
   */
  class Method
  {
  public:
    AWS_WAFV2_API Method();
    AWS_WAFV2_API Method(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Method& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
