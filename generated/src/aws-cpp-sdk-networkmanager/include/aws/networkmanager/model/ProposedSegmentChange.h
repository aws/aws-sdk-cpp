/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Tag.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a proposed segment change. In some cases, the segment change must
   * first be evaluated and accepted. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ProposedSegmentChange">AWS
   * API Reference</a></p>
   */
  class ProposedSegmentChange
  {
  public:
    AWS_NETWORKMANAGER_API ProposedSegmentChange();
    AWS_NETWORKMANAGER_API ProposedSegmentChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ProposedSegmentChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of key-value tags that changed for the segment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ProposedSegmentChange& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ProposedSegmentChange& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ProposedSegmentChange& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ProposedSegmentChange& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rule number in the policy document that applies to this change.</p>
     */
    inline int GetAttachmentPolicyRuleNumber() const{ return m_attachmentPolicyRuleNumber; }
    inline bool AttachmentPolicyRuleNumberHasBeenSet() const { return m_attachmentPolicyRuleNumberHasBeenSet; }
    inline void SetAttachmentPolicyRuleNumber(int value) { m_attachmentPolicyRuleNumberHasBeenSet = true; m_attachmentPolicyRuleNumber = value; }
    inline ProposedSegmentChange& WithAttachmentPolicyRuleNumber(int value) { SetAttachmentPolicyRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment to change.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }
    inline ProposedSegmentChange& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}
    inline ProposedSegmentChange& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}
    inline ProposedSegmentChange& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}
    ///@}
  private:

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_attachmentPolicyRuleNumber;
    bool m_attachmentPolicyRuleNumberHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
