﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The optional configuration for a server that serves segments. Use this if you
   * want the segment delivery server to be different from the source location
   * server. For example, you can configure your source location server to be an
   * origination server, such as MediaPackage, and the segment delivery server to be
   * a content delivery network (CDN), such as CloudFront. If you don't specify a
   * segment delivery server, then the source location server is used.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DefaultSegmentDeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultSegmentDeliveryConfiguration
  {
  public:
    AWS_MEDIATAILOR_API DefaultSegmentDeliveryConfiguration() = default;
    AWS_MEDIATAILOR_API DefaultSegmentDeliveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API DefaultSegmentDeliveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline const Aws::String& GetBaseUrl() const { return m_baseUrl; }
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }
    template<typename BaseUrlT = Aws::String>
    void SetBaseUrl(BaseUrlT&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::forward<BaseUrlT>(value); }
    template<typename BaseUrlT = Aws::String>
    DefaultSegmentDeliveryConfiguration& WithBaseUrl(BaseUrlT&& value) { SetBaseUrl(std::forward<BaseUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
