/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails.h>
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
   * <p>The configuration for the filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The values to use for the filter.</p>
     */
    inline const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>& GetOperands() const { return m_operands; }
    inline bool OperandsHasBeenSet() const { return m_operandsHasBeenSet; }
    template<typename OperandsT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>>
    void SetOperands(OperandsT&& value) { m_operandsHasBeenSet = true; m_operands = std::forward<OperandsT>(value); }
    template<typename OperandsT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithOperands(OperandsT&& value) { SetOperands(std::forward<OperandsT>(value)); return *this;}
    template<typename OperandsT = AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& AddOperands(OperandsT&& value) { m_operandsHasBeenSet = true; m_operands.emplace_back(std::forward<OperandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A prefix filter.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag filter.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails& GetTag() const { return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    template<typename TagT = AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails>
    void SetTag(TagT&& value) { m_tagHasBeenSet = true; m_tag = std::forward<TagT>(value); }
    template<typename TagT = AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithTag(TagT&& value) { SetTag(std::forward<TagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails> m_operands;
    bool m_operandsHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails m_tag;
    bool m_tagHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
