/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides metadata for a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Dataset">AWS
   * API Reference</a></p>
   */
  class Dataset
  {
  public:
    AWS_PERSONALIZE_API Dataset();
    AWS_PERSONALIZE_API Dataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline Dataset& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline Dataset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline Dataset& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline Dataset& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline Dataset& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that you want metadata for.</p>
     */
    inline Dataset& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline Dataset& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline Dataset& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline Dataset& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }

    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline Dataset& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}

    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline Dataset& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}

    /**
     * <p>One of the following values:</p> <ul> <li> <p>Interactions</p> </li> <li>
     * <p>Items</p> </li> <li> <p>Users</p> </li> </ul>
     */
    inline Dataset& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}


    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline Dataset& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline Dataset& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the associated schema.</p>
     */
    inline Dataset& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline Dataset& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline Dataset& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the dataset.</p> <p>A dataset can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline Dataset& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The creation date and time (in Unix time) of the dataset.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time (in Unix time) of the dataset.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time (in Unix time) of the dataset.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time (in Unix time) of the dataset.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time (in Unix time) of the dataset.</p>
     */
    inline Dataset& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time (in Unix time) of the dataset.</p>
     */
    inline Dataset& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp that shows when the dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A time stamp that shows when the dataset was updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>A time stamp that shows when the dataset was updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>A time stamp that shows when the dataset was updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A time stamp that shows when the dataset was updated.</p>
     */
    inline Dataset& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A time stamp that shows when the dataset was updated.</p>
     */
    inline Dataset& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
