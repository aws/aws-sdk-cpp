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
   * <p>A complex type that controls whether access logs are written for the
   * CloudFront distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionLogging">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionLogging
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionLogging() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionLogging(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionLogging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 bucket to store the access logs in.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    AwsCloudFrontDistributionLogging& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>With this field, you can enable or disable the selected distribution.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsCloudFrontDistributionLogging& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs.</p>
     */
    inline bool GetIncludeCookies() const { return m_includeCookies; }
    inline bool IncludeCookiesHasBeenSet() const { return m_includeCookiesHasBeenSet; }
    inline void SetIncludeCookies(bool value) { m_includeCookiesHasBeenSet = true; m_includeCookies = value; }
    inline AwsCloudFrontDistributionLogging& WithIncludeCookies(bool value) { SetIncludeCookies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    AwsCloudFrontDistributionLogging& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_includeCookies{false};
    bool m_includeCookiesHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
