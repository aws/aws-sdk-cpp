/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Change.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>The information for a change request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeBatch">AWS
   * API Reference</a></p>
   */
  class ChangeBatch
  {
  public:
    AWS_ROUTE53_API ChangeBatch() = default;
    AWS_ROUTE53_API ChangeBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API ChangeBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    ChangeBatch& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline const Aws::Vector<Change>& GetChanges() const { return m_changes; }
    inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }
    template<typename ChangesT = Aws::Vector<Change>>
    void SetChanges(ChangesT&& value) { m_changesHasBeenSet = true; m_changes = std::forward<ChangesT>(value); }
    template<typename ChangesT = Aws::Vector<Change>>
    ChangeBatch& WithChanges(ChangesT&& value) { SetChanges(std::forward<ChangesT>(value)); return *this;}
    template<typename ChangesT = Change>
    ChangeBatch& AddChanges(ChangesT&& value) { m_changesHasBeenSet = true; m_changes.emplace_back(std::forward<ChangesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Vector<Change> m_changes;
    bool m_changesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
