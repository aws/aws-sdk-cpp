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
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails();
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values to use for the filter.</p>
     */
    inline const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>& GetOperands() const{ return m_operands; }

    /**
     * <p>The values to use for the filter.</p>
     */
    inline bool OperandsHasBeenSet() const { return m_operandsHasBeenSet; }

    /**
     * <p>The values to use for the filter.</p>
     */
    inline void SetOperands(const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>& value) { m_operandsHasBeenSet = true; m_operands = value; }

    /**
     * <p>The values to use for the filter.</p>
     */
    inline void SetOperands(Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>&& value) { m_operandsHasBeenSet = true; m_operands = std::move(value); }

    /**
     * <p>The values to use for the filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithOperands(const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>& value) { SetOperands(value); return *this;}

    /**
     * <p>The values to use for the filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithOperands(Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails>&& value) { SetOperands(std::move(value)); return *this;}

    /**
     * <p>The values to use for the filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& AddOperands(const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& value) { m_operandsHasBeenSet = true; m_operands.push_back(value); return *this; }

    /**
     * <p>The values to use for the filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& AddOperands(AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails&& value) { m_operandsHasBeenSet = true; m_operands.push_back(std::move(value)); return *this; }


    /**
     * <p>A prefix filter.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>A prefix filter.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>A prefix filter.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>A prefix filter.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>A prefix filter.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>A prefix filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>A prefix filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>A prefix filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>A tag filter.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails& GetTag() const{ return m_tag; }

    /**
     * <p>A tag filter.</p>
     */
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }

    /**
     * <p>A tag filter.</p>
     */
    inline void SetTag(const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails& value) { m_tagHasBeenSet = true; m_tag = value; }

    /**
     * <p>A tag filter.</p>
     */
    inline void SetTag(AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }

    /**
     * <p>A tag filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithTag(const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails& value) { SetTag(value); return *this;}

    /**
     * <p>A tag filter.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithTag(AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateTagDetails&& value) { SetTag(std::move(value)); return *this;}


    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Whether to use <code>AND</code> or <code>OR</code> to join the operands.
     * Valid values are <code>LifecycleAndOperator</code> or
     * <code>LifecycleOrOperator</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& WithType(const char* value) { SetType(value); return *this;}

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
