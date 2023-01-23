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
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleCondition();
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline const Aws::String& GetHttpErrorCodeReturnedEquals() const{ return m_httpErrorCodeReturnedEquals; }

    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline bool HttpErrorCodeReturnedEqualsHasBeenSet() const { return m_httpErrorCodeReturnedEqualsHasBeenSet; }

    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline void SetHttpErrorCodeReturnedEquals(const Aws::String& value) { m_httpErrorCodeReturnedEqualsHasBeenSet = true; m_httpErrorCodeReturnedEquals = value; }

    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline void SetHttpErrorCodeReturnedEquals(Aws::String&& value) { m_httpErrorCodeReturnedEqualsHasBeenSet = true; m_httpErrorCodeReturnedEquals = std::move(value); }

    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline void SetHttpErrorCodeReturnedEquals(const char* value) { m_httpErrorCodeReturnedEqualsHasBeenSet = true; m_httpErrorCodeReturnedEquals.assign(value); }

    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithHttpErrorCodeReturnedEquals(const Aws::String& value) { SetHttpErrorCodeReturnedEquals(value); return *this;}

    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithHttpErrorCodeReturnedEquals(Aws::String&& value) { SetHttpErrorCodeReturnedEquals(std::move(value)); return *this;}

    /**
     * <p>Indicates to redirect the request if the HTTP error code matches this
     * value.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithHttpErrorCodeReturnedEquals(const char* value) { SetHttpErrorCodeReturnedEquals(value); return *this;}


    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline const Aws::String& GetKeyPrefixEquals() const{ return m_keyPrefixEquals; }

    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline bool KeyPrefixEqualsHasBeenSet() const { return m_keyPrefixEqualsHasBeenSet; }

    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline void SetKeyPrefixEquals(const Aws::String& value) { m_keyPrefixEqualsHasBeenSet = true; m_keyPrefixEquals = value; }

    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline void SetKeyPrefixEquals(Aws::String&& value) { m_keyPrefixEqualsHasBeenSet = true; m_keyPrefixEquals = std::move(value); }

    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline void SetKeyPrefixEquals(const char* value) { m_keyPrefixEqualsHasBeenSet = true; m_keyPrefixEquals.assign(value); }

    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithKeyPrefixEquals(const Aws::String& value) { SetKeyPrefixEquals(value); return *this;}

    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithKeyPrefixEquals(Aws::String&& value) { SetKeyPrefixEquals(std::move(value)); return *this;}

    /**
     * <p>Indicates to redirect the request if the key prefix matches this value.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleCondition& WithKeyPrefixEquals(const char* value) { SetKeyPrefixEquals(value); return *this;}

  private:

    Aws::String m_httpErrorCodeReturnedEquals;
    bool m_httpErrorCodeReturnedEqualsHasBeenSet = false;

    Aws::String m_keyPrefixEquals;
    bool m_keyPrefixEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
