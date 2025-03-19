/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ShareStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>The details of a resource share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ShareDetails">AWS
   * API Reference</a></p>
   */
  class ShareDetails
  {
  public:
    AWS_OMICS_API ShareDetails() = default;
    AWS_OMICS_API ShareDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the resource share.</p>
     */
    inline const Aws::String& GetShareId() const { return m_shareId; }
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }
    template<typename ShareIdT = Aws::String>
    void SetShareId(ShareIdT&& value) { m_shareIdHasBeenSet = true; m_shareId = std::forward<ShareIdT>(value); }
    template<typename ShareIdT = Aws::String>
    ShareDetails& WithShareId(ShareIdT&& value) { SetShareId(std::forward<ShareIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Arn of the shared resource. </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ShareDetails& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the shared resource. </p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ShareDetails& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal subscriber is the account that is sharing the resource.</p>
     */
    inline const Aws::String& GetPrincipalSubscriber() const { return m_principalSubscriber; }
    inline bool PrincipalSubscriberHasBeenSet() const { return m_principalSubscriberHasBeenSet; }
    template<typename PrincipalSubscriberT = Aws::String>
    void SetPrincipalSubscriber(PrincipalSubscriberT&& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = std::forward<PrincipalSubscriberT>(value); }
    template<typename PrincipalSubscriberT = Aws::String>
    ShareDetails& WithPrincipalSubscriber(PrincipalSubscriberT&& value) { SetPrincipalSubscriber(std::forward<PrincipalSubscriberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID for the data owner. The owner creates the resource share.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ShareDetails& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the share.</p>
     */
    inline ShareStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ShareDetails& WithStatus(ShareStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for a resource share. It provides additional details about
     * the share status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ShareDetails& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetShareName() const { return m_shareName; }
    inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }
    template<typename ShareNameT = Aws::String>
    void SetShareName(ShareNameT&& value) { m_shareNameHasBeenSet = true; m_shareName = std::forward<ShareNameT>(value); }
    template<typename ShareNameT = Aws::String>
    ShareDetails& WithShareName(ShareNameT&& value) { SetShareName(std::forward<ShareNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the resource share was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ShareDetails& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the resource share update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ShareDetails& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_principalSubscriber;
    bool m_principalSubscriberHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ShareStatus m_status{ShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_shareName;
    bool m_shareNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
