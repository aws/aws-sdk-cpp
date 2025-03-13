/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/Tag.h>
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
   * <p>The parameters that you can use to configure a <a
   * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_CreateScheduledAction.html">scheduled
   * action</a> to create a snapshot. For more information about creating a scheduled
   * action, see <a
   * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_CreateScheduledAction.html">CreateScheduledAction</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateSnapshotScheduleActionParameters">AWS
   * API Reference</a></p>
   */
  class CreateSnapshotScheduleActionParameters
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotScheduleActionParameters() = default;
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotScheduleActionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotScheduleActionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    CreateSnapshotScheduleActionParameters& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period of the snapshot created by the scheduled action.</p>
     */
    inline int GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline CreateSnapshotScheduleActionParameters& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline const Aws::String& GetSnapshotNamePrefix() const { return m_snapshotNamePrefix; }
    inline bool SnapshotNamePrefixHasBeenSet() const { return m_snapshotNamePrefixHasBeenSet; }
    template<typename SnapshotNamePrefixT = Aws::String>
    void SetSnapshotNamePrefix(SnapshotNamePrefixT&& value) { m_snapshotNamePrefixHasBeenSet = true; m_snapshotNamePrefix = std::forward<SnapshotNamePrefixT>(value); }
    template<typename SnapshotNamePrefixT = Aws::String>
    CreateSnapshotScheduleActionParameters& WithSnapshotNamePrefix(SnapshotNamePrefixT&& value) { SetSnapshotNamePrefix(std::forward<SnapshotNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSnapshotScheduleActionParameters& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSnapshotScheduleActionParameters& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    int m_retentionPeriod{0};
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotNamePrefix;
    bool m_snapshotNamePrefixHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
