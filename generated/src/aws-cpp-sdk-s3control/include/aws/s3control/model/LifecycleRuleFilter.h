/**
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
    AWS_S3CONTROL_API LifecycleRuleFilter() = default;
    AWS_S3CONTROL_API LifecycleRuleFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LifecycleRuleFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     *  <p>When you're using XML requests, you must replace special
     * characters (such as carriage returns) in object keys with their equivalent XML
     * entity codes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    LifecycleRuleFilter& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Tag& GetTag() const { return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    template<typename TagT = S3Tag>
    void SetTag(TagT&& value) { m_tagHasBeenSet = true; m_tag = std::forward<TagT>(value); }
    template<typename TagT = S3Tag>
    LifecycleRuleFilter& WithTag(TagT&& value) { SetTag(std::forward<TagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container for the <code>AND</code> condition for the lifecycle rule.</p>
     */
    inline const LifecycleRuleAndOperator& GetAnd() const { return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    template<typename AndT = LifecycleRuleAndOperator>
    void SetAnd(AndT&& value) { m_andHasBeenSet = true; m_and = std::forward<AndT>(value); }
    template<typename AndT = LifecycleRuleAndOperator>
    LifecycleRuleFilter& WithAnd(AndT&& value) { SetAnd(std::forward<AndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum object size to which the rule applies.</p>
     */
    inline long long GetObjectSizeGreaterThan() const { return m_objectSizeGreaterThan; }
    inline bool ObjectSizeGreaterThanHasBeenSet() const { return m_objectSizeGreaterThanHasBeenSet; }
    inline void SetObjectSizeGreaterThan(long long value) { m_objectSizeGreaterThanHasBeenSet = true; m_objectSizeGreaterThan = value; }
    inline LifecycleRuleFilter& WithObjectSizeGreaterThan(long long value) { SetObjectSizeGreaterThan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum object size to which the rule applies.</p>
     */
    inline long long GetObjectSizeLessThan() const { return m_objectSizeLessThan; }
    inline bool ObjectSizeLessThanHasBeenSet() const { return m_objectSizeLessThanHasBeenSet; }
    inline void SetObjectSizeLessThan(long long value) { m_objectSizeLessThanHasBeenSet = true; m_objectSizeLessThan = value; }
    inline LifecycleRuleFilter& WithObjectSizeLessThan(long long value) { SetObjectSizeLessThan(value); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    S3Tag m_tag;
    bool m_tagHasBeenSet = false;

    LifecycleRuleAndOperator m_and;
    bool m_andHasBeenSet = false;

    long long m_objectSizeGreaterThan{0};
    bool m_objectSizeGreaterThanHasBeenSet = false;

    long long m_objectSizeLessThan{0};
    bool m_objectSizeLessThanHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
