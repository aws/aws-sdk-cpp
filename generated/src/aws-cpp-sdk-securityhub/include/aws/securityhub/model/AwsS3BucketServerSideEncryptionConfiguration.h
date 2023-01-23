/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionRule.h>
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
   * <p>The encryption configuration for the S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketServerSideEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketServerSideEncryptionConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionConfiguration();
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline const Aws::Vector<AwsS3BucketServerSideEncryptionRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline void SetRules(const Aws::Vector<AwsS3BucketServerSideEncryptionRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline void SetRules(Aws::Vector<AwsS3BucketServerSideEncryptionRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline AwsS3BucketServerSideEncryptionConfiguration& WithRules(const Aws::Vector<AwsS3BucketServerSideEncryptionRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline AwsS3BucketServerSideEncryptionConfiguration& WithRules(Aws::Vector<AwsS3BucketServerSideEncryptionRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline AwsS3BucketServerSideEncryptionConfiguration& AddRules(const AwsS3BucketServerSideEncryptionRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline AwsS3BucketServerSideEncryptionConfiguration& AddRules(AwsS3BucketServerSideEncryptionRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsS3BucketServerSideEncryptionRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
