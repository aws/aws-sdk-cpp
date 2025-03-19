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
    AWS_REDSHIFTSERVERLESS_API ManagedWorkgroupListItem() = default;
    AWS_REDSHIFTSERVERLESS_API ManagedWorkgroupListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ManagedWorkgroupListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The creation date of the managed workgroup.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ManagedWorkgroupListItem& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the managed workgroup.</p>
     */
    inline const Aws::String& GetManagedWorkgroupId() const { return m_managedWorkgroupId; }
    inline bool ManagedWorkgroupIdHasBeenSet() const { return m_managedWorkgroupIdHasBeenSet; }
    template<typename ManagedWorkgroupIdT = Aws::String>
    void SetManagedWorkgroupId(ManagedWorkgroupIdT&& value) { m_managedWorkgroupIdHasBeenSet = true; m_managedWorkgroupId = std::forward<ManagedWorkgroupIdT>(value); }
    template<typename ManagedWorkgroupIdT = Aws::String>
    ManagedWorkgroupListItem& WithManagedWorkgroupId(ManagedWorkgroupIdT&& value) { SetManagedWorkgroupId(std::forward<ManagedWorkgroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed workgroup.</p>
     */
    inline const Aws::String& GetManagedWorkgroupName() const { return m_managedWorkgroupName; }
    inline bool ManagedWorkgroupNameHasBeenSet() const { return m_managedWorkgroupNameHasBeenSet; }
    template<typename ManagedWorkgroupNameT = Aws::String>
    void SetManagedWorkgroupName(ManagedWorkgroupNameT&& value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName = std::forward<ManagedWorkgroupNameT>(value); }
    template<typename ManagedWorkgroupNameT = Aws::String>
    ManagedWorkgroupListItem& WithManagedWorkgroupName(ManagedWorkgroupNameT&& value) { SetManagedWorkgroupName(std::forward<ManagedWorkgroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the managed workgroup in the AWS Glue Data
     * Catalog.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    ManagedWorkgroupListItem& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the managed workgroup.</p>
     */
    inline ManagedWorkgroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManagedWorkgroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ManagedWorkgroupListItem& WithStatus(ManagedWorkgroupStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_managedWorkgroupId;
    bool m_managedWorkgroupIdHasBeenSet = false;

    Aws::String m_managedWorkgroupName;
    bool m_managedWorkgroupNameHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    ManagedWorkgroupStatus m_status{ManagedWorkgroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
