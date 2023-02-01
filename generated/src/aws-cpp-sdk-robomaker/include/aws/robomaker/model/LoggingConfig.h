/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>The logging configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class LoggingConfig
  {
  public:
    AWS_ROBOMAKER_API LoggingConfig();
    AWS_ROBOMAKER_API LoggingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API LoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
