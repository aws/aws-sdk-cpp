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
   * <p>The configuration for using a content delivery network (CDN), like Amazon
   * CloudFront, for content and ad segment management.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CdnConfiguration">AWS
   * API Reference</a></p>
   */
  class CdnConfiguration
  {
  public:
    AWS_MEDIATAILOR_API CdnConfiguration() = default;
    AWS_MEDIATAILOR_API CdnConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API CdnConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A non-default content delivery network (CDN) to serve ad segments. By
     * default, AWS Elemental MediaTailor uses Amazon CloudFront with default cache
     * settings as its CDN for ad segments. To set up an alternate CDN, create a rule
     * in your CDN for the origin ads.mediatailor.<i>&lt;region&gt;</i>.amazonaws.com.
     * Then specify the rule's name in this <code>AdSegmentUrlPrefix</code>. When AWS
     * Elemental MediaTailor serves a manifest, it reports your CDN as the source for
     * ad segments.</p>
     */
    inline const Aws::String& GetAdSegmentUrlPrefix() const { return m_adSegmentUrlPrefix; }
    inline bool AdSegmentUrlPrefixHasBeenSet() const { return m_adSegmentUrlPrefixHasBeenSet; }
    template<typename AdSegmentUrlPrefixT = Aws::String>
    void SetAdSegmentUrlPrefix(AdSegmentUrlPrefixT&& value) { m_adSegmentUrlPrefixHasBeenSet = true; m_adSegmentUrlPrefix = std::forward<AdSegmentUrlPrefixT>(value); }
    template<typename AdSegmentUrlPrefixT = Aws::String>
    CdnConfiguration& WithAdSegmentUrlPrefix(AdSegmentUrlPrefixT&& value) { SetAdSegmentUrlPrefix(std::forward<AdSegmentUrlPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A content delivery network (CDN) to cache content segments, so that content
     * requests don’t always have to go to the origin server. First, create a rule in
     * your CDN for the content segment origin server. Then specify the rule's name in
     * this <code>ContentSegmentUrlPrefix</code>. When AWS Elemental MediaTailor serves
     * a manifest, it reports your CDN as the source for content segments.</p>
     */
    inline const Aws::String& GetContentSegmentUrlPrefix() const { return m_contentSegmentUrlPrefix; }
    inline bool ContentSegmentUrlPrefixHasBeenSet() const { return m_contentSegmentUrlPrefixHasBeenSet; }
    template<typename ContentSegmentUrlPrefixT = Aws::String>
    void SetContentSegmentUrlPrefix(ContentSegmentUrlPrefixT&& value) { m_contentSegmentUrlPrefixHasBeenSet = true; m_contentSegmentUrlPrefix = std::forward<ContentSegmentUrlPrefixT>(value); }
    template<typename ContentSegmentUrlPrefixT = Aws::String>
    CdnConfiguration& WithContentSegmentUrlPrefix(ContentSegmentUrlPrefixT&& value) { SetContentSegmentUrlPrefix(std::forward<ContentSegmentUrlPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adSegmentUrlPrefix;
    bool m_adSegmentUrlPrefixHasBeenSet = false;

    Aws::String m_contentSegmentUrlPrefix;
    bool m_contentSegmentUrlPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
