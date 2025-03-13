/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RowLevelPermissionPolicy.h>
#include <aws/quicksight/model/RowLevelPermissionFormatVersion.h>
#include <aws/quicksight/model/Status.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Information about a dataset that contains permissions for row-level security
   * (RLS). The permissions dataset maps fields to users or groups. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/restrict-access-to-a-data-set-using-row-level-security.html">Using
   * Row-Level Security (RLS) to Restrict Access to a Dataset</a> in the <i>Amazon
   * QuickSight User Guide</i>.</p> <p>The option to deny permissions by setting
   * <code>PermissionPolicy</code> to <code>DENY_ACCESS</code> is not supported for
   * new RLS datasets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowLevelPermissionDataSet">AWS
   * API Reference</a></p>
   */
  class RowLevelPermissionDataSet
  {
  public:
    AWS_QUICKSIGHT_API RowLevelPermissionDataSet() = default;
    AWS_QUICKSIGHT_API RowLevelPermissionDataSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowLevelPermissionDataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    RowLevelPermissionDataSet& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RowLevelPermissionDataSet& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of permissions to use when interpreting the permissions for RLS.
     * <code>DENY_ACCESS</code> is included for backward compatibility only.</p>
     */
    inline RowLevelPermissionPolicy GetPermissionPolicy() const { return m_permissionPolicy; }
    inline bool PermissionPolicyHasBeenSet() const { return m_permissionPolicyHasBeenSet; }
    inline void SetPermissionPolicy(RowLevelPermissionPolicy value) { m_permissionPolicyHasBeenSet = true; m_permissionPolicy = value; }
    inline RowLevelPermissionDataSet& WithPermissionPolicy(RowLevelPermissionPolicy value) { SetPermissionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or group rules associated with the dataset that contains permissions
     * for RLS.</p> <p>By default, <code>FormatVersion</code> is
     * <code>VERSION_1</code>. When <code>FormatVersion</code> is
     * <code>VERSION_1</code>, <code>UserName</code> and <code>GroupName</code> are
     * required. When <code>FormatVersion</code> is <code>VERSION_2</code>,
     * <code>UserARN</code> and <code>GroupARN</code> are required, and
     * <code>Namespace</code> must not exist.</p>
     */
    inline RowLevelPermissionFormatVersion GetFormatVersion() const { return m_formatVersion; }
    inline bool FormatVersionHasBeenSet() const { return m_formatVersionHasBeenSet; }
    inline void SetFormatVersion(RowLevelPermissionFormatVersion value) { m_formatVersionHasBeenSet = true; m_formatVersion = value; }
    inline RowLevelPermissionDataSet& WithFormatVersion(RowLevelPermissionFormatVersion value) { SetFormatVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the row-level security permission dataset. If enabled, the
     * status is <code>ENABLED</code>. If disabled, the status is
     * <code>DISABLED</code>.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline RowLevelPermissionDataSet& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    RowLevelPermissionPolicy m_permissionPolicy{RowLevelPermissionPolicy::NOT_SET};
    bool m_permissionPolicyHasBeenSet = false;

    RowLevelPermissionFormatVersion m_formatVersion{RowLevelPermissionFormatVersion::NOT_SET};
    bool m_formatVersionHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
