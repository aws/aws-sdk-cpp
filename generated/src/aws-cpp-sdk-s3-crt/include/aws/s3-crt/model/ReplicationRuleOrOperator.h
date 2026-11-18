/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {

/**
 * <p>A container for specifying one or more prefix or tag filters.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ReplicationRuleOrOperator">AWS
 * API Reference</a></p>
 */
class ReplicationRuleOrOperator {
 public:
  AWS_S3CRT_API ReplicationRuleOrOperator() = default;
  AWS_S3CRT_API ReplicationRuleOrOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API ReplicationRuleOrOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>An array of object key name prefixes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrefixes() const { return m_prefixes; }
  inline bool PrefixesHasBeenSet() const { return m_prefixesHasBeenSet; }
  template <typename PrefixesT = Aws::Vector<Aws::String>>
  void SetPrefixes(PrefixesT&& value) {
    m_prefixesHasBeenSet = true;
    m_prefixes = std::forward<PrefixesT>(value);
  }
  template <typename PrefixesT = Aws::Vector<Aws::String>>
  ReplicationRuleOrOperator& WithPrefixes(PrefixesT&& value) {
    SetPrefixes(std::forward<PrefixesT>(value));
    return *this;
  }
  template <typename PrefixesT = Aws::String>
  ReplicationRuleOrOperator& AddPrefixes(PrefixesT&& value) {
    m_prefixesHasBeenSet = true;
    m_prefixes.emplace_back(std::forward<PrefixesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of tags containing key and value pairs.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ReplicationRuleOrOperator& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ReplicationRuleOrOperator& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_prefixes;

  Aws::Vector<Tag> m_tags;
  bool m_prefixesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
