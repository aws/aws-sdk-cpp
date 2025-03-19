/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/HttpsPolicy.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines the tracking options for a configuration set. When you
   * use the Amazon SES API v2 to send an email, it contains an invisible image
   * that's used to track when recipients open your email. If your email contains
   * links, those links are changed slightly in order to track when recipients click
   * them.</p> <p>These images and links include references to a domain operated by
   * Amazon Web Services. You can optionally configure the Amazon SES to use a domain
   * that you operate for these images and links.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TrackingOptions">AWS
   * API Reference</a></p>
   */
  class TrackingOptions
  {
  public:
    AWS_SESV2_API TrackingOptions() = default;
    AWS_SESV2_API TrackingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API TrackingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline const Aws::String& GetCustomRedirectDomain() const { return m_customRedirectDomain; }
    inline bool CustomRedirectDomainHasBeenSet() const { return m_customRedirectDomainHasBeenSet; }
    template<typename CustomRedirectDomainT = Aws::String>
    void SetCustomRedirectDomain(CustomRedirectDomainT&& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = std::forward<CustomRedirectDomainT>(value); }
    template<typename CustomRedirectDomainT = Aws::String>
    TrackingOptions& WithCustomRedirectDomain(CustomRedirectDomainT&& value) { SetCustomRedirectDomain(std::forward<CustomRedirectDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The https policy to use for tracking open and click events.</p>
     */
    inline HttpsPolicy GetHttpsPolicy() const { return m_httpsPolicy; }
    inline bool HttpsPolicyHasBeenSet() const { return m_httpsPolicyHasBeenSet; }
    inline void SetHttpsPolicy(HttpsPolicy value) { m_httpsPolicyHasBeenSet = true; m_httpsPolicy = value; }
    inline TrackingOptions& WithHttpsPolicy(HttpsPolicy value) { SetHttpsPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_customRedirectDomain;
    bool m_customRedirectDomainHasBeenSet = false;

    HttpsPolicy m_httpsPolicy{HttpsPolicy::NOT_SET};
    bool m_httpsPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
