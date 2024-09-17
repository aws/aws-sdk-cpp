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
    AWS_OMICS_API ShareDetails();
    AWS_OMICS_API ShareDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the resource share.</p>
     */
    inline const Aws::String& GetShareId() const{ return m_shareId; }
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }
    inline ShareDetails& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}
    inline ShareDetails& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}
    inline ShareDetails& WithShareId(const char* value) { SetShareId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Arn of the shared resource. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ShareDetails& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ShareDetails& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ShareDetails& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the shared resource. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ShareDetails& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ShareDetails& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ShareDetails& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal subscriber is the account that is sharing the resource.</p>
     */
    inline const Aws::String& GetPrincipalSubscriber() const{ return m_principalSubscriber; }
    inline bool PrincipalSubscriberHasBeenSet() const { return m_principalSubscriberHasBeenSet; }
    inline void SetPrincipalSubscriber(const Aws::String& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = value; }
    inline void SetPrincipalSubscriber(Aws::String&& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = std::move(value); }
    inline void SetPrincipalSubscriber(const char* value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber.assign(value); }
    inline ShareDetails& WithPrincipalSubscriber(const Aws::String& value) { SetPrincipalSubscriber(value); return *this;}
    inline ShareDetails& WithPrincipalSubscriber(Aws::String&& value) { SetPrincipalSubscriber(std::move(value)); return *this;}
    inline ShareDetails& WithPrincipalSubscriber(const char* value) { SetPrincipalSubscriber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID for the data owner. The owner creates the resource share.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline ShareDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline ShareDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline ShareDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the share.</p>
     */
    inline const ShareStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ShareDetails& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}
    inline ShareDetails& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for a resource share. It provides additional details about
     * the share status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ShareDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ShareDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ShareDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetShareName() const{ return m_shareName; }
    inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }
    inline void SetShareName(const Aws::String& value) { m_shareNameHasBeenSet = true; m_shareName = value; }
    inline void SetShareName(Aws::String&& value) { m_shareNameHasBeenSet = true; m_shareName = std::move(value); }
    inline void SetShareName(const char* value) { m_shareNameHasBeenSet = true; m_shareName.assign(value); }
    inline ShareDetails& WithShareName(const Aws::String& value) { SetShareName(value); return *this;}
    inline ShareDetails& WithShareName(Aws::String&& value) { SetShareName(std::move(value)); return *this;}
    inline ShareDetails& WithShareName(const char* value) { SetShareName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the resource share was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ShareDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ShareDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the resource share update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline ShareDetails& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline ShareDetails& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
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

    ShareStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_shareName;
    bool m_shareNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
