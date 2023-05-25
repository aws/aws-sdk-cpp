/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class CreateSnapshotRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshot"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline CreateSnapshotRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline CreateSnapshotRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The namespace to create a snapshot for.</p>
     */
    inline CreateSnapshotRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>How long to retain the created snapshot.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long to retain the created snapshot.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long to retain the created snapshot.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long to retain the created snapshot.</p>
     */
    inline CreateSnapshotRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline CreateSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline CreateSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline CreateSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


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
    inline CreateSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline CreateSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline CreateSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the snapshot.</p>
     */
    inline CreateSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
