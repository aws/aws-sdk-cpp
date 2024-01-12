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


    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline BillOfMaterialsImportJob& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline BillOfMaterialsImportJob& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline BillOfMaterialsImportJob& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline BillOfMaterialsImportJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline BillOfMaterialsImportJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline BillOfMaterialsImportJob& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline const ConfigurationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline void SetStatus(const ConfigurationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline void SetStatus(ConfigurationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline BillOfMaterialsImportJob& WithStatus(const ConfigurationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline BillOfMaterialsImportJob& WithStatus(ConfigurationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline const Aws::String& GetS3uri() const{ return m_s3uri; }

    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline bool S3uriHasBeenSet() const { return m_s3uriHasBeenSet; }

    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline void SetS3uri(const Aws::String& value) { m_s3uriHasBeenSet = true; m_s3uri = value; }

    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline void SetS3uri(Aws::String&& value) { m_s3uriHasBeenSet = true; m_s3uri = std::move(value); }

    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline void SetS3uri(const char* value) { m_s3uriHasBeenSet = true; m_s3uri.assign(value); }

    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline BillOfMaterialsImportJob& WithS3uri(const Aws::String& value) { SetS3uri(value); return *this;}

    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline BillOfMaterialsImportJob& WithS3uri(Aws::String&& value) { SetS3uri(std::move(value)); return *this;}

    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline BillOfMaterialsImportJob& WithS3uri(const char* value) { SetS3uri(value); return *this;}


    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline BillOfMaterialsImportJob& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline BillOfMaterialsImportJob& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline BillOfMaterialsImportJob& WithMessage(const char* value) { SetMessage(value); return *this;}

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
