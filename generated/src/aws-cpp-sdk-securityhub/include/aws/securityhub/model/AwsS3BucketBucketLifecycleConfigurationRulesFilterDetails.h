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
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the filter.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& GetPredicate() const { return m_predicate; }
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }
    template<typename PredicateT = AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails>
    void SetPredicate(PredicateT&& value) { m_predicateHasBeenSet = true; m_predicate = std::forward<PredicateT>(value); }
    template<typename PredicateT = AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& WithPredicate(PredicateT&& value) { SetPredicate(std::forward<PredicateT>(value)); return *this;}
    ///@}
  private:

    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails m_predicate;
    bool m_predicateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
