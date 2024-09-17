/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Operational metadata for an application in Application Manager.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsMetadata">AWS API
   * Reference</a></p>
   */
  class OpsMetadata
  {
  public:
    AWS_SSM_API OpsMetadata();
    AWS_SSM_API OpsMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline OpsMetadata& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline OpsMetadata& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline OpsMetadata& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const{ return m_opsMetadataArn; }
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }
    inline void SetOpsMetadataArn(const Aws::String& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = value; }
    inline void SetOpsMetadataArn(Aws::String&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::move(value); }
    inline void SetOpsMetadataArn(const char* value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn.assign(value); }
    inline OpsMetadata& WithOpsMetadataArn(const Aws::String& value) { SetOpsMetadataArn(value); return *this;}
    inline OpsMetadata& WithOpsMetadataArn(Aws::String&& value) { SetOpsMetadataArn(std::move(value)); return *this;}
    inline OpsMetadata& WithOpsMetadataArn(const char* value) { SetOpsMetadataArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline OpsMetadata& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline OpsMetadata& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const{ return m_lastModifiedUser; }
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
    inline void SetLastModifiedUser(const Aws::String& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = value; }
    inline void SetLastModifiedUser(Aws::String&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::move(value); }
    inline void SetLastModifiedUser(const char* value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser.assign(value); }
    inline OpsMetadata& WithLastModifiedUser(const Aws::String& value) { SetLastModifiedUser(value); return *this;}
    inline OpsMetadata& WithLastModifiedUser(Aws::String&& value) { SetLastModifiedUser(std::move(value)); return *this;}
    inline OpsMetadata& WithLastModifiedUser(const char* value) { SetLastModifiedUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline OpsMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline OpsMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
