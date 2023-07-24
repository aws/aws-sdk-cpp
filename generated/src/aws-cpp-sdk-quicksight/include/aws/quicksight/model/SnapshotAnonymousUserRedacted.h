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
    AWS_QUICKSIGHT_API SnapshotAnonymousUserRedacted();
    AWS_QUICKSIGHT_API SnapshotAnonymousUserRedacted(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotAnonymousUserRedacted& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRowLevelPermissionTagKeys() const{ return m_rowLevelPermissionTagKeys; }

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline bool RowLevelPermissionTagKeysHasBeenSet() const { return m_rowLevelPermissionTagKeysHasBeenSet; }

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline void SetRowLevelPermissionTagKeys(const Aws::Vector<Aws::String>& value) { m_rowLevelPermissionTagKeysHasBeenSet = true; m_rowLevelPermissionTagKeys = value; }

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline void SetRowLevelPermissionTagKeys(Aws::Vector<Aws::String>&& value) { m_rowLevelPermissionTagKeysHasBeenSet = true; m_rowLevelPermissionTagKeys = std::move(value); }

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline SnapshotAnonymousUserRedacted& WithRowLevelPermissionTagKeys(const Aws::Vector<Aws::String>& value) { SetRowLevelPermissionTagKeys(value); return *this;}

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline SnapshotAnonymousUserRedacted& WithRowLevelPermissionTagKeys(Aws::Vector<Aws::String>&& value) { SetRowLevelPermissionTagKeys(std::move(value)); return *this;}

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline SnapshotAnonymousUserRedacted& AddRowLevelPermissionTagKeys(const Aws::String& value) { m_rowLevelPermissionTagKeysHasBeenSet = true; m_rowLevelPermissionTagKeys.push_back(value); return *this; }

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline SnapshotAnonymousUserRedacted& AddRowLevelPermissionTagKeys(Aws::String&& value) { m_rowLevelPermissionTagKeysHasBeenSet = true; m_rowLevelPermissionTagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The tag keys for the <code>RowLevelPermissionTags</code>.</p>
     */
    inline SnapshotAnonymousUserRedacted& AddRowLevelPermissionTagKeys(const char* value) { m_rowLevelPermissionTagKeysHasBeenSet = true; m_rowLevelPermissionTagKeys.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_rowLevelPermissionTagKeys;
    bool m_rowLevelPermissionTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
