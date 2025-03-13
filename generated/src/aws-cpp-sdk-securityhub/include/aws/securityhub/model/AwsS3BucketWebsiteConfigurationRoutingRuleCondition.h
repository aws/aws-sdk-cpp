/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The condition that must be met in order to apply the routing
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketWebsiteConfigurationRoutingRuleCondition">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketWebsiteConfigurationRoutingRuleCondition
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleCondition() = default;
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline const Aws::String& GetHttpErrorCodeReturnedEquals() const { return m_httpErrorCodeReturnedEquals; }
    inline bool HttpErrorCodeReturnedEqualsHasBeenSet() const { return m_httpErrorCodeReturnedEqualsHasBeenSet; }
    template<typename HttpErrorCodeReturnedEqualsT = Aws::String>
    void SetHttpErrorCodeReturnedEquals(HttpErrorCodeReturnedEqualsT&& value) { m_httpErrorCodeReturnedEqualsHasBeenSet = true; m_httpErrorCodeReturnedEquals = std::forward<HttpErrorCodeReturnedEqualsT>(value); }
    template<typename HttpErrorCodeReturnedEqualsT = Aws::String>
    AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithHttpErrorCodeReturnedEquals(HttpErrorCodeReturnedEqualsT&& value) { SetHttpErrorCodeReturnedEquals(std::forward<HttpErrorCodeReturnedEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline const Aws::String& GetKeyPrefixEquals() const { return m_keyPrefixEquals; }
    inline bool KeyPrefixEqualsHasBeenSet() const { return m_keyPrefixEqualsHasBeenSet; }
    template<typename KeyPrefixEqualsT = Aws::String>
    void SetKeyPrefixEquals(KeyPrefixEqualsT&& value) { m_keyPrefixEqualsHasBeenSet = true; m_keyPrefixEquals = std::forward<KeyPrefixEqualsT>(value); }
    template<typename KeyPrefixEqualsT = Aws::String>
    AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithKeyPrefixEquals(KeyPrefixEqualsT&& value) { SetKeyPrefixEquals(std::forward<KeyPrefixEqualsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpErrorCodeReturnedEquals;
    bool m_httpErrorCodeReturnedEqualsHasBeenSet = false;

    Aws::String m_keyPrefixEquals;
    bool m_keyPrefixEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
