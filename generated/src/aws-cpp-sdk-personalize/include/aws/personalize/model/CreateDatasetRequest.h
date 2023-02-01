/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline CreateDatasetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline CreateDatasetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema to associate with the dataset. The schema defines the
     * dataset fields.</p>
     */
    inline CreateDatasetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline CreateDatasetRequest& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline CreateDatasetRequest& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group to add the dataset
     * to.</p>
     */
    inline CreateDatasetRequest& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}

    /**
     * <p>The type of dataset.</p> <p>One of the following (case insensitive)
     * values:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
     * <p>Users</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateDatasetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateDatasetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateDatasetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateDatasetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
