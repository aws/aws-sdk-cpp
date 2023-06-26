/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The configuration for the Glue Crawler for the third-party custom
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CustomLogSourceCrawlerConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomLogSourceCrawlerConfiguration
  {
  public:
    AWS_SECURITYLAKE_API CustomLogSourceCrawlerConfiguration();
    AWS_SECURITYLAKE_API CustomLogSourceCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline CustomLogSourceCrawlerConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline CustomLogSourceCrawlerConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be used by the Glue crawler. The recommended IAM policies are:</p> <ul>
     * <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p> </li> <li> <p>A
     * custom policy granting access to your Amazon S3 Data Lake</p> </li> </ul>
     */
    inline CustomLogSourceCrawlerConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
