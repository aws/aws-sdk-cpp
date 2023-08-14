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
   * <p> The details of a share. </p><p><h3>See Also:</h3>   <a
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


    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }

    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }

    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }

    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }

    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline ShareDetails& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline ShareDetails& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    /**
     * <p> The ID for a share offer for an analytics store . </p>
     */
    inline ShareDetails& WithShareId(const char* value) { SetShareId(value); return *this;}


    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline ShareDetails& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline ShareDetails& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The resource Arn of the analytics store being shared. </p>
     */
    inline ShareDetails& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline const Aws::String& GetPrincipalSubscriber() const{ return m_principalSubscriber; }

    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline bool PrincipalSubscriberHasBeenSet() const { return m_principalSubscriberHasBeenSet; }

    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline void SetPrincipalSubscriber(const Aws::String& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = value; }

    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline void SetPrincipalSubscriber(Aws::String&& value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber = std::move(value); }

    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline void SetPrincipalSubscriber(const char* value) { m_principalSubscriberHasBeenSet = true; m_principalSubscriber.assign(value); }

    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline ShareDetails& WithPrincipalSubscriber(const Aws::String& value) { SetPrincipalSubscriber(value); return *this;}

    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline ShareDetails& WithPrincipalSubscriber(Aws::String&& value) { SetPrincipalSubscriber(std::move(value)); return *this;}

    /**
     * <p> The principal subscriber is the account the analytics store data is being
     * shared with. </p>
     */
    inline ShareDetails& WithPrincipalSubscriber(const char* value) { SetPrincipalSubscriber(value); return *this;}


    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline ShareDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline ShareDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p> The account ID for the data owner. The owner creates the share offer. </p>
     */
    inline ShareDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p> The status of a share. </p>
     */
    inline const ShareStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of a share. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of a share. </p>
     */
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of a share. </p>
     */
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of a share. </p>
     */
    inline ShareDetails& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of a share. </p>
     */
    inline ShareDetails& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline ShareDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline ShareDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> The status message for a share. It provides more details on the status of
     * the share. </p>
     */
    inline ShareDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p> The name of the share. </p>
     */
    inline const Aws::String& GetShareName() const{ return m_shareName; }

    /**
     * <p> The name of the share. </p>
     */
    inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }

    /**
     * <p> The name of the share. </p>
     */
    inline void SetShareName(const Aws::String& value) { m_shareNameHasBeenSet = true; m_shareName = value; }

    /**
     * <p> The name of the share. </p>
     */
    inline void SetShareName(Aws::String&& value) { m_shareNameHasBeenSet = true; m_shareName = std::move(value); }

    /**
     * <p> The name of the share. </p>
     */
    inline void SetShareName(const char* value) { m_shareNameHasBeenSet = true; m_shareName.assign(value); }

    /**
     * <p> The name of the share. </p>
     */
    inline ShareDetails& WithShareName(const Aws::String& value) { SetShareName(value); return *this;}

    /**
     * <p> The name of the share. </p>
     */
    inline ShareDetails& WithShareName(Aws::String&& value) { SetShareName(std::move(value)); return *this;}

    /**
     * <p> The name of the share. </p>
     */
    inline ShareDetails& WithShareName(const char* value) { SetShareName(value); return *this;}


    /**
     * <p> The timestamp for when the share was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The timestamp for when the share was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The timestamp for when the share was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The timestamp for when the share was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> The timestamp for when the share was created. </p>
     */
    inline ShareDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The timestamp for when the share was created. </p>
     */
    inline ShareDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The timestamp of the share update. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> The timestamp of the share update. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> The timestamp of the share update. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> The timestamp of the share update. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> The timestamp of the share update. </p>
     */
    inline ShareDetails& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> The timestamp of the share update. </p>
     */
    inline ShareDetails& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

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
