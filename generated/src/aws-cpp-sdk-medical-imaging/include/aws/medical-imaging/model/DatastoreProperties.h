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
    AWS_MEDICALIMAGING_API DatastoreProperties() = default;
    AWS_MEDICALIMAGING_API DatastoreProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DatastoreProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    DatastoreProperties& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store name.</p>
     */
    inline const Aws::String& GetDatastoreName() const { return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    template<typename DatastoreNameT = Aws::String>
    void SetDatastoreName(DatastoreNameT&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::forward<DatastoreNameT>(value); }
    template<typename DatastoreNameT = Aws::String>
    DatastoreProperties& WithDatastoreName(DatastoreNameT&& value) { SetDatastoreName(std::forward<DatastoreNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store status.</p>
     */
    inline DatastoreStatus GetDatastoreStatus() const { return m_datastoreStatus; }
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }
    inline void SetDatastoreStatus(DatastoreStatus value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }
    inline DatastoreProperties& WithDatastoreStatus(DatastoreStatus value) { SetDatastoreStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the Key Management Service (KMS)
     * key for accessing encrypted data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    DatastoreProperties& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the authorizer's Lambda function.</p>
     */
    inline const Aws::String& GetLambdaAuthorizerArn() const { return m_lambdaAuthorizerArn; }
    inline bool LambdaAuthorizerArnHasBeenSet() const { return m_lambdaAuthorizerArnHasBeenSet; }
    template<typename LambdaAuthorizerArnT = Aws::String>
    void SetLambdaAuthorizerArn(LambdaAuthorizerArnT&& value) { m_lambdaAuthorizerArnHasBeenSet = true; m_lambdaAuthorizerArn = std::forward<LambdaAuthorizerArnT>(value); }
    template<typename LambdaAuthorizerArnT = Aws::String>
    DatastoreProperties& WithLambdaAuthorizerArn(LambdaAuthorizerArnT&& value) { SetLambdaAuthorizerArn(std::forward<LambdaAuthorizerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const { return m_datastoreArn; }
    inline bool DatastoreArnHasBeenSet() const { return m_datastoreArnHasBeenSet; }
    template<typename DatastoreArnT = Aws::String>
    void SetDatastoreArn(DatastoreArnT&& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = std::forward<DatastoreArnT>(value); }
    template<typename DatastoreArnT = Aws::String>
    DatastoreProperties& WithDatastoreArn(DatastoreArnT&& value) { SetDatastoreArn(std::forward<DatastoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DatastoreProperties& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data store was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DatastoreProperties& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStatus m_datastoreStatus{DatastoreStatus::NOT_SET};
    bool m_datastoreStatusHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_lambdaAuthorizerArn;
    bool m_lambdaAuthorizerArnHasBeenSet = false;

    Aws::String m_datastoreArn;
    bool m_datastoreArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
