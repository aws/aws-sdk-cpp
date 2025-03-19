/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyOptionGroupMessage">AWS
   * API Reference</a></p>
   */
  class CopyOptionGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CopyOptionGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyOptionGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceOptionGroupIdentifier() const { return m_sourceOptionGroupIdentifier; }
    inline bool SourceOptionGroupIdentifierHasBeenSet() const { return m_sourceOptionGroupIdentifierHasBeenSet; }
    template<typename SourceOptionGroupIdentifierT = Aws::String>
    void SetSourceOptionGroupIdentifier(SourceOptionGroupIdentifierT&& value) { m_sourceOptionGroupIdentifierHasBeenSet = true; m_sourceOptionGroupIdentifier = std::forward<SourceOptionGroupIdentifierT>(value); }
    template<typename SourceOptionGroupIdentifierT = Aws::String>
    CopyOptionGroupRequest& WithSourceOptionGroupIdentifier(SourceOptionGroupIdentifierT&& value) { SetSourceOptionGroupIdentifier(std::forward<SourceOptionGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline const Aws::String& GetTargetOptionGroupIdentifier() const { return m_targetOptionGroupIdentifier; }
    inline bool TargetOptionGroupIdentifierHasBeenSet() const { return m_targetOptionGroupIdentifierHasBeenSet; }
    template<typename TargetOptionGroupIdentifierT = Aws::String>
    void SetTargetOptionGroupIdentifier(TargetOptionGroupIdentifierT&& value) { m_targetOptionGroupIdentifierHasBeenSet = true; m_targetOptionGroupIdentifier = std::forward<TargetOptionGroupIdentifierT>(value); }
    template<typename TargetOptionGroupIdentifierT = Aws::String>
    CopyOptionGroupRequest& WithTargetOptionGroupIdentifier(TargetOptionGroupIdentifierT&& value) { SetTargetOptionGroupIdentifier(std::forward<TargetOptionGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the copied option group.</p>
     */
    inline const Aws::String& GetTargetOptionGroupDescription() const { return m_targetOptionGroupDescription; }
    inline bool TargetOptionGroupDescriptionHasBeenSet() const { return m_targetOptionGroupDescriptionHasBeenSet; }
    template<typename TargetOptionGroupDescriptionT = Aws::String>
    void SetTargetOptionGroupDescription(TargetOptionGroupDescriptionT&& value) { m_targetOptionGroupDescriptionHasBeenSet = true; m_targetOptionGroupDescription = std::forward<TargetOptionGroupDescriptionT>(value); }
    template<typename TargetOptionGroupDescriptionT = Aws::String>
    CopyOptionGroupRequest& WithTargetOptionGroupDescription(TargetOptionGroupDescriptionT&& value) { SetTargetOptionGroupDescription(std::forward<TargetOptionGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CopyOptionGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CopyOptionGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceOptionGroupIdentifier;
    bool m_sourceOptionGroupIdentifierHasBeenSet = false;

    Aws::String m_targetOptionGroupIdentifier;
    bool m_targetOptionGroupIdentifierHasBeenSet = false;

    Aws::String m_targetOptionGroupDescription;
    bool m_targetOptionGroupDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
