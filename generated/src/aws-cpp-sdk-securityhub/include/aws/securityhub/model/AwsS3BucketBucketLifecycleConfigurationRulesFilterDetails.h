/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails.h>
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
   * <p>Identifies the objects that a rule applies to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails();
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the filter.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& GetPredicate() const{ return m_predicate; }

    /**
     * <p>The configuration for the filter.</p>
     */
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }

    /**
     * <p>The configuration for the filter.</p>
     */
    inline void SetPredicate(const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& value) { m_predicateHasBeenSet = true; m_predicate = value; }

    /**
     * <p>The configuration for the filter.</p>
     */
    inline void SetPredicate(AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails&& value) { m_predicateHasBeenSet = true; m_predicate = std::move(value); }

    /**
     * <p>The configuration for the filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& WithPredicate(const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& value) { SetPredicate(value); return *this;}

    /**
     * <p>The configuration for the filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& WithPredicate(AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails&& value) { SetPredicate(std::move(value)); return *this;}

  private:

    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails m_predicate;
    bool m_predicateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
