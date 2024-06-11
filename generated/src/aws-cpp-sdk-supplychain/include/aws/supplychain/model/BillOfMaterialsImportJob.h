/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/ConfigurationJobStatus.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The BillOfMaterialsImportJob details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/BillOfMaterialsImportJob">AWS
   * API Reference</a></p>
   */
  class BillOfMaterialsImportJob
  {
  public:
    AWS_SUPPLYCHAIN_API BillOfMaterialsImportJob();
    AWS_SUPPLYCHAIN_API BillOfMaterialsImportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API BillOfMaterialsImportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline BillOfMaterialsImportJob& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline BillOfMaterialsImportJob& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline BillOfMaterialsImportJob& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline BillOfMaterialsImportJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline BillOfMaterialsImportJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline BillOfMaterialsImportJob& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline const ConfigurationJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConfigurationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConfigurationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BillOfMaterialsImportJob& WithStatus(const ConfigurationJobStatus& value) { SetStatus(value); return *this;}
    inline BillOfMaterialsImportJob& WithStatus(ConfigurationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline const Aws::String& GetS3uri() const{ return m_s3uri; }
    inline bool S3uriHasBeenSet() const { return m_s3uriHasBeenSet; }
    inline void SetS3uri(const Aws::String& value) { m_s3uriHasBeenSet = true; m_s3uri = value; }
    inline void SetS3uri(Aws::String&& value) { m_s3uriHasBeenSet = true; m_s3uri = std::move(value); }
    inline void SetS3uri(const char* value) { m_s3uriHasBeenSet = true; m_s3uri.assign(value); }
    inline BillOfMaterialsImportJob& WithS3uri(const Aws::String& value) { SetS3uri(value); return *this;}
    inline BillOfMaterialsImportJob& WithS3uri(Aws::String&& value) { SetS3uri(std::move(value)); return *this;}
    inline BillOfMaterialsImportJob& WithS3uri(const char* value) { SetS3uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BillOfMaterialsImportJob& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BillOfMaterialsImportJob& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BillOfMaterialsImportJob& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ConfigurationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_s3uri;
    bool m_s3uriHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
