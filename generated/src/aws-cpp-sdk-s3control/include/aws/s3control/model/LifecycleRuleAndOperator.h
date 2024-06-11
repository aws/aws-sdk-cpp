/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3Tag.h>
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
   * <p>The container for the Outposts bucket lifecycle rule and
   * operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/LifecycleRuleAndOperator">AWS
   * API Reference</a></p>
   */
  class LifecycleRuleAndOperator
  {
  public:
    AWS_S3CONTROL_API LifecycleRuleAndOperator();
    AWS_S3CONTROL_API LifecycleRuleAndOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LifecycleRuleAndOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline LifecycleRuleAndOperator& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline LifecycleRuleAndOperator& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline LifecycleRuleAndOperator& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<S3Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<S3Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LifecycleRuleAndOperator& WithTags(const Aws::Vector<S3Tag>& value) { SetTags(value); return *this;}
    inline LifecycleRuleAndOperator& WithTags(Aws::Vector<S3Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline LifecycleRuleAndOperator& AddTags(const S3Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline LifecycleRuleAndOperator& AddTags(S3Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The non-inclusive minimum object size for the lifecycle rule. Setting this
     * property to 7 means the rule applies to objects with a size that is greater than
     * 7. </p>
     */
    inline long long GetObjectSizeGreaterThan() const{ return m_objectSizeGreaterThan; }
    inline bool ObjectSizeGreaterThanHasBeenSet() const { return m_objectSizeGreaterThanHasBeenSet; }
    inline void SetObjectSizeGreaterThan(long long value) { m_objectSizeGreaterThanHasBeenSet = true; m_objectSizeGreaterThan = value; }
    inline LifecycleRuleAndOperator& WithObjectSizeGreaterThan(long long value) { SetObjectSizeGreaterThan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The non-inclusive maximum object size for the lifecycle rule. Setting this
     * property to 77 means the rule applies to objects with a size that is less than
     * 77. </p>
     */
    inline long long GetObjectSizeLessThan() const{ return m_objectSizeLessThan; }
    inline bool ObjectSizeLessThanHasBeenSet() const { return m_objectSizeLessThanHasBeenSet; }
    inline void SetObjectSizeLessThan(long long value) { m_objectSizeLessThanHasBeenSet = true; m_objectSizeLessThan = value; }
    inline LifecycleRuleAndOperator& WithObjectSizeLessThan(long long value) { SetObjectSizeLessThan(value); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::Vector<S3Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_objectSizeGreaterThan;
    bool m_objectSizeGreaterThanHasBeenSet = false;

    long long m_objectSizeLessThan;
    bool m_objectSizeLessThanHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
