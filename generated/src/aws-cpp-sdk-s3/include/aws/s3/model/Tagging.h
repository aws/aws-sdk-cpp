/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
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
   * <p>Container for <code>TagSet</code> elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Tagging">AWS API
   * Reference</a></p>
   */
  class Tagging
  {
  public:
    AWS_S3_API Tagging() = default;
    AWS_S3_API Tagging(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Tagging& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A collection for a set of tags</p>
     */
    inline const Aws::Vector<Tag>& GetTagSet() const { return m_tagSet; }
    inline bool TagSetHasBeenSet() const { return m_tagSetHasBeenSet; }
    template<typename TagSetT = Aws::Vector<Tag>>
    void SetTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::forward<TagSetT>(value); }
    template<typename TagSetT = Aws::Vector<Tag>>
    Tagging& WithTagSet(TagSetT&& value) { SetTagSet(std::forward<TagSetT>(value)); return *this;}
    template<typename TagSetT = Tag>
    Tagging& AddTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet.emplace_back(std::forward<TagSetT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Tag> m_tagSet;
    bool m_tagSetHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
