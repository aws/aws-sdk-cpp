/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/HttpsPolicy.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to add a custom domain for tracking open and click events to a
   * configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetTrackingOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetTrackingOptionsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutConfigurationSetTrackingOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetTrackingOptions"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    PutConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain to use to track open and click events.</p>
     */
    inline const Aws::String& GetCustomRedirectDomain() const { return m_customRedirectDomain; }
    inline bool CustomRedirectDomainHasBeenSet() const { return m_customRedirectDomainHasBeenSet; }
    template<typename CustomRedirectDomainT = Aws::String>
    void SetCustomRedirectDomain(CustomRedirectDomainT&& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = std::forward<CustomRedirectDomainT>(value); }
    template<typename CustomRedirectDomainT = Aws::String>
    PutConfigurationSetTrackingOptionsRequest& WithCustomRedirectDomain(CustomRedirectDomainT&& value) { SetCustomRedirectDomain(std::forward<CustomRedirectDomainT>(value)); return *this;}
    ///@}

    ///@{
    
    inline HttpsPolicy GetHttpsPolicy() const { return m_httpsPolicy; }
    inline bool HttpsPolicyHasBeenSet() const { return m_httpsPolicyHasBeenSet; }
    inline void SetHttpsPolicy(HttpsPolicy value) { m_httpsPolicyHasBeenSet = true; m_httpsPolicy = value; }
    inline PutConfigurationSetTrackingOptionsRequest& WithHttpsPolicy(HttpsPolicy value) { SetHttpsPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_customRedirectDomain;
    bool m_customRedirectDomainHasBeenSet = false;

    HttpsPolicy m_httpsPolicy{HttpsPolicy::NOT_SET};
    bool m_httpsPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
