/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
    AWS_SESV2_API TrackingOptions();
    AWS_SESV2_API TrackingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API TrackingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline const Aws::String& GetCustomRedirectDomain() const{ return m_customRedirectDomain; }

    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline bool CustomRedirectDomainHasBeenSet() const { return m_customRedirectDomainHasBeenSet; }

    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline void SetCustomRedirectDomain(const Aws::String& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = value; }

    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline void SetCustomRedirectDomain(Aws::String&& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = std::move(value); }

    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline void SetCustomRedirectDomain(const char* value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain.assign(value); }

    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline TrackingOptions& WithCustomRedirectDomain(const Aws::String& value) { SetCustomRedirectDomain(value); return *this;}

    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline TrackingOptions& WithCustomRedirectDomain(Aws::String&& value) { SetCustomRedirectDomain(std::move(value)); return *this;}

    /**
     * <p>The domain to use for tracking open and click events.</p>
     */
    inline TrackingOptions& WithCustomRedirectDomain(const char* value) { SetCustomRedirectDomain(value); return *this;}

  private:

    Aws::String m_customRedirectDomain;
    bool m_customRedirectDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
