/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>The image scanning configuration for a repository.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcrRepositoryImageScanningConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcrRepositoryImageScanningConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcrRepositoryImageScanningConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcrRepositoryImageScanningConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcrRepositoryImageScanningConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to scan images after they are pushed to a repository.</p>
     */
    inline bool GetScanOnPush() const{ return m_scanOnPush; }

    /**
     * <p>Whether to scan images after they are pushed to a repository.</p>
     */
    inline bool ScanOnPushHasBeenSet() const { return m_scanOnPushHasBeenSet; }

    /**
     * <p>Whether to scan images after they are pushed to a repository.</p>
     */
    inline void SetScanOnPush(bool value) { m_scanOnPushHasBeenSet = true; m_scanOnPush = value; }

    /**
     * <p>Whether to scan images after they are pushed to a repository.</p>
     */
    inline AwsEcrRepositoryImageScanningConfigurationDetails& WithScanOnPush(bool value) { SetScanOnPush(value); return *this;}

  private:

    bool m_scanOnPush;
    bool m_scanOnPushHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
