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
    AWS_SUPPLYCHAIN_API BillOfMaterialsImportJob() = default;
    AWS_SUPPLYCHAIN_API BillOfMaterialsImportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API BillOfMaterialsImportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The BillOfMaterialsImportJob instanceId.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    BillOfMaterialsImportJob& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BillOfMaterialsImportJob jobId.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    BillOfMaterialsImportJob& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BillOfMaterialsImportJob ConfigurationJobStatus.</p>
     */
    inline ConfigurationJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConfigurationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BillOfMaterialsImportJob& WithStatus(ConfigurationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI from which the CSV is read.</p>
     */
    inline const Aws::String& GetS3uri() const { return m_s3uri; }
    inline bool S3uriHasBeenSet() const { return m_s3uriHasBeenSet; }
    template<typename S3uriT = Aws::String>
    void SetS3uri(S3uriT&& value) { m_s3uriHasBeenSet = true; m_s3uri = std::forward<S3uriT>(value); }
    template<typename S3uriT = Aws::String>
    BillOfMaterialsImportJob& WithS3uri(S3uriT&& value) { SetS3uri(std::forward<S3uriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the BillOfMaterialsImportJob has reached a terminal state, there will be
     * a message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BillOfMaterialsImportJob& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ConfigurationJobStatus m_status{ConfigurationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_s3uri;
    bool m_s3uriHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
