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
    AWS_SSM_API OpsMetadata() = default;
    AWS_SSM_API OpsMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Application Manager application.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    OpsMetadata& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const { return m_opsMetadataArn; }
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }
    template<typename OpsMetadataArnT = Aws::String>
    void SetOpsMetadataArn(OpsMetadataArnT&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::forward<OpsMetadataArnT>(value); }
    template<typename OpsMetadataArnT = Aws::String>
    OpsMetadata& WithOpsMetadataArn(OpsMetadataArnT&& value) { SetOpsMetadataArn(std::forward<OpsMetadataArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the OpsMetadata object was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    OpsMetadata& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name who last updated the OpsMetadata object.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const { return m_lastModifiedUser; }
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
    template<typename LastModifiedUserT = Aws::String>
    void SetLastModifiedUser(LastModifiedUserT&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::forward<LastModifiedUserT>(value); }
    template<typename LastModifiedUserT = Aws::String>
    OpsMetadata& WithLastModifiedUser(LastModifiedUserT&& value) { SetLastModifiedUser(std::forward<LastModifiedUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the OpsMetadata objects was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    OpsMetadata& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
