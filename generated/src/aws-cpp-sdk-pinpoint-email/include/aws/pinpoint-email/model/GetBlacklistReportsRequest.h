/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to retrieve a list of the blacklists that your dedicated IP
   * addresses appear on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetBlacklistReportsRequest">AWS
   * API Reference</a></p>
   */
  class GetBlacklistReportsRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API GetBlacklistReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlacklistReports"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;

    AWS_PINPOINTEMAIL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlacklistItemNames() const{ return m_blacklistItemNames; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline bool BlacklistItemNamesHasBeenSet() const { return m_blacklistItemNamesHasBeenSet; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline void SetBlacklistItemNames(const Aws::Vector<Aws::String>& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames = value; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline void SetBlacklistItemNames(Aws::Vector<Aws::String>&& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames = std::move(value); }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& WithBlacklistItemNames(const Aws::Vector<Aws::String>& value) { SetBlacklistItemNames(value); return *this;}

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& WithBlacklistItemNames(Aws::Vector<Aws::String>&& value) { SetBlacklistItemNames(std::move(value)); return *this;}

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& AddBlacklistItemNames(const Aws::String& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames.push_back(value); return *this; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& AddBlacklistItemNames(Aws::String&& value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IP addresses that you want to retrieve blacklist information about.
     * You can only specify the dedicated IP addresses that you use to send email using
     * Amazon Pinpoint or Amazon SES.</p>
     */
    inline GetBlacklistReportsRequest& AddBlacklistItemNames(const char* value) { m_blacklistItemNamesHasBeenSet = true; m_blacklistItemNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_blacklistItemNames;
    bool m_blacklistItemNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
