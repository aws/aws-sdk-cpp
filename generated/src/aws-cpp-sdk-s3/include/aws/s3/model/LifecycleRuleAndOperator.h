﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Tag.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>This is used in a Lifecycle Rule Filter to apply a logical AND to two or more
   * predicates. The Lifecycle Rule will apply to any object matching all of the
   * predicates configured inside the And operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/LifecycleRuleAndOperator">AWS
   * API Reference</a></p>
   */
  class LifecycleRuleAndOperator
  {
  public:
    AWS_S3_API LifecycleRuleAndOperator() = default;
    AWS_S3_API LifecycleRuleAndOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API LifecycleRuleAndOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    LifecycleRuleAndOperator& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LifecycleRuleAndOperator& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LifecycleRuleAndOperator& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Minimum object size to which the rule applies.</p>
     */
    inline long long GetObjectSizeGreaterThan() const { return m_objectSizeGreaterThan; }
    inline bool ObjectSizeGreaterThanHasBeenSet() const { return m_objectSizeGreaterThanHasBeenSet; }
    inline void SetObjectSizeGreaterThan(long long value) { m_objectSizeGreaterThanHasBeenSet = true; m_objectSizeGreaterThan = value; }
    inline LifecycleRuleAndOperator& WithObjectSizeGreaterThan(long long value) { SetObjectSizeGreaterThan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum object size to which the rule applies.</p>
     */
    inline long long GetObjectSizeLessThan() const { return m_objectSizeLessThan; }
    inline bool ObjectSizeLessThanHasBeenSet() const { return m_objectSizeLessThanHasBeenSet; }
    inline void SetObjectSizeLessThan(long long value) { m_objectSizeLessThanHasBeenSet = true; m_objectSizeLessThan = value; }
    inline LifecycleRuleAndOperator& WithObjectSizeLessThan(long long value) { SetObjectSizeLessThan(value); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_objectSizeGreaterThan{0};
    bool m_objectSizeGreaterThanHasBeenSet = false;

    long long m_objectSizeLessThan{0};
    bool m_objectSizeLessThanHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
