/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/DatastoreStatus.h>
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
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>List of summaries of data stores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DatastoreSummary">AWS
   * API Reference</a></p>
   */
  class DatastoreSummary
  {
  public:
    AWS_MEDICALIMAGING_API DatastoreSummary();
    AWS_MEDICALIMAGING_API DatastoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DatastoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The data store identifier.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline DatastoreSummary& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline DatastoreSummary& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline DatastoreSummary& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The data store name.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The data store name.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The data store name.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The data store name.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The data store name.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The data store name.</p>
     */
    inline DatastoreSummary& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The data store name.</p>
     */
    inline DatastoreSummary& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The data store name.</p>
     */
    inline DatastoreSummary& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>The data store status.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }

    /**
     * <p>The data store status.</p>
     */
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }

    /**
     * <p>The data store status.</p>
     */
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }

    /**
     * <p>The data store status.</p>
     */
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = std::move(value); }

    /**
     * <p>The data store status.</p>
     */
    inline DatastoreSummary& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}

    /**
     * <p>The data store status.</p>
     */
    inline DatastoreSummary& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline bool DatastoreArnHasBeenSet() const { return m_datastoreArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline void SetDatastoreArn(const char* value) { m_datastoreArnHasBeenSet = true; m_datastoreArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline DatastoreSummary& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline DatastoreSummary& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline DatastoreSummary& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}


    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline DatastoreSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline DatastoreSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline DatastoreSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline DatastoreSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStatus m_datastoreStatus;
    bool m_datastoreStatusHasBeenSet = false;

    Aws::String m_datastoreArn;
    bool m_datastoreArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
