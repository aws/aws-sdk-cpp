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
   * <p>Describes the versioning state of an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketVersioningConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketVersioningConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketVersioningConfiguration() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketVersioningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketVersioningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether MFA delete is currently enabled in the S3 bucket versioning
     * configuration. If the S3 bucket was never configured with MFA delete, then this
     * attribute is not included.</p>
     */
    inline bool GetIsMfaDeleteEnabled() const { return m_isMfaDeleteEnabled; }
    inline bool IsMfaDeleteEnabledHasBeenSet() const { return m_isMfaDeleteEnabledHasBeenSet; }
    inline void SetIsMfaDeleteEnabled(bool value) { m_isMfaDeleteEnabledHasBeenSet = true; m_isMfaDeleteEnabled = value; }
    inline AwsS3BucketBucketVersioningConfiguration& WithIsMfaDeleteEnabled(bool value) { SetIsMfaDeleteEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versioning status of the S3 bucket. Valid values are <code>Enabled</code>
     * or <code>Suspended</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsS3BucketBucketVersioningConfiguration& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    bool m_isMfaDeleteEnabled{false};
    bool m_isMfaDeleteEnabledHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
