/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/InstanceStatus.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Provides information about the IAM Identity Center instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/InstanceMetadata">AWS
   * API Reference</a></p>
   */
  class InstanceMetadata
  {
  public:
    AWS_SSOADMIN_API InstanceMetadata();
    AWS_SSOADMIN_API InstanceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API InstanceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the Identity Center instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline InstanceMetadata& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline InstanceMetadata& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the identity store that is connected to the Identity Center
     * instance.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline InstanceMetadata& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline InstanceMetadata& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline InstanceMetadata& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline InstanceMetadata& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline InstanceMetadata& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline InstanceMetadata& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Identity Center instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID number of the owner of the Identity Center
     * instance.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline InstanceMetadata& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline InstanceMetadata& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline InstanceMetadata& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this Identity Center instance.</p>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InstanceMetadata& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}
    inline InstanceMetadata& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    InstanceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
