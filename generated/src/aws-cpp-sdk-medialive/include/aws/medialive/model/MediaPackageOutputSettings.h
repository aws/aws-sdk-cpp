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
   * Media Package Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageOutputSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageOutputSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageOutputSettings();
    AWS_MEDIALIVE_API MediaPackageOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
