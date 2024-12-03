/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/ManagedWorkgroupStatus.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>A collection of Amazon Redshift compute resources managed by AWS
   * Glue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ManagedWorkgroupListItem">AWS
   * API Reference</a></p>
   */
  class ManagedWorkgroupListItem
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ManagedWorkgroupListItem();
    AWS_REDSHIFTSERVERLESS_API ManagedWorkgroupListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ManagedWorkgroupListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The creation date of the managed workgroup.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ManagedWorkgroupListItem& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ManagedWorkgroupListItem& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the managed workgroup.</p>
     */
    inline const Aws::String& GetManagedWorkgroupId() const{ return m_managedWorkgroupId; }
    inline bool ManagedWorkgroupIdHasBeenSet() const { return m_managedWorkgroupIdHasBeenSet; }
    inline void SetManagedWorkgroupId(const Aws::String& value) { m_managedWorkgroupIdHasBeenSet = true; m_managedWorkgroupId = value; }
    inline void SetManagedWorkgroupId(Aws::String&& value) { m_managedWorkgroupIdHasBeenSet = true; m_managedWorkgroupId = std::move(value); }
    inline void SetManagedWorkgroupId(const char* value) { m_managedWorkgroupIdHasBeenSet = true; m_managedWorkgroupId.assign(value); }
    inline ManagedWorkgroupListItem& WithManagedWorkgroupId(const Aws::String& value) { SetManagedWorkgroupId(value); return *this;}
    inline ManagedWorkgroupListItem& WithManagedWorkgroupId(Aws::String&& value) { SetManagedWorkgroupId(std::move(value)); return *this;}
    inline ManagedWorkgroupListItem& WithManagedWorkgroupId(const char* value) { SetManagedWorkgroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed workgroup.</p>
     */
    inline const Aws::String& GetManagedWorkgroupName() const{ return m_managedWorkgroupName; }
    inline bool ManagedWorkgroupNameHasBeenSet() const { return m_managedWorkgroupNameHasBeenSet; }
    inline void SetManagedWorkgroupName(const Aws::String& value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName = value; }
    inline void SetManagedWorkgroupName(Aws::String&& value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName = std::move(value); }
    inline void SetManagedWorkgroupName(const char* value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName.assign(value); }
    inline ManagedWorkgroupListItem& WithManagedWorkgroupName(const Aws::String& value) { SetManagedWorkgroupName(value); return *this;}
    inline ManagedWorkgroupListItem& WithManagedWorkgroupName(Aws::String&& value) { SetManagedWorkgroupName(std::move(value)); return *this;}
    inline ManagedWorkgroupListItem& WithManagedWorkgroupName(const char* value) { SetManagedWorkgroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the managed workgroup in the AWS Glue Data
     * Catalog.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline ManagedWorkgroupListItem& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline ManagedWorkgroupListItem& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline ManagedWorkgroupListItem& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the managed workgroup.</p>
     */
    inline const ManagedWorkgroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ManagedWorkgroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ManagedWorkgroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ManagedWorkgroupListItem& WithStatus(const ManagedWorkgroupStatus& value) { SetStatus(value); return *this;}
    inline ManagedWorkgroupListItem& WithStatus(ManagedWorkgroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_managedWorkgroupId;
    bool m_managedWorkgroupIdHasBeenSet = false;

    Aws::String m_managedWorkgroupName;
    bool m_managedWorkgroupNameHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    ManagedWorkgroupStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
