﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/S3Tag.h>
#include <aws/s3control/model/LifecycleRuleAndOperator.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The container for the filter of the lifecycle rule.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/LifecycleRuleFilter">AWS
   * API Reference</a></p>
   */
  class LifecycleRuleFilter
  {
  public:
    AWS_S3CONTROL_API LifecycleRuleFilter();
    AWS_S3CONTROL_API LifecycleRuleFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LifecycleRuleFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline LifecycleRuleFilter& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline LifecycleRuleFilter& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline LifecycleRuleFilter& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    
    inline const S3Tag& GetTag() const{ return m_tag; }

    
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }

    
    inline void SetTag(const S3Tag& value) { m_tagHasBeenSet = true; m_tag = value; }

    
    inline void SetTag(S3Tag&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }

    
    inline LifecycleRuleFilter& WithTag(const S3Tag& value) { SetTag(value); return *this;}

    
    inline LifecycleRuleFilter& WithTag(S3Tag&& value) { SetTag(std::move(value)); return *this;}


    /**
     * <p>The container for the <code>AND</code> condition for the lifecycle rule.</p>
     */
    inline const LifecycleRuleAndOperator& GetAnd() const{ return m_and; }

    /**
     * <p>The container for the <code>AND</code> condition for the lifecycle rule.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>The container for the <code>AND</code> condition for the lifecycle rule.</p>
     */
    inline void SetAnd(const LifecycleRuleAndOperator& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>The container for the <code>AND</code> condition for the lifecycle rule.</p>
     */
    inline void SetAnd(LifecycleRuleAndOperator&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>The container for the <code>AND</code> condition for the lifecycle rule.</p>
     */
    inline LifecycleRuleFilter& WithAnd(const LifecycleRuleAndOperator& value) { SetAnd(value); return *this;}

    /**
     * <p>The container for the <code>AND</code> condition for the lifecycle rule.</p>
     */
    inline LifecycleRuleFilter& WithAnd(LifecycleRuleAndOperator&& value) { SetAnd(std::move(value)); return *this;}


    /**
     * <p>Minimum object size to which the rule applies.</p>
     */
    inline long long GetObjectSizeGreaterThan() const{ return m_objectSizeGreaterThan; }

    /**
     * <p>Minimum object size to which the rule applies.</p>
     */
    inline bool ObjectSizeGreaterThanHasBeenSet() const { return m_objectSizeGreaterThanHasBeenSet; }

    /**
     * <p>Minimum object size to which the rule applies.</p>
     */
    inline void SetObjectSizeGreaterThan(long long value) { m_objectSizeGreaterThanHasBeenSet = true; m_objectSizeGreaterThan = value; }

    /**
     * <p>Minimum object size to which the rule applies.</p>
     */
    inline LifecycleRuleFilter& WithObjectSizeGreaterThan(long long value) { SetObjectSizeGreaterThan(value); return *this;}


    /**
     * <p>Maximum object size to which the rule applies.</p>
     */
    inline long long GetObjectSizeLessThan() const{ return m_objectSizeLessThan; }

    /**
     * <p>Maximum object size to which the rule applies.</p>
     */
    inline bool ObjectSizeLessThanHasBeenSet() const { return m_objectSizeLessThanHasBeenSet; }

    /**
     * <p>Maximum object size to which the rule applies.</p>
     */
    inline void SetObjectSizeLessThan(long long value) { m_objectSizeLessThanHasBeenSet = true; m_objectSizeLessThan = value; }

    /**
     * <p>Maximum object size to which the rule applies.</p>
     */
    inline LifecycleRuleFilter& WithObjectSizeLessThan(long long value) { SetObjectSizeLessThan(value); return *this;}

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    S3Tag m_tag;
    bool m_tagHasBeenSet = false;

    LifecycleRuleAndOperator m_and;
    bool m_andHasBeenSet = false;

    long long m_objectSizeGreaterThan;
    bool m_objectSizeGreaterThanHasBeenSet = false;

    long long m_objectSizeLessThan;
    bool m_objectSizeLessThanHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
