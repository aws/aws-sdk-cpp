/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class CopyDBParameterGroupRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API CopyDBParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBParameterGroup"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/UserGuide/tagging.ARN.html#tagging.ARN.Constructing">
     * Constructing an Amazon Resource Name (ARN)</a>.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must specify a valid DB parameter group.</p> </li> <li> <p>Must specify
     * a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBParameterGroupIdentifier() const { return m_sourceDBParameterGroupIdentifier; }
    inline bool SourceDBParameterGroupIdentifierHasBeenSet() const { return m_sourceDBParameterGroupIdentifierHasBeenSet; }
    template<typename SourceDBParameterGroupIdentifierT = Aws::String>
    void SetSourceDBParameterGroupIdentifier(SourceDBParameterGroupIdentifierT&& value) { m_sourceDBParameterGroupIdentifierHasBeenSet = true; m_sourceDBParameterGroupIdentifier = std::forward<SourceDBParameterGroupIdentifierT>(value); }
    template<typename SourceDBParameterGroupIdentifierT = Aws::String>
    CopyDBParameterGroupRequest& WithSourceDBParameterGroupIdentifier(SourceDBParameterGroupIdentifierT&& value) { SetSourceDBParameterGroupIdentifier(std::forward<SourceDBParameterGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-db-parameter-group</code> </p>
     */
    inline const Aws::String& GetTargetDBParameterGroupIdentifier() const { return m_targetDBParameterGroupIdentifier; }
    inline bool TargetDBParameterGroupIdentifierHasBeenSet() const { return m_targetDBParameterGroupIdentifierHasBeenSet; }
    template<typename TargetDBParameterGroupIdentifierT = Aws::String>
    void SetTargetDBParameterGroupIdentifier(TargetDBParameterGroupIdentifierT&& value) { m_targetDBParameterGroupIdentifierHasBeenSet = true; m_targetDBParameterGroupIdentifier = std::forward<TargetDBParameterGroupIdentifierT>(value); }
    template<typename TargetDBParameterGroupIdentifierT = Aws::String>
    CopyDBParameterGroupRequest& WithTargetDBParameterGroupIdentifier(TargetDBParameterGroupIdentifierT&& value) { SetTargetDBParameterGroupIdentifier(std::forward<TargetDBParameterGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline const Aws::String& GetTargetDBParameterGroupDescription() const { return m_targetDBParameterGroupDescription; }
    inline bool TargetDBParameterGroupDescriptionHasBeenSet() const { return m_targetDBParameterGroupDescriptionHasBeenSet; }
    template<typename TargetDBParameterGroupDescriptionT = Aws::String>
    void SetTargetDBParameterGroupDescription(TargetDBParameterGroupDescriptionT&& value) { m_targetDBParameterGroupDescriptionHasBeenSet = true; m_targetDBParameterGroupDescription = std::forward<TargetDBParameterGroupDescriptionT>(value); }
    template<typename TargetDBParameterGroupDescriptionT = Aws::String>
    CopyDBParameterGroupRequest& WithTargetDBParameterGroupDescription(TargetDBParameterGroupDescriptionT&& value) { SetTargetDBParameterGroupDescription(std::forward<TargetDBParameterGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the copied DB parameter group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CopyDBParameterGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CopyDBParameterGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceDBParameterGroupIdentifier;
    bool m_sourceDBParameterGroupIdentifierHasBeenSet = false;

    Aws::String m_targetDBParameterGroupIdentifier;
    bool m_targetDBParameterGroupIdentifierHasBeenSet = false;

    Aws::String m_targetDBParameterGroupDescription;
    bool m_targetDBParameterGroupDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
