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
   * Embedded Plus Scte20 Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EmbeddedPlusScte20DestinationSettings">AWS
   * API Reference</a></p>
   */
  class EmbeddedPlusScte20DestinationSettings
  {
  public:
    AWS_MEDIALIVE_API EmbeddedPlusScte20DestinationSettings();
    AWS_MEDIALIVE_API EmbeddedPlusScte20DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EmbeddedPlusScte20DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
