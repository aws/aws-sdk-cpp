/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ReplicationRuleOrOperator.h>
#include <aws/s3/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {

/**
 * <p>A container for specifying a filter that excludes matching objects from the
 * replication rule. Specify exactly one <code>Prefix</code>, <code>Tag</code>, or
 * <code>Or</code> child element.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ReplicationRuleNotOperator">AWS
 * API Reference</a></p>
 */
class ReplicationRuleNotOperator {
 public:
  AWS_S3_API ReplicationRuleNotOperator() = default;
  AWS_S3_API ReplicationRuleNotOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3_API ReplicationRuleNotOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>An object key name prefix that identifies objects to exclude from the
   * replication rule.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  ReplicationRuleNotOperator& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A tag key and value that identify objects to exclude from the replication
   * rule.</p>
   */
  inline const Tag& GetTag() const { return m_tag; }
  inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
  template <typename TagT = Tag>
  void SetTag(TagT&& value) {
    m_tagHasBeenSet = true;
    m_tag = std::forward<TagT>(value);
  }
  template <typename TagT = Tag>
  ReplicationRuleNotOperator& WithTag(TagT&& value) {
    SetTag(std::forward<TagT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for specifying prefixes and tags. An object is excluded from the
   * replication rule if it matches any of the specified filters.</p>
   */
  inline const ReplicationRuleOrOperator& GetOr() const { return m_or; }
  inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
  template <typename OrT = ReplicationRuleOrOperator>
  void SetOr(OrT&& value) {
    m_orHasBeenSet = true;
    m_or = std::forward<OrT>(value);
  }
  template <typename OrT = ReplicationRuleOrOperator>
  ReplicationRuleNotOperator& WithOr(OrT&& value) {
    SetOr(std::forward<OrT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_prefix;

  Tag m_tag;

  ReplicationRuleOrOperator m_or;
  bool m_prefixHasBeenSet = false;
  bool m_tagHasBeenSet = false;
  bool m_orHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
