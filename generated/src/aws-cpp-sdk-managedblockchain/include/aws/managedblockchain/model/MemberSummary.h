/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberStatus.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>A summary of configuration properties for a member.</p> <p>Applies only to
   * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberSummary">AWS
   * API Reference</a></p>
   */
  class MemberSummary
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberSummary();
    AWS_MANAGEDBLOCKCHAIN_API MemberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the member.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline MemberSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline MemberSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline MemberSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MemberSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MemberSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MemberSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the member.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MemberSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MemberSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MemberSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the member.</p> <ul> <li> <p> <code>CREATING</code> - The
     * Amazon Web Services account is in the process of creating a member.</p> </li>
     * <li> <p> <code>AVAILABLE</code> - The member has been created and can
     * participate in the network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The
     * Amazon Web Services account attempted to create a member and creation
     * failed.</p> </li> <li> <p> <code>UPDATING</code> - The member is in the process
     * of being updated.</p> </li> <li> <p> <code>DELETING</code> - The member and all
     * associated resources are in the process of being deleted. Either the Amazon Web
     * Services account that owns the member deleted it, or the member is being deleted
     * as the result of an <code>APPROVED</code> <code>PROPOSAL</code> to remove the
     * member.</p> </li> <li> <p> <code>DELETED</code> - The member can no longer
     * participate on the network and all associated resources are deleted. Either the
     * Amazon Web Services account that owns the member deleted it, or the member is
     * being deleted as the result of an <code>APPROVED</code> <code>PROPOSAL</code> to
     * remove the member.</p> </li> <li> <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> -
     * The member is impaired and might not function as expected because it cannot
     * access the specified customer managed key in Key Management Service (KMS) for
     * encryption at rest. Either the KMS key was disabled or deleted, or the grants on
     * the key were revoked.</p> <p>The effect of disabling or deleting a key or of
     * revoking a grant isn't immediate. It might take some time for the member
     * resource to discover that the key is inaccessible. When a resource is in this
     * state, we recommend deleting and recreating the resource.</p> </li> </ul>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MemberSummary& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}
    inline MemberSummary& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline MemberSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline MemberSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indicator of whether the member is owned by your Amazon Web Services
     * account or a different Amazon Web Services account.</p>
     */
    inline bool GetIsOwned() const{ return m_isOwned; }
    inline bool IsOwnedHasBeenSet() const { return m_isOwnedHasBeenSet; }
    inline void SetIsOwned(bool value) { m_isOwnedHasBeenSet = true; m_isOwned = value; }
    inline MemberSummary& WithIsOwned(bool value) { SetIsOwned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline MemberSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline MemberSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline MemberSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MemberStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_isOwned;
    bool m_isOwnedHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
