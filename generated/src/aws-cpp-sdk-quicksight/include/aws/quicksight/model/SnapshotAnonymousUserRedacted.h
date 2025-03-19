/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Use this structure to redact sensitive information that you provide about an
   * anonymous user from the snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotAnonymousUserRedacted">AWS
   * API Reference</a></p>
   */
  class SnapshotAnonymousUserRedacted
  {
  public:
    AWS_QUICKSIGHT_API SnapshotAnonymousUserRedacted() = default;
    AWS_QUICKSIGHT_API SnapshotAnonymousUserRedacted(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotAnonymousUserRedacted& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRowLevelPermissionTagKeys() const { return m_rowLevelPermissionTagKeys; }
    inline bool RowLevelPermissionTagKeysHasBeenSet() const { return m_rowLevelPermissionTagKeysHasBeenSet; }
    template<typename RowLevelPermissionTagKeysT = Aws::Vector<Aws::String>>
    void SetRowLevelPermissionTagKeys(RowLevelPermissionTagKeysT&& value) { m_rowLevelPermissionTagKeysHasBeenSet = true; m_rowLevelPermissionTagKeys = std::forward<RowLevelPermissionTagKeysT>(value); }
    template<typename RowLevelPermissionTagKeysT = Aws::Vector<Aws::String>>
    SnapshotAnonymousUserRedacted& WithRowLevelPermissionTagKeys(RowLevelPermissionTagKeysT&& value) { SetRowLevelPermissionTagKeys(std::forward<RowLevelPermissionTagKeysT>(value)); return *this;}
    template<typename RowLevelPermissionTagKeysT = Aws::String>
    SnapshotAnonymousUserRedacted& AddRowLevelPermissionTagKeys(RowLevelPermissionTagKeysT&& value) { m_rowLevelPermissionTagKeysHasBeenSet = true; m_rowLevelPermissionTagKeys.emplace_back(std::forward<RowLevelPermissionTagKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_rowLevelPermissionTagKeys;
    bool m_rowLevelPermissionTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
