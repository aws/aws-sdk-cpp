/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/LambdaInvokeOperation.h>
#include <aws/s3control/model/S3CopyObjectOperation.h>
#include <aws/s3control/model/S3SetObjectAclOperation.h>
#include <aws/s3control/model/S3SetObjectTaggingOperation.h>
#include <aws/s3control/model/S3DeleteObjectTaggingOperation.h>
#include <aws/s3control/model/S3InitiateRestoreObjectOperation.h>
#include <aws/s3control/model/S3SetObjectLegalHoldOperation.h>
#include <aws/s3control/model/S3SetObjectRetentionOperation.h>
#include <aws/s3control/model/S3ReplicateObjectOperation.h>
#include <aws/s3control/model/S3ComputeObjectChecksumOperation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The operation that you want this job to perform on every object listed in the
   * manifest. For more information about the available operations, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Operations</a>
   * in the <i>Amazon S3 User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobOperation">AWS
   * API Reference</a></p>
   */
  class JobOperation
  {
  public:
    AWS_S3CONTROL_API JobOperation() = default;
    AWS_S3CONTROL_API JobOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Directs the specified job to invoke an Lambda function on every object in the
     * manifest.</p>
     */
    inline const LambdaInvokeOperation& GetLambdaInvoke() const { return m_lambdaInvoke; }
    inline bool LambdaInvokeHasBeenSet() const { return m_lambdaInvokeHasBeenSet; }
    template<typename LambdaInvokeT = LambdaInvokeOperation>
    void SetLambdaInvoke(LambdaInvokeT&& value) { m_lambdaInvokeHasBeenSet = true; m_lambdaInvoke = std::forward<LambdaInvokeT>(value); }
    template<typename LambdaInvokeT = LambdaInvokeOperation>
    JobOperation& WithLambdaInvoke(LambdaInvokeT&& value) { SetLambdaInvoke(std::forward<LambdaInvokeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Directs the specified job to run a PUT Copy object call on every object in
     * the manifest.</p>
     */
    inline const S3CopyObjectOperation& GetS3PutObjectCopy() const { return m_s3PutObjectCopy; }
    inline bool S3PutObjectCopyHasBeenSet() const { return m_s3PutObjectCopyHasBeenSet; }
    template<typename S3PutObjectCopyT = S3CopyObjectOperation>
    void SetS3PutObjectCopy(S3PutObjectCopyT&& value) { m_s3PutObjectCopyHasBeenSet = true; m_s3PutObjectCopy = std::forward<S3PutObjectCopyT>(value); }
    template<typename S3PutObjectCopyT = S3CopyObjectOperation>
    JobOperation& WithS3PutObjectCopy(S3PutObjectCopyT&& value) { SetS3PutObjectCopy(std::forward<S3PutObjectCopyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Directs the specified job to run a <code>PutObjectAcl</code> call on every
     * object in the manifest.</p>  <p>This functionality is not supported by
     * directory buckets.</p> 
     */
    inline const S3SetObjectAclOperation& GetS3PutObjectAcl() const { return m_s3PutObjectAcl; }
    inline bool S3PutObjectAclHasBeenSet() const { return m_s3PutObjectAclHasBeenSet; }
    template<typename S3PutObjectAclT = S3SetObjectAclOperation>
    void SetS3PutObjectAcl(S3PutObjectAclT&& value) { m_s3PutObjectAclHasBeenSet = true; m_s3PutObjectAcl = std::forward<S3PutObjectAclT>(value); }
    template<typename S3PutObjectAclT = S3SetObjectAclOperation>
    JobOperation& WithS3PutObjectAcl(S3PutObjectAclT&& value) { SetS3PutObjectAcl(std::forward<S3PutObjectAclT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Directs the specified job to run a PUT Object tagging call on every object in
     * the manifest.</p>  <p>This functionality is not supported by directory
     * buckets.</p> 
     */
    inline const S3SetObjectTaggingOperation& GetS3PutObjectTagging() const { return m_s3PutObjectTagging; }
    inline bool S3PutObjectTaggingHasBeenSet() const { return m_s3PutObjectTaggingHasBeenSet; }
    template<typename S3PutObjectTaggingT = S3SetObjectTaggingOperation>
    void SetS3PutObjectTagging(S3PutObjectTaggingT&& value) { m_s3PutObjectTaggingHasBeenSet = true; m_s3PutObjectTagging = std::forward<S3PutObjectTaggingT>(value); }
    template<typename S3PutObjectTaggingT = S3SetObjectTaggingOperation>
    JobOperation& WithS3PutObjectTagging(S3PutObjectTaggingT&& value) { SetS3PutObjectTagging(std::forward<S3PutObjectTaggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Directs the specified job to execute a DELETE Object tagging call on every
     * object in the manifest.</p>  <p>This functionality is not supported by
     * directory buckets.</p> 
     */
    inline const S3DeleteObjectTaggingOperation& GetS3DeleteObjectTagging() const { return m_s3DeleteObjectTagging; }
    inline bool S3DeleteObjectTaggingHasBeenSet() const { return m_s3DeleteObjectTaggingHasBeenSet; }
    template<typename S3DeleteObjectTaggingT = S3DeleteObjectTaggingOperation>
    void SetS3DeleteObjectTagging(S3DeleteObjectTaggingT&& value) { m_s3DeleteObjectTaggingHasBeenSet = true; m_s3DeleteObjectTagging = std::forward<S3DeleteObjectTaggingT>(value); }
    template<typename S3DeleteObjectTaggingT = S3DeleteObjectTaggingOperation>
    JobOperation& WithS3DeleteObjectTagging(S3DeleteObjectTaggingT&& value) { SetS3DeleteObjectTagging(std::forward<S3DeleteObjectTaggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Directs the specified job to initiate restore requests for every archived
     * object in the manifest.</p>  <p>This functionality is not supported by
     * directory buckets.</p> 
     */
    inline const S3InitiateRestoreObjectOperation& GetS3InitiateRestoreObject() const { return m_s3InitiateRestoreObject; }
    inline bool S3InitiateRestoreObjectHasBeenSet() const { return m_s3InitiateRestoreObjectHasBeenSet; }
    template<typename S3InitiateRestoreObjectT = S3InitiateRestoreObjectOperation>
    void SetS3InitiateRestoreObject(S3InitiateRestoreObjectT&& value) { m_s3InitiateRestoreObjectHasBeenSet = true; m_s3InitiateRestoreObject = std::forward<S3InitiateRestoreObjectT>(value); }
    template<typename S3InitiateRestoreObjectT = S3InitiateRestoreObjectOperation>
    JobOperation& WithS3InitiateRestoreObject(S3InitiateRestoreObjectT&& value) { SetS3InitiateRestoreObject(std::forward<S3InitiateRestoreObjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3SetObjectLegalHoldOperation& GetS3PutObjectLegalHold() const { return m_s3PutObjectLegalHold; }
    inline bool S3PutObjectLegalHoldHasBeenSet() const { return m_s3PutObjectLegalHoldHasBeenSet; }
    template<typename S3PutObjectLegalHoldT = S3SetObjectLegalHoldOperation>
    void SetS3PutObjectLegalHold(S3PutObjectLegalHoldT&& value) { m_s3PutObjectLegalHoldHasBeenSet = true; m_s3PutObjectLegalHold = std::forward<S3PutObjectLegalHoldT>(value); }
    template<typename S3PutObjectLegalHoldT = S3SetObjectLegalHoldOperation>
    JobOperation& WithS3PutObjectLegalHold(S3PutObjectLegalHoldT&& value) { SetS3PutObjectLegalHold(std::forward<S3PutObjectLegalHoldT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3SetObjectRetentionOperation& GetS3PutObjectRetention() const { return m_s3PutObjectRetention; }
    inline bool S3PutObjectRetentionHasBeenSet() const { return m_s3PutObjectRetentionHasBeenSet; }
    template<typename S3PutObjectRetentionT = S3SetObjectRetentionOperation>
    void SetS3PutObjectRetention(S3PutObjectRetentionT&& value) { m_s3PutObjectRetentionHasBeenSet = true; m_s3PutObjectRetention = std::forward<S3PutObjectRetentionT>(value); }
    template<typename S3PutObjectRetentionT = S3SetObjectRetentionOperation>
    JobOperation& WithS3PutObjectRetention(S3PutObjectRetentionT&& value) { SetS3PutObjectRetention(std::forward<S3PutObjectRetentionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Directs the specified job to invoke <code>ReplicateObject</code> on every
     * object in the job's manifest.</p>  <p>This functionality is not supported
     * by directory buckets.</p> 
     */
    inline const S3ReplicateObjectOperation& GetS3ReplicateObject() const { return m_s3ReplicateObject; }
    inline bool S3ReplicateObjectHasBeenSet() const { return m_s3ReplicateObjectHasBeenSet; }
    template<typename S3ReplicateObjectT = S3ReplicateObjectOperation>
    void SetS3ReplicateObject(S3ReplicateObjectT&& value) { m_s3ReplicateObjectHasBeenSet = true; m_s3ReplicateObject = std::forward<S3ReplicateObjectT>(value); }
    template<typename S3ReplicateObjectT = S3ReplicateObjectOperation>
    JobOperation& WithS3ReplicateObject(S3ReplicateObjectT&& value) { SetS3ReplicateObject(std::forward<S3ReplicateObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Directs the specified job to compute checksum values for every object in the
     * manifest.</p>
     */
    inline const S3ComputeObjectChecksumOperation& GetS3ComputeObjectChecksum() const { return m_s3ComputeObjectChecksum; }
    inline bool S3ComputeObjectChecksumHasBeenSet() const { return m_s3ComputeObjectChecksumHasBeenSet; }
    template<typename S3ComputeObjectChecksumT = S3ComputeObjectChecksumOperation>
    void SetS3ComputeObjectChecksum(S3ComputeObjectChecksumT&& value) { m_s3ComputeObjectChecksumHasBeenSet = true; m_s3ComputeObjectChecksum = std::forward<S3ComputeObjectChecksumT>(value); }
    template<typename S3ComputeObjectChecksumT = S3ComputeObjectChecksumOperation>
    JobOperation& WithS3ComputeObjectChecksum(S3ComputeObjectChecksumT&& value) { SetS3ComputeObjectChecksum(std::forward<S3ComputeObjectChecksumT>(value)); return *this;}
    ///@}
  private:

    LambdaInvokeOperation m_lambdaInvoke;
    bool m_lambdaInvokeHasBeenSet = false;

    S3CopyObjectOperation m_s3PutObjectCopy;
    bool m_s3PutObjectCopyHasBeenSet = false;

    S3SetObjectAclOperation m_s3PutObjectAcl;
    bool m_s3PutObjectAclHasBeenSet = false;

    S3SetObjectTaggingOperation m_s3PutObjectTagging;
    bool m_s3PutObjectTaggingHasBeenSet = false;

    S3DeleteObjectTaggingOperation m_s3DeleteObjectTagging;
    bool m_s3DeleteObjectTaggingHasBeenSet = false;

    S3InitiateRestoreObjectOperation m_s3InitiateRestoreObject;
    bool m_s3InitiateRestoreObjectHasBeenSet = false;

    S3SetObjectLegalHoldOperation m_s3PutObjectLegalHold;
    bool m_s3PutObjectLegalHoldHasBeenSet = false;

    S3SetObjectRetentionOperation m_s3PutObjectRetention;
    bool m_s3PutObjectRetentionHasBeenSet = false;

    S3ReplicateObjectOperation m_s3ReplicateObject;
    bool m_s3ReplicateObjectHasBeenSet = false;

    S3ComputeObjectChecksumOperation m_s3ComputeObjectChecksum;
    bool m_s3ComputeObjectChecksumHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
