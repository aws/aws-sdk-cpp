/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/JobOperation.h>
#include <aws/s3control/model/JobReport.h>
#include <aws/s3control/model/JobManifest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobManifestGenerator.h>
#include <aws/s3control/model/S3Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID that creates the job.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreateJobRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether confirmation is required before Amazon S3 runs the job.
     * Confirmation is only required for jobs created through the Amazon S3
     * console.</p>
     */
    inline bool GetConfirmationRequired() const { return m_confirmationRequired; }
    inline bool ConfirmationRequiredHasBeenSet() const { return m_confirmationRequiredHasBeenSet; }
    inline void SetConfirmationRequired(bool value) { m_confirmationRequiredHasBeenSet = true; m_confirmationRequired = value; }
    inline CreateJobRequest& WithConfirmationRequired(bool value) { SetConfirmationRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that you want this job to perform on every object listed in the
     * manifest. For more information about the available actions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Operations</a>
     * in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const JobOperation& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = JobOperation>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = JobOperation>
    CreateJobRequest& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline const JobReport& GetReport() const { return m_report; }
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
    template<typename ReportT = JobReport>
    void SetReport(ReportT&& value) { m_reportHasBeenSet = true; m_report = std::forward<ReportT>(value); }
    template<typename ReportT = JobReport>
    CreateJobRequest& WithReport(ReportT&& value) { SetReport(std::forward<ReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateJobRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline const JobManifest& GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = JobManifest>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = JobManifest>
    CreateJobRequest& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateJobRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numerical priority for this job. Higher numbers indicate higher
     * priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CreateJobRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * role that Batch Operations will use to run this job's action on every object in
     * the manifest.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags to associate with the S3 Batch Operations job. This is an
     * optional parameter. </p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<S3Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<S3Tag>>
    CreateJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = S3Tag>
    CreateJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attribute container for the ManifestGenerator details. Jobs must be
     * created with either a manifest file or a ManifestGenerator, but not both.</p>
     */
    inline const JobManifestGenerator& GetManifestGenerator() const { return m_manifestGenerator; }
    inline bool ManifestGeneratorHasBeenSet() const { return m_manifestGeneratorHasBeenSet; }
    template<typename ManifestGeneratorT = JobManifestGenerator>
    void SetManifestGenerator(ManifestGeneratorT&& value) { m_manifestGeneratorHasBeenSet = true; m_manifestGenerator = std::forward<ManifestGeneratorT>(value); }
    template<typename ManifestGeneratorT = JobManifestGenerator>
    CreateJobRequest& WithManifestGenerator(ManifestGeneratorT&& value) { SetManifestGenerator(std::forward<ManifestGeneratorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_confirmationRequired{false};
    bool m_confirmationRequiredHasBeenSet = false;

    JobOperation m_operation;
    bool m_operationHasBeenSet = false;

    JobReport m_report;
    bool m_reportHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    JobManifest m_manifest;
    bool m_manifestHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<S3Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    JobManifestGenerator m_manifestGenerator;
    bool m_manifestGeneratorHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
