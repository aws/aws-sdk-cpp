/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/OutputConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CopyProjectVersionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CopyProjectVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyProjectVersion"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline const Aws::String& GetSourceProjectArn() const { return m_sourceProjectArn; }
    inline bool SourceProjectArnHasBeenSet() const { return m_sourceProjectArnHasBeenSet; }
    template<typename SourceProjectArnT = Aws::String>
    void SetSourceProjectArn(SourceProjectArnT&& value) { m_sourceProjectArnHasBeenSet = true; m_sourceProjectArn = std::forward<SourceProjectArnT>(value); }
    template<typename SourceProjectArnT = Aws::String>
    CopyProjectVersionRequest& WithSourceProjectArn(SourceProjectArnT&& value) { SetSourceProjectArn(std::forward<SourceProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline const Aws::String& GetSourceProjectVersionArn() const { return m_sourceProjectVersionArn; }
    inline bool SourceProjectVersionArnHasBeenSet() const { return m_sourceProjectVersionArnHasBeenSet; }
    template<typename SourceProjectVersionArnT = Aws::String>
    void SetSourceProjectVersionArn(SourceProjectVersionArnT&& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = std::forward<SourceProjectVersionArnT>(value); }
    template<typename SourceProjectVersionArnT = Aws::String>
    CopyProjectVersionRequest& WithSourceProjectVersionArn(SourceProjectVersionArnT&& value) { SetSourceProjectVersionArn(std::forward<SourceProjectVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline const Aws::String& GetDestinationProjectArn() const { return m_destinationProjectArn; }
    inline bool DestinationProjectArnHasBeenSet() const { return m_destinationProjectArnHasBeenSet; }
    template<typename DestinationProjectArnT = Aws::String>
    void SetDestinationProjectArn(DestinationProjectArnT&& value) { m_destinationProjectArnHasBeenSet = true; m_destinationProjectArn = std::forward<DestinationProjectArnT>(value); }
    template<typename DestinationProjectArnT = Aws::String>
    CopyProjectVersionRequest& WithDestinationProjectArn(DestinationProjectArnT&& value) { SetDestinationProjectArn(std::forward<DestinationProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    CopyProjectVersionRequest& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket and folder location where the training output for the source
     * model version is placed.</p>
     */
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    CopyProjectVersionRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CopyProjectVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CopyProjectVersionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopyProjectVersionRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceProjectArn;
    bool m_sourceProjectArnHasBeenSet = false;

    Aws::String m_sourceProjectVersionArn;
    bool m_sourceProjectVersionArnHasBeenSet = false;

    Aws::String m_destinationProjectArn;
    bool m_destinationProjectArnHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
