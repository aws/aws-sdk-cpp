/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociationType.h>
#include <aws/ram/model/ResourceShareAssociationStatus.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes an association between a resource share and either a principal or a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceShareAssociation">AWS
   * API Reference</a></p>
   */
  class ResourceShareAssociation
  {
  public:
    AWS_RAM_API ResourceShareAssociation();
    AWS_RAM_API ResourceShareAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceShareAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }
    inline ResourceShareAssociation& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}
    inline ResourceShareAssociation& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}
    inline ResourceShareAssociation& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareName() const{ return m_resourceShareName; }
    inline bool ResourceShareNameHasBeenSet() const { return m_resourceShareNameHasBeenSet; }
    inline void SetResourceShareName(const Aws::String& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = value; }
    inline void SetResourceShareName(Aws::String&& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = std::move(value); }
    inline void SetResourceShareName(const char* value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName.assign(value); }
    inline ResourceShareAssociation& WithResourceShareName(const Aws::String& value) { SetResourceShareName(value); return *this;}
    inline ResourceShareAssociation& WithResourceShareName(Aws::String&& value) { SetResourceShareName(std::move(value)); return *this;}
    inline ResourceShareAssociation& WithResourceShareName(const char* value) { SetResourceShareName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated entity. This can be either of the following:</p> <ul> <li>
     * <p>For a resource association, this is the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource.</p> </li> <li> <p>For principal
     * associations, this is one of the following:</p> <ul> <li> <p>The ID of an Amazon
     * Web Services account</p> </li> <li> <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an organization in Organizations</p> </li> <li>
     * <p>The ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>The
     * ARN of an IAM role</p> </li> <li> <p>The ARN of an IAM user</p> </li> </ul>
     * </li> </ul>
     */
    inline const Aws::String& GetAssociatedEntity() const{ return m_associatedEntity; }
    inline bool AssociatedEntityHasBeenSet() const { return m_associatedEntityHasBeenSet; }
    inline void SetAssociatedEntity(const Aws::String& value) { m_associatedEntityHasBeenSet = true; m_associatedEntity = value; }
    inline void SetAssociatedEntity(Aws::String&& value) { m_associatedEntityHasBeenSet = true; m_associatedEntity = std::move(value); }
    inline void SetAssociatedEntity(const char* value) { m_associatedEntityHasBeenSet = true; m_associatedEntity.assign(value); }
    inline ResourceShareAssociation& WithAssociatedEntity(const Aws::String& value) { SetAssociatedEntity(value); return *this;}
    inline ResourceShareAssociation& WithAssociatedEntity(Aws::String&& value) { SetAssociatedEntity(std::move(value)); return *this;}
    inline ResourceShareAssociation& WithAssociatedEntity(const char* value) { SetAssociatedEntity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity included in this association.</p>
     */
    inline const ResourceShareAssociationType& GetAssociationType() const{ return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(const ResourceShareAssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline void SetAssociationType(ResourceShareAssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }
    inline ResourceShareAssociation& WithAssociationType(const ResourceShareAssociationType& value) { SetAssociationType(value); return *this;}
    inline ResourceShareAssociation& WithAssociationType(ResourceShareAssociationType&& value) { SetAssociationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the association.</p>
     */
    inline const ResourceShareAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceShareAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceShareAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResourceShareAssociation& WithStatus(const ResourceShareAssociationStatus& value) { SetStatus(value); return *this;}
    inline ResourceShareAssociation& WithStatus(ResourceShareAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the association.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ResourceShareAssociation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ResourceShareAssociation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ResourceShareAssociation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ResourceShareAssociation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ResourceShareAssociation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ResourceShareAssociation& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ResourceShareAssociation& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the principal belongs to the same organization in
     * Organizations as the Amazon Web Services account that owns the resource
     * share.</p>
     */
    inline bool GetExternal() const{ return m_external; }
    inline bool ExternalHasBeenSet() const { return m_externalHasBeenSet; }
    inline void SetExternal(bool value) { m_externalHasBeenSet = true; m_external = value; }
    inline ResourceShareAssociation& WithExternal(bool value) { SetExternal(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_resourceShareName;
    bool m_resourceShareNameHasBeenSet = false;

    Aws::String m_associatedEntity;
    bool m_associatedEntityHasBeenSet = false;

    ResourceShareAssociationType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    ResourceShareAssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    bool m_external;
    bool m_externalHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
