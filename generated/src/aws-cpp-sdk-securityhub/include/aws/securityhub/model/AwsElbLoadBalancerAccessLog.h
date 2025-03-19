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
   * <p>Contains information about the access log configuration for the load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerAccessLog">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerAccessLog
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerAccessLog() = default;
    AWS_SECURITYHUB_API AwsElbLoadBalancerAccessLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerAccessLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The interval in minutes for publishing the access logs.</p> <p>You can
     * publish access logs either every 5 minutes or every 60 minutes.</p>
     */
    inline int GetEmitInterval() const { return m_emitInterval; }
    inline bool EmitIntervalHasBeenSet() const { return m_emitIntervalHasBeenSet; }
    inline void SetEmitInterval(int value) { m_emitIntervalHasBeenSet = true; m_emitInterval = value; }
    inline AwsElbLoadBalancerAccessLog& WithEmitInterval(int value) { SetEmitInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether access logs are enabled for the load balancer.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsElbLoadBalancerAccessLog& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    AwsElbLoadBalancerAccessLog& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline const Aws::String& GetS3BucketPrefix() const { return m_s3BucketPrefix; }
    inline bool S3BucketPrefixHasBeenSet() const { return m_s3BucketPrefixHasBeenSet; }
    template<typename S3BucketPrefixT = Aws::String>
    void SetS3BucketPrefix(S3BucketPrefixT&& value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix = std::forward<S3BucketPrefixT>(value); }
    template<typename S3BucketPrefixT = Aws::String>
    AwsElbLoadBalancerAccessLog& WithS3BucketPrefix(S3BucketPrefixT&& value) { SetS3BucketPrefix(std::forward<S3BucketPrefixT>(value)); return *this;}
    ///@}
  private:

    int m_emitInterval{0};
    bool m_emitIntervalHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3BucketPrefix;
    bool m_s3BucketPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
