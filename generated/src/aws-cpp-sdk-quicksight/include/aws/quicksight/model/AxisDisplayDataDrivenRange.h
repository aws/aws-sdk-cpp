/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The options that are saved for future extension.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisDisplayDataDrivenRange">AWS
   * API Reference</a></p>
   */
  class AxisDisplayDataDrivenRange
  {
  public:
    AWS_QUICKSIGHT_API AxisDisplayDataDrivenRange();
    AWS_QUICKSIGHT_API AxisDisplayDataDrivenRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisDisplayDataDrivenRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
