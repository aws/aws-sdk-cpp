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
   * <p>The properties associated with the data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DatastoreProperties">AWS
   * API Reference</a></p>
   */
  class DatastoreProperties
  {
  public:
    AWS_MEDICALIMAGING_API DatastoreProperties();
    AWS_MEDICALIMAGING_API DatastoreProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DatastoreProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline DatastoreProperties& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline DatastoreProperties& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline DatastoreProperties& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store name.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }
    inline DatastoreProperties& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}
    inline DatastoreProperties& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}
    inline DatastoreProperties& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store status.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = std::move(value); }
    inline DatastoreProperties& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}
    inline DatastoreProperties& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the Key Management Service (KMS)
     * key for accessing encrypted data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline DatastoreProperties& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline DatastoreProperties& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline DatastoreProperties& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }
    inline bool DatastoreArnHasBeenSet() const { return m_datastoreArnHasBeenSet; }
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = value; }
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = std::move(value); }
    inline void SetDatastoreArn(const char* value) { m_datastoreArnHasBeenSet = true; m_datastoreArn.assign(value); }
    inline DatastoreProperties& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}
    inline DatastoreProperties& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}
    inline DatastoreProperties& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DatastoreProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DatastoreProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline DatastoreProperties& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DatastoreProperties& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStatus m_datastoreStatus;
    bool m_datastoreStatusHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

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
