/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ram/model/ResourceShareFeatureSet.h>
#include <aws/ram/model/Tag.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes a resource share in RAM.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceShare">AWS
   * API Reference</a></p>
   */
  class ResourceShare
  {
  public:
    AWS_RAM_API ResourceShare() = default;
    AWS_RAM_API ResourceShare(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceShare& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share</p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    ResourceShare& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceShare& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the resource share.</p>
     */
    inline const Aws::String& GetOwningAccountId() const { return m_owningAccountId; }
    inline bool OwningAccountIdHasBeenSet() const { return m_owningAccountIdHasBeenSet; }
    template<typename OwningAccountIdT = Aws::String>
    void SetOwningAccountId(OwningAccountIdT&& value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId = std::forward<OwningAccountIdT>(value); }
    template<typename OwningAccountIdT = Aws::String>
    ResourceShare& WithOwningAccountId(OwningAccountIdT&& value) { SetOwningAccountId(std::forward<OwningAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether principals outside your organization in Organizations can
     * be associated with a resource share.</p> <ul> <li> <p> <code>True</code> – the
     * resource share can be shared with any Amazon Web Services account.</p> </li>
     * <li> <p> <code>False</code> – the resource share can be shared with only
     * accounts in the same organization as the account that owns the resource
     * share.</p> </li> </ul>
     */
    inline bool GetAllowExternalPrincipals() const { return m_allowExternalPrincipals; }
    inline bool AllowExternalPrincipalsHasBeenSet() const { return m_allowExternalPrincipalsHasBeenSet; }
    inline void SetAllowExternalPrincipals(bool value) { m_allowExternalPrincipalsHasBeenSet = true; m_allowExternalPrincipals = value; }
    inline ResourceShare& WithAllowExternalPrincipals(bool value) { SetAllowExternalPrincipals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the resource share.</p>
     */
    inline ResourceShareStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceShare& WithStatus(ResourceShareStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the resource share.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ResourceShare& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key and value pairs attached to the resource share.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ResourceShare& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ResourceShare& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource share was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ResourceShare& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource share was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ResourceShare& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what features are available for this resource share. This parameter
     * can have one of the following values:</p> <ul> <li> <p> <b>STANDARD</b> – A
     * resource share that supports all functionality. These resource shares are
     * visible to all principals you share the resource share with. You can modify
     * these resource shares in RAM using the console or APIs. This resource share
     * might have been created by RAM, or it might have been <b>CREATED_FROM_POLICY</b>
     * and then promoted.</p> </li> <li> <p> <b>CREATED_FROM_POLICY</b> – The customer
     * manually shared a resource by attaching a resource-based policy. That policy did
     * not match any existing managed permissions, so RAM created this customer managed
     * permission automatically on the customer's behalf based on the attached policy
     * document. This type of resource share is visible only to the Amazon Web Services
     * account that created it. You can't modify it in RAM unless you promote it. For
     * more information, see <a>PromoteResourceShareCreatedFromPolicy</a>.</p> </li>
     * <li> <p> <b>PROMOTING_TO_STANDARD</b> – This resource share was originally
     * <code>CREATED_FROM_POLICY</code>, but the customer ran the
     * <a>PromoteResourceShareCreatedFromPolicy</a> and that operation is still in
     * progress. This value changes to <code>STANDARD</code> when complete.</p> </li>
     * </ul>
     */
    inline ResourceShareFeatureSet GetFeatureSet() const { return m_featureSet; }
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }
    inline void SetFeatureSet(ResourceShareFeatureSet value) { m_featureSetHasBeenSet = true; m_featureSet = value; }
    inline ResourceShare& WithFeatureSet(ResourceShareFeatureSet value) { SetFeatureSet(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningAccountId;
    bool m_owningAccountIdHasBeenSet = false;

    bool m_allowExternalPrincipals{false};
    bool m_allowExternalPrincipalsHasBeenSet = false;

    ResourceShareStatus m_status{ResourceShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    ResourceShareFeatureSet m_featureSet{ResourceShareFeatureSet::NOT_SET};
    bool m_featureSetHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
