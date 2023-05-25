/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
namespace MediaLive
{
namespace Model
{

  /**
   * Pass Through Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PassThroughSettings">AWS
   * API Reference</a></p>
   */
  class PassThroughSettings
  {
  public:
    AWS_MEDIALIVE_API PassThroughSettings();
    AWS_MEDIALIVE_API PassThroughSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API PassThroughSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
