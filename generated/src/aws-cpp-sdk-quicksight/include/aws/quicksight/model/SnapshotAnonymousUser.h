/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SessionTag.h>
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
   * <p>A structure that contains information on the anonymous user
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotAnonymousUser">AWS
   * API Reference</a></p>
   */
  class SnapshotAnonymousUser
  {
  public:
    AWS_QUICKSIGHT_API SnapshotAnonymousUser();
    AWS_QUICKSIGHT_API SnapshotAnonymousUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotAnonymousUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<SessionTag>& GetRowLevelPermissionTags() const{ return m_rowLevelPermissionTags; }

    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline bool RowLevelPermissionTagsHasBeenSet() const { return m_rowLevelPermissionTagsHasBeenSet; }

    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline void SetRowLevelPermissionTags(const Aws::Vector<SessionTag>& value) { m_rowLevelPermissionTagsHasBeenSet = true; m_rowLevelPermissionTags = value; }

    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline void SetRowLevelPermissionTags(Aws::Vector<SessionTag>&& value) { m_rowLevelPermissionTagsHasBeenSet = true; m_rowLevelPermissionTags = std::move(value); }

    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SnapshotAnonymousUser& WithRowLevelPermissionTags(const Aws::Vector<SessionTag>& value) { SetRowLevelPermissionTags(value); return *this;}

    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SnapshotAnonymousUser& WithRowLevelPermissionTags(Aws::Vector<SessionTag>&& value) { SetRowLevelPermissionTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SnapshotAnonymousUser& AddRowLevelPermissionTags(const SessionTag& value) { m_rowLevelPermissionTagsHasBeenSet = true; m_rowLevelPermissionTags.push_back(value); return *this; }

    /**
     * <p>The tags to be used for row-level security (RLS). Make sure that the relevant
     * datasets have RLS tags configured before you start a snapshot export job. You
     * can configure the RLS tags of a dataset with a
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> API call.</p> <p>These
     * are not the tags that are used for Amazon Web Services resource tagging. For
     * more information on row level security in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SnapshotAnonymousUser& AddRowLevelPermissionTags(SessionTag&& value) { m_rowLevelPermissionTagsHasBeenSet = true; m_rowLevelPermissionTags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SessionTag> m_rowLevelPermissionTags;
    bool m_rowLevelPermissionTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
