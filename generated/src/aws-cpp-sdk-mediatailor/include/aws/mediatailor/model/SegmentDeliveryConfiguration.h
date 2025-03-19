/**
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
   * <p>The segment delivery configuration settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SegmentDeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class SegmentDeliveryConfiguration
  {
  public:
    AWS_MEDIATAILOR_API SegmentDeliveryConfiguration() = default;
    AWS_MEDIATAILOR_API SegmentDeliveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SegmentDeliveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline const Aws::String& GetBaseUrl() const { return m_baseUrl; }
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }
    template<typename BaseUrlT = Aws::String>
    void SetBaseUrl(BaseUrlT&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::forward<BaseUrlT>(value); }
    template<typename BaseUrlT = Aws::String>
    SegmentDeliveryConfiguration& WithBaseUrl(BaseUrlT&& value) { SetBaseUrl(std::forward<BaseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SegmentDeliveryConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
