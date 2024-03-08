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
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotScheduleActionParameters();
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotScheduleActionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotScheduleActionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace for which you want to configure a scheduled action
     * to create a snapshot.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The retention period of the snapshot created by the scheduled action.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The retention period of the snapshot created by the scheduled action.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The retention period of the snapshot created by the scheduled action.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The retention period of the snapshot created by the scheduled action.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline const Aws::String& GetSnapshotNamePrefix() const{ return m_snapshotNamePrefix; }

    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline bool SnapshotNamePrefixHasBeenSet() const { return m_snapshotNamePrefixHasBeenSet; }

    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline void SetSnapshotNamePrefix(const Aws::String& value) { m_snapshotNamePrefixHasBeenSet = true; m_snapshotNamePrefix = value; }

    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline void SetSnapshotNamePrefix(Aws::String&& value) { m_snapshotNamePrefixHasBeenSet = true; m_snapshotNamePrefix = std::move(value); }

    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline void SetSnapshotNamePrefix(const char* value) { m_snapshotNamePrefixHasBeenSet = true; m_snapshotNamePrefix.assign(value); }

    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithSnapshotNamePrefix(const Aws::String& value) { SetSnapshotNamePrefix(value); return *this;}

    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithSnapshotNamePrefix(Aws::String&& value) { SetSnapshotNamePrefix(std::move(value)); return *this;}

    /**
     * <p>A string prefix that is attached to the name of the snapshot created by the
     * scheduled action. The final name of the snapshot is the string prefix appended
     * by the date and time of when the snapshot was created.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithSnapshotNamePrefix(const char* value) { SetSnapshotNamePrefix(value); return *this;}


    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline CreateSnapshotScheduleActionParameters& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline CreateSnapshotScheduleActionParameters& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline CreateSnapshotScheduleActionParameters& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotNamePrefix;
    bool m_snapshotNamePrefixHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
